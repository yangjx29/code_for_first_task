int max (int a, int b) {
    return (b < a ? a : b);
}

int min (int a, int b) {
    return (b > a ? a : b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int i;
    int imin;
    int imax;
    int k;
    int LxX6Jy;
    int ex;
    int lenth [200] = {0};
    i = 0;
    imin = 100;
    imax = 0;
    k = 0;
    char oT2ZG7Di [200] [(563 - 513)];
    char c;
    while ((577 - 576)) {
        c = getchar ();
        if (('a' <= c && 'z' >= c) || (c >= 'A' && 'Z' >= c)) {
            lenth[k]++;
            ex = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            oT2ZG7Di[k][i++] = c;
        }
        else if (ex == 1) {
            i = 0;
            ex = 0;
            imax = max (imax, lenth[k]);
            imin = min (imin, lenth[k]);
            k++;
        }
        if (c == '\n')
            break;
    }
    for (i = 0;; i = i + 1) {
        if (lenth[i] == imax) {
            for (LxX6Jy = 0; LxX6Jy < lenth[i]; LxX6Jy++)
                putchar (oT2ZG7Di[i][LxX6Jy]);
            putchar ('\n');
            break;
        };
    }
    for (i = 0;; i++) {
        if (lenth[i] == imin) {
            for (LxX6Jy = 0; LxX6Jy < lenth[i]; LxX6Jy++)
                putchar (oT2ZG7Di[i][LxX6Jy]);
            putchar ('\n');
            break;
        };
    }
    return 0;
}

