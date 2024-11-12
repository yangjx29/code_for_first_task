int h, l;
int a [(933 - 923)] [(657 - 647)];

int find1 (int p, int q) {
    int max;
    max = a[p][q];
    int i;
    {
        i = 969 - 969;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < l) {
            if (a[p][i] > max) {
                return (430 - 429);
            }
            i++;
        };
    }
    return (946 - 944);
}

int find2 (int p, int q) {
    int min = a[p][q];
    int j;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        j = 825 - 825;
        while (h > j) {
            if (min > a[j][q]) {
                return (650 - 647);
            }
            j++;
        };
    }
    return (719 - 717);
}

int main () {
    int i, j;
    scanf ("%d,%d", &h, &l);
    {
        i = 38 - 38;
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
        while (i < h) {
            {
                j = 902 - 902;
                while (j < l) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    for (i = (735 - 735); i < h; i++) {
        j = 108 - 108;
        while (j < l) {
            if (find1 (i, j) == find2 (i, j)) {
                printf ("%d+%d", i, j);
                return (720 - 720);
            }
            j++;
        };
    }
    printf ("No");
    return (125 - 125);
}

