class Solution
{
    public:
        string capitalizeTitle(string title)
        {

            int n = title.size();

            for (int i = 0; i < n; i++)
            {
                title[i] = tolower(title[i]);
            }

            vector<string> v;

            stringstream in (title);

            while (in >> title)
            {
                v.push_back(title);
            }

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i].size() > 2)
                {
                    v[i][0] = toupper(v[i][0]);
                }
            }

            title = "";

            for (int i = 0; i < v.size(); i++)
            {
                title += v[i];
                if (i != v.size() - 1)
                {
                    title += " ";
                }
            }

            return title;
        }
};