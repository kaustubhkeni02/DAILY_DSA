#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

class Solution {
    int signFunc(int count1, int count2) {
        if (count2 > 0) {
            return 0;
        }

        else if (count1 % 2 != 0) {
            return -1;
        }

        else
            return 1;
    }

public:
    int arraySign(vector<int>& nums) {

        int count1;
        int count2;

        for (auto it : nums) {
            if (it == 0) {
                count2++;
            }

            if (it < 0) {
                count1++;
            }
        }

        return signFunc(count1, count2);
    }
};