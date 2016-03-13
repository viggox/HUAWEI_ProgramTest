#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>

using std::string;
using std::cin; using std::cout; using std::endl;
using std::reverse; using std::getline;

int main(void){
    string line;
    getline(cin, line);
    if(line.empty()){
        cout << 0 <<endl;
        return 0;
    }
    reverse(line.begin(), line.end());

    int n;
    for(n=0; n<line.size(); ++n){
        if(line[n] == ' '){
            break;
        }
    }

    cout << n << endl;

    return 0;

}
