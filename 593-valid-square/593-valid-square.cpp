class Solution
{
    public:
        float distance(int x1, int y1, int x2, int y2)
        {

            return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        }

    bool validSquare(vector<int> &p1, vector<int> &p2, vector< int > &p3, vector< int > &p4)
    {

        vector<float> distances;

        distances.push_back(distance(p1[0], p1[1], p2[0], p2[1]));
        distances.push_back(distance(p1[0], p1[1], p3[0], p3[1]));
        distances.push_back(distance(p1[0], p1[1], p4[0], p4[1]));
        distances.push_back(distance(p3[0], p3[1], p2[0], p2[1]));
        distances.push_back(distance(p4[0], p4[1], p2[0], p2[1]));
        distances.push_back(distance(p3[0], p3[1], p4[0], p4[1]));
        sort(distances.begin(), distances.end());
        for (auto i: distances)
            if (i == 0)
                return 0;
        if (distances[0] == distances[1] and distances[1] == distances[2] and distances[2] == distances[3] and distances[4] == distances[5])
            return 1;

        return false;
    }
};