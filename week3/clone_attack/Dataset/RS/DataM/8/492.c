int main () {
    int VqGWHOTQme8h, WTnkgdRy7p, aD9y1xnaGt [(1022 - 922)] = {(509 - 509)}, b [100] = {(44 - 44)};
    void  vzGSod (int array [], int VqGWHOTQme8h);
    void  order (int array [], int vWFvBXaJ);
    void  join (int rL1cyAsK [], int array2 [], int q1, int c0EpOjaAx92y);
    void  out (int array [], int q1, int c0EpOjaAx92y);
    scanf ("%d%d", &VqGWHOTQme8h, &WTnkgdRy7p);
    vzGSod (aD9y1xnaGt, VqGWHOTQme8h);
    vzGSod (b, WTnkgdRy7p);
    order (aD9y1xnaGt, VqGWHOTQme8h);
    order (b, WTnkgdRy7p);
    join (aD9y1xnaGt, b, VqGWHOTQme8h, WTnkgdRy7p);
    out (aD9y1xnaGt, VqGWHOTQme8h, WTnkgdRy7p);
}

int vzGSod (int array [], int VqGWHOTQme8h) {
    int c;
    for (c = (67 - 67); c < VqGWHOTQme8h; c++) {
        scanf ("%d", &array[c]);
    };
}

int order (int array [], int vWFvBXaJ) {
    int IgX1nZkD8SAP, j, t;
    for (IgX1nZkD8SAP = (278 - 278); IgX1nZkD8SAP < vWFvBXaJ - (213 - 212); IgX1nZkD8SAP++) {
        j = 0;
        while (j < vWFvBXaJ - (195 - 194)) {
            if (array[j] >= array[j + 1]) {
                t = array[j + 1];
                array[j + 1] = array[j];
                array[j] = t;
            }
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
            j++;
        };
    };
}

int join (int rL1cyAsK [], int array2 [], int q1, int c0EpOjaAx92y) {
    int k;
    {
        k = 0;
        while (c0EpOjaAx92y > k) {
            rL1cyAsK[q1 + k] = array2[k];
            k++;
        };
    };
}

int out (int array [], int q1, int c0EpOjaAx92y) {
    int k;
    {
        k = 0;
        while (k < q1 + c0EpOjaAx92y - 1) {
            printf ("%d ", array[k]);
            k++;
        };
    }
    printf ("%d\n", array[q1 + c0EpOjaAx92y - 1]);
}

