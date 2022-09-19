class Solution
{
    public:
        vector<vector < string>> findDuplicate(vector<string> &paths)
        {

            vector<vector < string>> ans;

            unordered_map<string, vector < string>> fp;

            for (string path: paths)
            {
                string pt;
                int i;
                for (i = 0; i < path.size() and path[i] != ' '; i++)
                {

                    pt += path[i];
                }
                pt += '/';
                i++;

                while (i < path.size())
                {

                    string data, file;

                    while (i < path.size() and path[i] != '(')
                    {

                        file += path[i++];
                    }
                    while (i < path.size() and path[i] != ' ')
                    {

                        data += path[i++];
                    }
                    fp[data].push_back(pt + file);
                    i++;
                }
            }

            for (auto &x: fp)
            {
                if (x.second.size() > 1)
                {
                    ans.push_back(x.second);
                }
            }

            return ans;
        }
};