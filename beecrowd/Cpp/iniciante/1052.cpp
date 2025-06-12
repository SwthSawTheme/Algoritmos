#include <iostream>
#include <unordered_map>

int main(){
    std::unordered_map<int, std::string> hashmap;
    int a;
    
    hashmap[1] = "January";
    hashmap[2] = "February";
    hashmap[3] = "March";
    hashmap[4] = "April";
    hashmap[5] = "May";
    hashmap[6] = "June";
    hashmap[7] = "July";
    hashmap[8] = "August";
    hashmap[9] = "September";
    hashmap[10] = "October";
    hashmap[11] = "November";
    hashmap[12] = "December";

    std::cin >> a;
    std::cout << hashmap[a] << std::endl;

    return 0;
}