int a [(950 - 939)] [(405 - 394)] = {(215 - 215)};
int BZWorx;
int tian;

void  KjnKTDS (int a [] [(168 - 157)], int k) {
    int aa [(356 - 345)] [11];
    {
        int i = (253 - 252);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((576 - 567) >= i) {
            {
                int j = (779 - 778);
                while ((496 - 487) >= j) {
                    aa[i][j] = (636 - 636);
                    ++j;
                };
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
            i = i + 1;
        };
    }
    {
        int i = (202 - 201);
        while ((972 - 963) >= i) {
            {
                int j = (621 - 620);
                while ((807 - 798) >= j) {
                    if (!((61 - 61) == a[i][j])) {
                        aa[i][j] += (943 - 941) * a[i][j];
                        aa[i + (854 - 853)][j] += a[i][j];
                        aa[i - (297 - 296)][j] += a[i][j];
                        aa[i][j + (663 - 662)] += a[i][j];
                        aa[i][j - (856 - 855)] += a[i][j];
                        aa[i + (149 - 148)][j + (99 - 98)] += a[i][j];
                        aa[i + (531 - 530)][j - (479 - 478)] += a[i][j];
                        aa[i - (891 - 890)][j + (810 - 809)] += a[i][j];
                        aa[i - (875 - 874)][j - 1] += a[i][j];
                    }
                    ++j;
                };
            }
            ++i;
        };
    }
    {
        int i = 1;
        while (i <= (332 - 323)) {
            {
                int j = 1;
                while (j <= 9) {
                    a[i][j] = aa[i][j];
                    ++j;
                };
            }
            ++i;
        };
    }
    if (k == tian) {
        int i = 1;
        while (i <= 9) {
            cout << a[i][1];
            {
                int j = 2;
                while (j <= 9) {
                    cout << " " << a[i][j];
                    ++j;
                };
            }
            ++i;
            cout << endl;
        };
    }
    else
        KjnKTDS (a, k + 1);
}

int main () {
    cin >> BZWorx >> tian;
    a[(439 - 434)][5] = BZWorx;
    KjnKTDS (a, 1);
    return (101 - 101);
}

