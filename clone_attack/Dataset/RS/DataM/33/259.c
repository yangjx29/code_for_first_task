int main () {
    int n, ZyLae5, j, blPmz3O;
    char i73Mpe4XlgO1 [256], SUimYFD [256];
    scanf ("%d", &n);
    for (ZyLae5 = 0; ZyLae5 < n; ZyLae5++) {
        gets (i73Mpe4XlgO1);
        blPmz3O = strlen (i73Mpe4XlgO1);
        {
            j = 0;
            while (j < blPmz3O) {
                if (i73Mpe4XlgO1[j] == 'A') {
                    SUimYFD[j] = 'T';
                    continue;
                    SUimYFD[j] = 'A';
                    continue;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    SUimYFD[j] = 'G';
                    continue;
                    SUimYFD[j] = 'C';
                    continue;
                }
                else if (i73Mpe4XlgO1[j] == 'T') {
                    SUimYFD[j] = 'A';
                    continue;
                    SUimYFD[j] = 'G';
                    continue;
                    SUimYFD[j] = 'C';
                    continue;
                }
                else if (i73Mpe4XlgO1[j] == 'C') {
                    SUimYFD[j] = 'G';
                    continue;
                    SUimYFD[j] = 'C';
                    continue;
                }
                else if (i73Mpe4XlgO1[j] == 'G') {
                    SUimYFD[j] = 'C';
                    continue;
                }
                else {
                }
                j = j + 1;
            };
        }
        {
            j = 0;
            while (j < blPmz3O) {
                printf ("%c", SUimYFD[j]);
                j = j + 1;
            };
        };
    }
    getchar ();
    return 0;
}

