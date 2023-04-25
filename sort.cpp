#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

inline int partition(vector<int>& a, int l, int r) {
    int x = a[r], i = l - 1;
    // i serves as a position holder
    for (int j = l; j < r; ++j) {
        if (a[j] <= x) {
            swap(a[++i], a[j]);
        }
    }
    // a[i + 1] is sure to be larger than a[r]
    swap(a[i + 1], a[r]);
    return i + 1;
}

inline int randomPartition(vector<int>& a, int l, int r) {
    int i = rand() % (r - l + 1) + l;
    printf("randomPartition[%d, %d]: %d\n", l, r, i);
    swap(a[i], a[r]);
    return partition(a, l, r);
}

inline void quick_sort(vector<int>& a, int l, int r) {
    int idx = randomPartition(a, l, r);
    printf("quick_sort idx = %d\n", idx);
    if (r - l <= 1) {
        return;
    }
    quick_sort(a, l, idx);
    quick_sort(a, idx, r);
    return;
}

inline void quick_sort(std::vector<int> &a) {
    if (a.size() < 1) {
        return;
    }
    quick_sort(a, 0, a.size() - 1);
}

int main(void) {
    std::vector<int> a{3, 1, 2, 4};
    quick_sort(a);
    for (const int &item : a) {
        printf("%d\n", item);
    }
    return 0;
}