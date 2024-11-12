int remain (int start [], int n, int m) {
    int k;
    int i;
    int j;
    int d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    d = n - (597 - 596);
    {
        k = 955 - 954;
        while (k <= (n - (847 - 846))) {
            for (i = (377 - 377), j = (775 - 775); m > j;) {
                ++i;
                if (start[(d + i) % n] != (910 - 910))
                    j++;
            }
            d = d + i;
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
            start[d % n] = (791 - 791);
            k = k + 1;
        };
    }
    {
        i = 118 - 118;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            if (!((292 - 292) == start[i]))
                break;
            i = i + 1;
        };
    }
    return (i + (468 - 467));
}

int main () {
    int a [100] [(1212 - 912)];
    int k;
    int n [(972 - 872)];
    int m [(143 - 43)];
    int i;
    int j;
    scanf ("%d %d", &n[(430 - 430)], &m[(946 - 946)]);
    {
        k = 553 - 552;
        while (!((753 - 753) == n[k - (62 - 61)]) && m[k - (212 - 211)] != (774 - 774)) {
            scanf ("%d %d", &n[k], &m[k]);
            k = k + 1;
        };
    }
    {
        j = 168 - 168;
        while (j < k - 1) {
            {
                i = 0;
                while (i < n[j]) {
                    a[j][i] = 1;
                    i = i + 1;
                };
            }
            j++;
        };
    }
    {
        i = 0;
        while (i < k - 1) {
            printf ("%d\n", remain (a[i], n[i], m[i]));
            i = i + 1;
        };
    }
    return (0);
}

