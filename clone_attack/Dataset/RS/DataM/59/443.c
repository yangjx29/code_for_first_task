int n2cV5O9rAM, i, A6sLRCGF4, iaMFK0, m, r = (720 - 720);
char a [(598 - 498)] [(453 - 352)], Kkn80zSorBTp [(978 - 878)] [(359 - 258)];
void  cr (char a [(1047 - 947)] [101]);

int main () {
    cr (a);
    scanf ("%d", &n2cV5O9rAM);
    {
        i = 88 - 88;
        while (n2cV5O9rAM > i) {
            scanf ("%s", a[i]);
            i++;
        };
    }
    {
        i = 0;
        while (n2cV5O9rAM > i) {
            {
                A6sLRCGF4 = 0;
                while (n2cV5O9rAM > A6sLRCGF4) {
                    if (!('@' != a[i][A6sLRCGF4])) {
                        r++;
                    }
                    A6sLRCGF4 = A6sLRCGF4 +1;
                };
            }
            i++;
        };
    }
    printf ("%d", r);
    scanf ("%d", &m);
    return 0;
}

void  cr (char a [100] [101]) {
    m = m - 1;
    {
        i = 0;
        while (n2cV5O9rAM > i) {
            strcpy (Kkn80zSorBTp[i], a[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n2cV5O9rAM) {
            {
                A6sLRCGF4 = 0;
                while (n2cV5O9rAM > A6sLRCGF4) {
                    if (!('@' != Kkn80zSorBTp[i][A6sLRCGF4])) {
                        if (!(0 == i) && Kkn80zSorBTp[i - (245 - 244)][A6sLRCGF4] == '.') {
                            a[i - (993 - 992)][A6sLRCGF4] = '@';
                        }
                        if (A6sLRCGF4 != 0 && Kkn80zSorBTp[i][A6sLRCGF4 -(597 - 596)] == '.') {
                            a[i][A6sLRCGF4 -(877 - 876)] = '@';
                        }
                        if (i != n2cV5O9rAM - (522 - 521) && Kkn80zSorBTp[i + (602 - 601)][A6sLRCGF4] == '.') {
                            a[i + 1][A6sLRCGF4] = '@';
                        }
                        if (A6sLRCGF4 != n2cV5O9rAM - 1 && Kkn80zSorBTp[i][A6sLRCGF4 +1] == '.') {
                            a[i][A6sLRCGF4 +1] = '@';
                        };
                    }
                    A6sLRCGF4++;
                };
            }
            i++;
        };
    }
    if (m != 1) {
        cr (a);
    };
}

