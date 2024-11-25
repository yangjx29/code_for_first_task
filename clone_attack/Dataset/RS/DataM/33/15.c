int main () {
    char h91S0dsYb [1000] [256];
    int n, N5K10g;
    scanf ("%d\n", &n);
    {
        int i = 0;
        while (i < n - 1) {
            scanf ("%s\n", h91S0dsYb[i]);
            i++;
        };
    }
    scanf ("%s", h91S0dsYb[n - 1]);
    {
        int i = 0;
        while (i < n) {
            N5K10g = strlen (h91S0dsYb[i]);
            {
                int j = 0;
                while (j < N5K10g) {
                    if (h91S0dsYb[i][j] == 'A') {
                        h91S0dsYb[i][j] = 'T';
                    }
                    else {
                        if (h91S0dsYb[i][j] == 'T') {
                            h91S0dsYb[i][j] = 'A';
                        }
                        else {
                            if (h91S0dsYb[i][j] == 'C') {
                                h91S0dsYb[i][j] = 'G';
                            }
                            else {
                                h91S0dsYb[i][j] = 'C';
                            };
                        };
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%s\n", h91S0dsYb[i]);
            i++;
        };
    }
    return 0;
}

