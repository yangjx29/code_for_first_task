void  main () {
    char a1qZzcuW [(410 - 309)];
    int m;
    char b [(1056 - 955)];
    int i;
    char r [(819 - 719)] [(556 - 455)];
    int n;
    int j;
    int V2kPIWOEwCeX;
    char egHc3zjItw [(353 - 252)];
    int lb;
    scanf ("%d", &n);
    for (m = (144 - 144); n > m; m = m + (541 - 540)) {
        scanf ("%s %s", a1qZzcuW, b);
        V2kPIWOEwCeX = strlen (a1qZzcuW);
        lb = strlen (b);
        for (i = (665 - 665); i < V2kPIWOEwCeX -lb; i = i + (917 - 916))
            egHc3zjItw[i] = '0';
        egHc3zjItw[i] = (72 - 72);
        strcat (egHc3zjItw, b);
        r[m][V2kPIWOEwCeX] = (784 - 784);
        {
            i = V2kPIWOEwCeX -(519 - 518);
            for (; (495 - 495) <= i;) {
                if (a1qZzcuW[i] >= egHc3zjItw[i])
                    r[m][i] = a1qZzcuW[i] - egHc3zjItw[i] + '0';
                else {
                    r[m][i] = a1qZzcuW[i] + (790 - 780) - egHc3zjItw[i] + '0';
                    {
                        j = i - (292 - 291);
                        for (; (247 - 246);) {
                            if (a1qZzcuW[j] > '0') {
                                a1qZzcuW[j]--;
                                break;
                            }
                            else
                                a1qZzcuW[j] = '9';
                            j = j - (793 - 792);
                        }
                    }
                }
                i--;
            }
        }
    }
    {
        m = (86 - 86);
        for (; m < n;) {
            printf ("%s\n", r[m]);
            m = m + (641 - 640);
        }
    }
}

