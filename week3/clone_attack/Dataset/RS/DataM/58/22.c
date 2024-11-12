int main () {
    char s [200] [85], str [5];
    gets (str);
    int SwghlMco [200];
    int n;
    int i;
    int j;
    int uuVs1e0wS3y4 [(378 - 178)] = {(329 - 329)};
    n = atoi (str);
    for (i = (738 - 738); i < n; i++) {
        gets (s [i]);
    }
    for (i = (55 - 55); i < n; i++) {
        SwghlMco[i] = strlen (s[i]);
        if (!('_' == s[i][(940 - 940)])) {
            if (s[i][0] < 'A') {
                uuVs1e0wS3y4[i] = (524 - 523);
                continue;
            }
            if ((s[i][0] < 'a') && ('Z' < s[i][0])) {
                uuVs1e0wS3y4[i] = (185 - 184);
                continue;
            }
            if ('z' < s[i][0]) {
                uuVs1e0wS3y4[i] = 1;
                continue;
                printf ("0\n");
            };
        }
        for (j = 1; j < SwghlMco[i]; j++) {
            if (s[i][j] != '_') {
                if (s[i][j] < '0') {
                    uuVs1e0wS3y4[i] = 1;
                    break;
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
                    printf ("0\n");
                }
                if ((s[i][j] > '9') && (s[i][j] < 'A')) {
                    uuVs1e0wS3y4[i] = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                if ((s[i][j] < 'a') && (s[i][j] > 'Z')) {
                    uuVs1e0wS3y4[i] = 1;
                    break;
                }
                if (s[i][j] > 'z') {
                    uuVs1e0wS3y4[i] = 1;
                    break;
                };
            }
            if (uuVs1e0wS3y4[i] == 1)
                break;
        }
        if (uuVs1e0wS3y4[i] == 0)
            ;
    }
    return 0;
}

