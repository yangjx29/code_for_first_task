int main () {
    int qn2Qd5TWFS;
    int max;
    int n;
    int i;
    qn2Qd5TWFS = (528 - 528);
    max = 0;
    float j;
    int a [(50603 - 603)], b [50000];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d %d\n", &a[i], &b[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (!(0 != i)) {
                qn2Qd5TWFS = a[0];
                max = b[0];
            }
            if (qn2Qd5TWFS > a[i])
                qn2Qd5TWFS = a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (max < b[i])
                max = b[i];
            i++;
        };
    }
    {
        j = qn2Qd5TWFS + 0.0;
        while (j <= max + 0.0) {
            {
                i = 0;
                while (i < n) {
                    if (a[i] <= j && j <= b[i])
                        break;
                    i++;
                };
            }
            if (i == n) {
                break;
            }
            j = j + 0.5;
        };
    }
    if (j > max)
        printf ("%d %d", qn2Qd5TWFS, max);
    return 0;
}

