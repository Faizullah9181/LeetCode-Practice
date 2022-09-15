class Solution
{
    public:
       	//         vector<int> findOriginalArray(vector<int> &changed)
       	//         {
       	//             int n = changed.size();

       	//             unordered_map<int, int> ump;

       	//             vector<int> ans;

       	//             if (n % 2 != 0) return ans;

       	//             for (auto it: changed)
       	//             {
       	//                 ump[it]++;
       	//             }
       	//             sort(changed.begin(), changed.end());

       	//             for (auto it: changed)
       	//             {
       	//                 if (ump[it] == 0) continue;

       	//                 if (ump[2 *it] == 0)
       	//                 {
       	//                     return {};
       	//                 }

       	//                 if (ump[it] >= 1 && ump[2 *it] >= 1)
       	//                 {
       	//                     ans.push_back(it);
       	//                     ump[it]--;
       	//                     ump[2 *it]--;
       	//                 }
       	//             }

       	//             return ans;
       	//         }

        vector<int> findOriginalArray(vector<int> & changed)
        {

            if (changed.size()  % 2  != 0)
                return {};

            vector<int> ans;
            multiset<int> s;

            for (auto x: changed)
                s.insert(x);

            while (!s.empty())
            {
                int ele = *s.begin();
                s.erase(s.find(ele));

                if (s.find(2 *ele) == s.end())
                    return {};
                s.erase(s.find(2 *ele));
                ans.push_back(ele);
            }
            return ans;
        }
};