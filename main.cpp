#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> eineeins = {"1 "};
    for (int i = 0; i < 17; ++i) {
        int j = 1;
        std::string tmp_str = "";
        while(j < eineeins[i].length()) {
            int k = 1; 
            while (eineeins[i][j]==eineeins[i][j-1]) {
                k++;
                j++;
            }
            std::string count = std::to_string(k);
            tmp_str += count;            
            tmp_str += eineeins[i][j-1];
            j++;
        }
        tmp_str += " ";
        eineeins.push_back(tmp_str);
    }
    for (int i = 0; i < eineeins.size(); ++i)
        std::cout << eineeins[i] << "\n";
    return 0;
}