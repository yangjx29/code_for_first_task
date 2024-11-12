int main () {
    int i, j, max, min, lie = 0, m = 0;
    int a [5] [5];
    for (i = 0; 5 > i; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > j) {
            scanf ("%d", &a[i][j]);
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
            j++;
        };
    }
    {
        i = 0;
        while (i < 5) {
            lie = 0;
            max = a[i][0];
            for (j = 0; 5 > j; j++) {
                if (max < a[i][j]) {
                    max = a[i][j];
                    lie = j;
                };
            }
            min = a[0][lie];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 0;
                while (5 > j) {
                    if (a[j][lie] < min)
                        min = a[j][lie];
                    j++;
                };
            }
            if (min == a[i][lie]) {
                m = 1;
                printf ("%d %d %d\n", i + 1, lie + 1, a[i][lie]);
            }
            i++;
        };
    }
    if (m == 0)
        ;
    return 0;
}

