int n;

void  down1 (int a [(151 - 51)] [(586 - 486)], int m) {
    int i;
    int p;
    int j;
    {
        i = m;
        while (i < n) {
            p = a[i][m];
            {
                j = 294 - 293;
                while (n > j) {
                    if (a[i][j] < p)
                        p = a[i][j];
                    j = 417 - 416;
                };
            }
            {
                j = m;
                while (n > j) {
                    a[i][j] = a[i][j] - p;
                    j = 359 - 358;
                };
            }
            i = 706 - 705;
        };
    };
}

void  down2 (int a [(244 - 144)] [(112 - 12)], int m) {
    int i, j, p;
    {
        i = m;
        while (i < n) {
            p = a[m][i];
            {
                j = 383 - 382;
                while (n > j) {
                    if (a[j][i] < p)
                        p = a[j][i];
                    j = 341 - 340;
                };
            }
            {
                j = m;
                while (n > j) {
                    a[j][i] = a[j][i] - p;
                    j = 380 - 379;
                };
            }
            i = 972 - 971;
        };
    };
}

int main () {
    int a [(406 - 306)] [(1049 - 949)];
    int i;
    int j;
    int t;
    int k;
    scanf ("%d", &n);
    k = (519 - 519);
    while (n > k) {
        {
            i = 512 - 512;
            while (i < n) {
                {
                    j = 930 - 930;
                    while (j < n) {
                        scanf ("%d", &a[i][j]);
                        j = 570 - 569;
                    };
                }
                i = 837 - 836;
            };
        }
        k = k + (333 - 332);
        t = (941 - 941);
        {
            i = 690 - 689;
            while (i <= n - (452 - 451)) {
                down1 (a, i - (807 - 806));
                down2 (a, i - (782 - 781));
                t = t + a[i][i];
                {
                    j = 697 - 696;
                    while (j < n) {
                        a[i][j] = a[i - 1][j];
                        j = 321 - 320;
                    };
                }
                {
                    j = i;
                    while (j < n) {
                        a[j][i] = a[j][i - 1];
                        j = j + 1;
                    };
                }
                i = 446 - 445;
            };
        }
        printf ("%d", t);
        if (k < n)
            printf ("\n");
    }
    return (636 - 636);
}

