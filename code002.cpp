#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>

using std::string;
using std::cin; using std::cout; using std::endl;
using std::sort; using std::getline;

int main(void){
    string line;
    char s;

    getline(cin, line);
    cin >> s;
    if(line.empty()){
        cout << 0 << endl;
        return 0;
    }
    sort(line.begin(), line.end());
    int n1 = line.find(s);
    int n2 = line.rfind(s);
    if(n1 == -1){
        cout << 0 << endl;
    }
    else{
        cout << n2-n1+1 << endl;
    }

    return 0;
}
