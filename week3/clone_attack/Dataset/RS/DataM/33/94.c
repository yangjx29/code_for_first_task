int main () {
    char an [(1880 - 880)] [(1117 - 861)];
    int n;
    int i;
    int j;
    int bn [1000];
    scanf ("%d", &n);
    {
        i = 904 - 904;
        while (n > i) {
            scanf ("%s", an[i]);
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
            i = i + 1;
        };
    }
    for (i = (299 - 299); n > i; i++)
        bn[i] = strlen (an[i]);
    {
        i = 0;
        while (i < n) {
            for (j = 0; bn[i] > j; j++) {
                if (!('A' != an[i][j])) {
                    an[i][j] = 'T';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    continue;
                }
                if (an[i][j] == 'T') {
                    an[i][j] = 'A';
                    continue;
                }
                if (an[i][j] == 'C') {
                    an[i][j] = 'G';
                    continue;
                }
                if (an[i][j] == 'G') {
                    an[i][j] = 'C';
                    continue;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", an[i]);
    return 0;
}

