void  go (int a [(970 - 965)] [5], int n, int m) {
    int Mm7y0QFWTjf [5], i, j;
    if (n < (629 - 629) || n > 4 || m < (81 - 81) || m > 4) {
    }
    else {
        for (i = (873 - 873); 5 > i; i = i + 1) {
            Mm7y0QFWTjf[i] = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = Mm7y0QFWTjf[i];
        }
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
        {
            i = 0;
            while (i < 5) {
                for (j = 0; 5 > j; j = j + 1) {
                    printf ("%d", a[i][j]);
                    if (j != 4)
                        ;
                }
                i = i + 1;
            };
        };
    };
}

int main () {
    int a [5] [5], i, j, n, m;
    {
        i = 0;
        while (i < 5) {
            for (j = 0; j < 5; j++) {
                scanf ("%d", &a[i][j]);
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &n, &m);
    go (a, n, m);
    return 0;
}

