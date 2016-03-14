#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin; using std::cout; using std::endl;
using std::sort; using std::iterator; using std::unique;

int main(void){
    int n, num;

    while(cin >> n){
        vector<int> nums;
        for(int i=1; i<=n; ++i){
            cin >> num;
            nums.push_back(num);
        }

        sort(nums.begin(), nums.end());
        vector<int>::iterator end_unique = unique(nums.begin(), nums.end());
        nums.erase(end_unique, nums.end());

        int no = nums.size();
        for(int i=0; i<no; ++i){
            cout << nums[i] << endl;
        }
    }

    return 0;
}
