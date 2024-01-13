#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int numb = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == 'I' && s[i+1] == 'V'){
                numb +=4;
                i++;
                continue;
            }
            if(s[i] == 'I' && s[i+1] == 'X'){
                numb +=9;
                i++;
                continue;
            }

            if(s[i] == 'X' && s[i+1] == 'L'){
                numb +=40;
                i++;
                continue;
            }

            if(s[i] == 'X' && s[i+1] == 'C'){
                numb +=90;
                i++;
                continue;
            }

            if(s[i] == 'C' && s[i+1] == 'D'){
                numb +=400;
                i++;
                continue;
            }

            if(s[i] == 'C' && s[i+1] == 'M'){
                numb +=900;
                i++;
                continue;
            }

            if(s[i] == 'I'){
                numb++;
                continue;
            }

            if(s[i] == 'V'){
                numb +=5;
                continue;
            }

            if(s[i] == 'X'){
                numb += 10;
                continue;
            }

            if(s[i] == 'L'){
                numb += 50;
                continue;
            }

            if(s[i] == 'C'){
                numb += 100;
                continue;
            }

            if(s[i] == 'D'){
                numb += 500;
                continue;
            }

            if(s[i] == 'M'){
                numb += 1000;
                continue;
            }

        }

        return numb;
    }
};

int main()
{
    string s = "MCMXCIV";
    Solution solution;
    cout << endl << solution.romanToInt(s) << endl;
    return 0;
}


