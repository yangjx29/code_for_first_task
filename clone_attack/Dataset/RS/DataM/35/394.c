int main () {
    int a [(981 - 973)] [8];
    int i;
    int k;
    int row;
    int KPdI6H;
    int max;
    int x;
    int min;
    int l;
    scanf ("%d,%d", &row, &KPdI6H);
    {
        i = 0;
        while (row > i) {
            {
                k = 0;
                while (KPdI6H > k) {
                    scanf ("%d", &a[i][k]);
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; row > i; i++) {
        max = a[i][0];
        {
            k = 0;
            while (KPdI6H > k) {
                if (max <= a[i][k]) {
                    max = a[i][k];
                    x = k;
                }
                k = k + 1;
            };
        }
        min = a[0][x];
        for (l = 0; row > l; l++) {
            if (a[l][x] <= min) {
                min = a[l][x];
            };
        }
        if (min == max) {
            printf ("%d+%d", i, x);
            goto CATHERING;
        };
    }
    printf ("No");
CATHERING :
    return 0;
}

