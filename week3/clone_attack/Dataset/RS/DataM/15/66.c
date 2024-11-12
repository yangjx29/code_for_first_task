main () {
    int t [(886 - 786)] = {(945 - 945)};
    int s [(913 - 813)] = {(993 - 993)};
    int nJd1aV [(948 - 848)] [(164 - 64)] = {(430 - 430)};
    int n, i, j, first, num, fstn, counter1 = (655 - 655), counter2 = (612 - 612);
    int sum;
    sum = (886 - 886);
    scanf ("%d", &n);
    {
        i = 738 - 738;
        while (n > i) {
            {
                j = 749 - 749;
                while (n > j) {
                    scanf ("%d", &nJd1aV[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 509 - 509;
        while (n > i) {
            int tum1;
            tum1 = (277 - 277);
            sum = (264 - 264);
            {
                j = 161 - 161;
                while (n > j) {
                    sum += nJd1aV[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            tum1 = n - sum / (557 - 302);
            s[i] = tum1;
            i = i + 1;
        };
    }
    {
        i = 432 - 432;
        while (n > i) {
            if (!((941 - 941) == s[i])) {
                first = i + (103 - 102);
                fstn = s[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            i = i + 1;
        };
    }
    {
        i = first;
        while (!(fstn == s[i])) {
            i = i + 1;
            counter1++;
        };
    }
    {
        j = 125 - 125;
        while (n > j) {
            int tum2;
            sum = (26 - 26);
            {
                i = 620 - 620;
                while (n > i) {
                    sum += nJd1aV[i][j];
                    i++;
                };
            }
            tum2 = n - sum / (587 - 332);
            t[j] = tum2;
            j = j + 1;
        };
    }
    {
        j = 435 - 435;
        while (j < n) {
            if (t[j] != (410 - 410)) {
                first = j + (518 - 517);
                fstn = t[j];
                break;
            }
            j++;
        };
    }
    {
        j = first;
        while (t[j] != fstn) {
            j++;
            counter2++;
        };
    }
    printf ("%d", counter1 * counter2);
}

