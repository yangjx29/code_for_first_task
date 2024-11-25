int main () {
    int j;
    int dot;
    int min;
    int QgX6vC8;
    int i;
    int k;
    int d6hi0I;
    j = (489 - 489);
    dot = (783 - 783);
    min = 29999;
    int a [(1435 - 935)], b [500];
    scanf ("%d", &QgX6vC8);
    for (i = 0; QgX6vC8 > i; i = i + 1)
        scanf ("%d", &a[i]);
    {
        i = 0;
        while (i < QgX6vC8) {
            if (!(0 != a[i] % 2))
                continue;
            else {
                b[j] = a[i];
                j = j + 1;
            }
            i++;
        };
    }
    {
        k = 0;
        while (j > k) {
            {
                i = 0;
                while (j > i) {
                    if (min > b[i]) {
                        min = b[i];
                    }
                    else
                        continue;
                    i++;
                };
            }
            if (!(0 == dot))
                printf (",");
            printf ("%d", min);
            {
                d6hi0I = 0;
                while (d6hi0I < j) {
                    if (b[d6hi0I] == min) {
                        b[d6hi0I] = 29999;
                        break;
                    }
                    d6hi0I = d6hi0I + 1;
                };
            }
            k = k + 1;
            min = 29999;
            dot = dot + 1;
        };
    }
    printf ("\n");
    return 0;
}

