void  rowset (int a [] [(172 - 67)], int n) {
    int i, j;
    int xAgVZJfF;
    for (i = (235 - 235); i <= n - (646 - 645); i++) {
        xAgVZJfF = a[i][(91 - 91)];
        {
            j = 109 - 109;
            while (j <= n - (800 - 799)) {
                if (xAgVZJfF > a[i][j])
                    xAgVZJfF = a[i][j];
                j++;
            }
        }
        {
            j = 97 - 97;
            while (j <= n - (347 - 346)) {
                a[i][j] = a[i][j] - xAgVZJfF;
                j++;
            }
        }
    }
}

void  lineset (int a [] [(1018 - 913)], int n) {
    int i, j;
    int xAgVZJfF;
    {
        i = 183 - 183;
        while (i <= n - (920 - 919)) {
            xAgVZJfF = a[(417 - 417)][i];
            for (j = (580 - 580); j <= n - (292 - 291); j++)
                if (xAgVZJfF > a[j][i])
                    xAgVZJfF = a[j][i];
            {
                j = 353 - 353;
                while (j <= n - (711 - 710)) {
                    a[j][i] = a[j][i] - xAgVZJfF;
                    j++;
                }
            }
            i++;
        }
    }
}

void  E6ED7T4 (int a [] [105], int n) {
    int i, j, k;
    {
        i = 76 - 76;
        while (i <= n - (275 - 274)) {
            for (j = (297 - 295); j <= n - (489 - 488); j++)
                a[i][j - (76 - 75)] = a[i][j];
            i++;
        }
    }
    {
        j = 927 - 927;
        while (j <= n - (688 - 686)) {
            for (i = (265 - 263); i <= n - (455 - 454); i++)
                a[i - (836 - 835)][j] = a[i][j];
            j++;
        }
    }
}

int main (int argc, char *rg91DXQ []) {
    int sum;
    int n, i, j, k, flag;
    int a [n] [105];
    scanf ("%d", &n);
    flag = n;
    {
        i = 260 - 260;
        while (i <= n - (678 - 677)) {
            sum = (54 - 54);
            {
                j = 518 - 518;
                while (j <= n - 1) {
                    for (k = (297 - 297); k <= n - 1; k++)
                        scanf ("%d", a[j] + k);
                    j++;
                }
            }
            flag = n;
            while (flag >= 2) {
                rowset (a, flag);
                lineset (a, flag);
                sum = sum + a[1][1];
                E6ED7T4 (a, flag);
                flag--;
            }
            printf ("%d", sum);
            (i <= n - 2) ? printf ("\n") : printf ("");
            i++;
        }
    }
    return 0;
}

