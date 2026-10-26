class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // using hashing (optimal solution)
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        int longest = 0;
        int cnt = 0;

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int x = it;
                cnt = 1;
                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt += 1;
                }
                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};

// using hashing (optimal solution)
// unoredered_set<int> st;
// for(int i = 0 ; i < nums.size() ; i++){
//     st.insert(nums[i]);
// }
// int longest = 0;
// int cnt = 0;

// for(auto it : st){
//     if(st.find(it-1) == st.end()){
//         int x = it;
//         cnt = 1;
//         while(st.find(x+1) != st.end()){
//             x = x + 1;
//             cnt+=1;
//         }
//         longest = max(longest , cnt);
//     }
// }

// return longest;

// better solution
// if(nums.size() == 0) return 0;
// int currcnt = 0 ;
// int last_smaller = INT_MIN;
// int longest = 1;

// sort(nums.begin() , nums.end());

// for(int i = 0 ; i < nums.size() ; i++){
//     if(nums[i]-1 == last_smaller){
//         last_smaller = nums[i];
//         currcnt+=1;

//     }

//     else if(nums[i]==last_smaller){
//         continue;
//     }

//     else if(last_smaller != nums[i]-1){
//         currcnt = 1;
//         last_smaller = nums[i];
//     }

//     longest = max(longest , currcnt);
// }

// return longest;
