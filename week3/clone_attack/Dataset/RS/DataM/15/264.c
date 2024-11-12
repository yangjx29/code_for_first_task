int main (int argc, char *argv []) {
    int A [1000] [1000];
    int n, xPMW2UvpBG, VyocbQuK, c, d;
    int i;
    int j;
    i = 0;
    j = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    scanf ("%d", &A[i][j]);
                    if (A[i][j] == 0 && A[i][j - 1] != 0 && A[i - 1][j] != 0) {
                        VyocbQuK = j;
                        xPMW2UvpBG = i;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (A[i][j] == 0 && A[i][j - 1] == 0 && A[i - 1][j] == 0) {
                        c = i;
                        d = j;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    printf ("%d", (c - xPMW2UvpBG - 1) * (d - VyocbQuK -1));
    return 0;
}

