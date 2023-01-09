#include <regex>

class Solution
{
    public:
        bool isNumber(string s)
        {

          regex regex(R"(^[+-]?((\d*\.\d+)|(\d+(\.\d*)?))([eE][+-]?\d+)?$)");

            return regex_match(s, regex);
        }
};