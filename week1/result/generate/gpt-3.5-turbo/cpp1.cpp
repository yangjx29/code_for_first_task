以下是一个用C++编写的快速排序算法示例：

```cpp
#include <iostream>
#include <vector>

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[high]);

        int partitionIndex = i + 1;

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    std::vector<int> arr = {12, 7, 11, 9, 3, 15};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

这段代码实现了一个快速排序算法。快速排序是一种分治算法，它通过选择一个基准元素，将数组分为两部分，一部分小于基准元素，一部分大于基准元素，然后递归地对这两部分进行排序。

在这个示例中，`quickSort`函数接受一个整数向量`arr`以及两个整数`low`和`high`作为参数，表示要排序的数组范围。在函数内部，首先选择数组中的最后一个元素作为基准元素`pivot`，然后遍历数组，将小于基准元素的元素放在基准元素的左边，大于基准元素的元素放在基准元素的右边。最后，将基准元素放在正确的位置，并返回基准元素的索引`partitionIndex`。然后递归地对基准元素左右两部分进行排序。

在`main`函数中，创建一个整数向量`arr`并初始化，然后调用`quickSort`函数对整个数组进行排序。最后输出排序后的数组。