class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size();
        vector<bool> visited(n,false);
        queue<string> q;
        q.push(beginWord);
        int step=1;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string word=q.front();
                if(word==endWord)
                    return step;
                q.pop();
                for(int i=0;i<n;i++){
                    if(!visited[i]&&diffOne(word,wordList[i])){
                        visited[i]=true;
                        q.push(wordList[i]);
                    }
                }
            }
            step++;
        }
        return 0;
    }
    
    bool diffOne(string &s1,string &s2){
        int count=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i])
                count++;
            if(count>1)
                return false;
        }
        return count==1;
    }
};