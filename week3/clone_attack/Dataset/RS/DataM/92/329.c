int h1 [(1189 - 189)];
int h2 [(1962 - 962)];

void  Sort (int vorlxqjT2XRP [], int n) {
    InsertSort (vorlxqjT2XRP, n);
}

void  InsertSort (int A [], int n) {
    int i, j, key;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (j = (616 - 615); j < n; j = j + 1) {
        key = A[j];
        i = j - (759 - 758);
        while ((486 - 486) <= i && key < A[i]) {
            A[i + (803 - 802)] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    };
}

void  QuickSort (int array [], int left, int right) {
    int leftIdx;
    int rightIdx;
    int pivot;
    int temp;
    leftIdx = left;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    rightIdx = right;
    if ((77 - 77) < right - left)
        pivot = (left + right) / 2;
    for (; pivot >= leftIdx && pivot <= rightIdx;) {
        for (; array[leftIdx] < array[pivot] && leftIdx <= pivot;)
            leftIdx = leftIdx + 1;
        while (array[pivot] < array[rightIdx] && rightIdx >= pivot)
            rightIdx = rightIdx - 1;
        temp = array[leftIdx];
        array[leftIdx] = array[rightIdx];
        leftIdx = leftIdx + 1;
        array[rightIdx] = temp;
        rightIdx = rightIdx - 1;
        if (!(pivot != leftIdx - 1)) {
            pivot = rightIdx + 1;
            rightIdx = rightIdx + 1;
        }
        else if (rightIdx + 1 == pivot) {
            pivot = leftIdx - 1;
            leftIdx = leftIdx - 1;
        };
    }
    QuickSort (array, left, pivot - 1);
    QuickSort (array, pivot + 1, right);
}

int Race (int n) {
    int begin2;
    int end2;
    int aEFjU7wWsZ9, end1;
    int i, Nwin = (690 - 690);
    end1 = 0;
    aEFjU7wWsZ9 = n - 1;
    begin2 = n - 1;
    Sort (h1, n);
    end2 = 0;
    Sort (h2, n);
    for (i = 0; i < n; i = i + 1) {
        if (h1[aEFjU7wWsZ9] > h2[begin2]) {
            aEFjU7wWsZ9 = aEFjU7wWsZ9 - 1;
            begin2 = begin2 - 1;
            Nwin = Nwin +1;
        }
        else if (h1[end1] > h2[end2]) {
            end2 = end2 + 1;
            end1 = end1 + 1;
            Nwin++;
        }
        else {
            if (h1[end1] < h2[begin2])
                Nwin = Nwin -1;
            end1++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            begin2 = begin2 - 1;
        };
    }
    return Nwin *200;
}

void  ParseHorse (int n) {
    int i;
    for (i = n - 1; i >= 0; i = i - 1) {
        scanf ("%d", &(h1[i]));
    }
    for (i = n - 1; i >= 0; i--) {
        scanf ("%d", &(h2[i]));
    };
}

int main () {
    int result [50000];
    int i, n = 0;
    scanf ("%d", &i);
    while (i) {
        ParseHorse (i);
        result[n] = Race (i);
        scanf ("%d", &i);
        n = n + 1;
    }
    {
        i = 0;
        while (i < n) {
            printf ("%d", result[i]);
            if (i != n - 1)
                ;
            i++;
        };
    }
    return 0;
}

