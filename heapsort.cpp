#include <iostream>
#include <vector>

// max-heap is a binary tree data structure in which the value of each node is greater than or equal to the values of its children nodes. The main property of a large-ended heap is that the root node always contains the maximum value of the heap.

// Other properties of a large-ended heap include:

// The height of the heap is logarithmic with respect to the number of elements stored in the heap.
// Inserting a new element or deleting the maximum element from a large-ended heap can be performed in O(log n) time, where n is the number of elements in the heap.
// A large-ended heap can be implemented using an array or a linked list data structure.
// Large-ended heaps are commonly used in priority queues and sorting algorithms such as heapsort.
// A large-ended heap can be transformed into a small-ended heap (min-heap) by changing the comparison operator used for the node values.

int upProcess(std::vector<int> &array, int k) {
    int k_parent;
    if (k % 2 == 0) {
        k_parent = (k - 2) / 2;
    } else {
        k_parent = (k - 1) / 2;
    }
    if (array.at(k) > array.at(k_parent)) {
        std::swap(array.at(k), array.at(k_parent));
    }
    return k_parent;
}

void buildHeap(std::vector<int> &array, int root) {
    // sink for left child
    int tmp_child_root = root * 2 + 1;
    if (tmp_child_root < array.size()) {
        if (array.at(root) < array.at(tmp_child_root)) {
            std::swap(array.at(root), array.at(tmp_child_root));
        }
        buildHeap(array, tmp_child_root);
    }
    // sink for right child
    tmp_child_root = root * 2 + 2;
    if (tmp_child_root < array.size()) {
        if (array.at(root) < array.at(tmp_child_root)) {
            std::swap(array.at(root), array.at(tmp_child_root));
        }
        buildHeap(array, tmp_child_root);
    }

    return;
}

void heapSort(std::vector<int> &array) {
    if(array.empty()) {
        return;
    }
    buildHeap(array, 0);

    // maximnal root heap
    for(int current = array.size() - 1; current > 0;) {
        // upProcess and place largest to end
        int k = current;
        while ( k > 0) {
            k = upProcess(array, k);
        }
        // put the maximal to end
        std::swap(array.at(0), array.at(current));
        --current;
        // put the end to head
        std::swap(array.at(current), array.at(0));
    }
}

int main(int argc, char const *argv[])
{
    std::vector<int> array({5, 4, 2, 3, 1, 6});
    heapSort(array);
    for(int i = 0; i < array.size(); ++i) {
        std::cout << array[i] << std::endl;
    }
    return 0;
}
