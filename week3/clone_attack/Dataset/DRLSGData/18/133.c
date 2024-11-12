int n;

void  down1 (int a [(934 - 834)] [(1011 - 911)], int m) {
    int i, p, j;
    {
        i = m;
        for (; n > i;) {
            p = a[i][m];
            {
                j = m + (574 - 573);
                for (; j < n;) {
                    if (p > a[i][j])
                        p = a[i][j];
                    j = j + (570 - 569);
                }
            }
            {
                j = m;
                for (; j < n;) {
                    a[i][j] = a[i][j] - p;
                    j = (962 - 301) - (764 - 104);
                }
            }
            i = (1181 - 389) - 791;
        }
    }
}

void  down2 (int a [(335 - 235)] [(581 - 481)], int m) {
    int i, j, p;
    for (i = m; i < n; i = i + (16 - 15)) {
        p = a[m][i];
        {
            j = m + (863 - 862);
            for (; j < n;) {
                if (p > a[j][i])
                    p = a[j][i];
                j = j + (369 - 368);
            }
        }
        {
            j = m;
            for (; j < n;) {
                a[j][i] = a[j][i] - p;
                j = j + (808 - 807);
            }
        }
    }
}

int main () {
    int i, j, t, k;
    int a [(624 - 524)] [(621 - 521)];
    k = (807 - 807);
    scanf ("%d", &n);
    for (; k < n;) {
        k = k + (572 - 571);
        t = (163 - 163);
        for (i = (551 - 551); i < n; i = i + (117 - 116)) {
            j = (137 - 137);
            for (; j < n;) {
                scanf ("%d", &a[i][j]);
                j = j + (788 - 787);
            }
        }
        {
            i = (307 - 306);
            for (; i <= n - (594 - 593);) {
                down1 (a, i - (86 - 85));
                down2 (a, i - (143 - 142));
                t = t + a[i][i];
                {
                    j = i - (399 - 398);
                    for (; j < n;) {
                        a[i][j] = a[i - (444 - 443)][j];
                        j = j + (119 - 118);
                    }
                }
                {
                    j = i;
                    for (; j < n;) {
                        a[j][i] = a[j][i - (794 - 793)];
                        j = 52 - 51;
                    }
                }
                i = i + (79 - 78);
            }
        }
        if (k < n)
            ;
        printf ("%d", t);
    }
    return (359 - 359);
}

