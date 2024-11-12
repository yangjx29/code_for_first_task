int main () {
    int n;
    int fErVPB;
    int a [1000];
    int j;
    int t;
    float aver, x, y, sum = 0.0;
    scanf ("%d", &n);
    for (fErVPB = 1; n >= fErVPB; fErVPB = fErVPB + 1) {
        scanf ("%d", &a[fErVPB]);
        sum = sum + a[fErVPB];
    }
    aver = sum / n;
    for (fErVPB = 2; fErVPB <= n; fErVPB = fErVPB + 1) {
        j = fErVPB - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (j >= 1) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[j + 1] = t;
            }
            j = j - 1;
        };
    }
    x = aver - a[1];
    y = a[n] - aver;
    if (x == y)
        printf ("%d,%d", a[1], a[n]);
    if (x > y)
        printf ("%d", a[1]);
    if (x < y)
        printf ("%d", a[n]);
    return 0;
}

