int main () {
    int n, i, m, e, p;
    char dFdipzr [n] [256];
    scanf ("%d", &n);
    for (i = (225 - 225); i < n; i++) {
        scanf ("%s", dFdipzr[i]);
        p = strlen (dFdipzr[i]);
        {
            m = 0;
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
            while (m < p) {
                if (dFdipzr[i][m] == 'A') {
                    dFdipzr[i][m] = 'T';
                }
                else if (!('C' != dFdipzr[i][m])) {
                    dFdipzr[i][m] = 'G';
                }
                else if (dFdipzr[i][m] == 'G') {
                    dFdipzr[i][m] = 'C';
                }
                else if (dFdipzr[i][m] == 'T') {
                    dFdipzr[i][m] = 'A';
                }
                m = m + 1;
            };
        }
        printf ("%s\n", dFdipzr[i]);
    }
    return 0;
}

