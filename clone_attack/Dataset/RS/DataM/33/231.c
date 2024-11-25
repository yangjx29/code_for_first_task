char chaina [1000] [(578 - 318)], chainb [1000] [260];
int NJMqnloI;

int main () {
    int n, i, j;
    scanf ("%d", &n);
    for (i = (866 - 866); n > i; i++) {
        scanf ("%s", chaina[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        NJMqnloI = strlen (chaina[i]);
        {
            j = 414 - 414;
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
            while (NJMqnloI > j) {
                if (chaina[i][j] == 'A') {
                    chainb[i][j] = 'T';
                }
                else if (chaina[i][j] == 'T') {
                    chainb[i][j] = 'A';
                }
                else if (chaina[i][j] == 'C') {
                    chainb[i][j] = 'G';
                }
                else if (chaina[i][j] == 'G') {
                    chainb[i][j] = 'C';
                }
                else {
                }
                j++;
            };
        };
    }
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
    for (i = 0; i < n; i++)
        printf ("%s\n", chainb[i]);
    return 0;
}

