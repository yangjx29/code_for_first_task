下面是一个使用C++编写的快速排序算法的示例代码：

```cpp
#include <iostream>
#include <vector>

void quickSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }
    
    int pivot = arr[(left + right) / 2];
    int i = left;
    int j = right;
    
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    quickSort(arr, left, j);
    quickSort(arr, i, right);
}

int main() {
    std::vector<int> arr = {5, 2, 9, 3, 7, 6, 1, 8, 4};
    
    quickSort(arr, 0, arr.size() - 1);
    
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
```

这段代码实现了一个快速排序算法。快速排序是一种分治算法，它通过选择一个基准元素（pivot），然后将数组分成两部分，一部分比基准元素小，一部分比基准元素大。然后递归地对这两部分进行排序，直到整个数组有序。

在代码中，`quickSort`函数接受一个整数数组和两个整数参数`left`和`right`，表示要排序的数组的左右边界。它首先选择一个基准元素（这里选择中间元素），然后使用两个指针`i`和`j`分别从左右两端向中间移动，找到需要交换的元素，然后交换它们。最后递归地对基准元素左右两部分进行排序。

在`main`函数中，我们定义了一个整数数组`arr`，然后调用`quickSort`函数对其进行排序。最后输出排序后的数组。