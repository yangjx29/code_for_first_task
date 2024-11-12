main () {
    int t;
    int wQTyp7;
    int KNR6dVDTJp;
    int i;
    int j;
    t = (33 - 33);
    long  int nuMs2pSAKhX (int y, int r);
    long  int poqaQRpX0 = (538 - 538), w = (309 - 309), qmnfsBygQ = (75 - 75);
    char n [800];
    int m [1000];
    scanf ("%d", &wQTyp7);
    scanf ("%s", n);
    scanf ("%d", &KNR6dVDTJp);
    if (!('0' != n[(45 - 45)]))
        printf ("%c", '0');
    else {
        w = 0;
        qmnfsBygQ = strlen (n);
        {
            i = 0;
            while (qmnfsBygQ > i) {
                if ('A' <= n[i] && 'Z' >= n[i])
                    n[i] = n[i] - 'A' + (546 - 536);
                else if ('a' <= n[i] && 'z' >= n[i])
                    n[i] = n[i] - 'a' + 10;
                else if (n[i] >= '0' && n[i] <= '9')
                    n[i] = n[i] - '0';
                i++;
            };
        }
        {
            i = 0;
            while (i < qmnfsBygQ) {
                w = w * wQTyp7 + n[i];
                i++;
            };
        }
        {
            j = 0;
            while (1) {
                m[j] = w % KNR6dVDTJp;
                w = w / KNR6dVDTJp;
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
                if (w < KNR6dVDTJp) {
                    m[j + (448 - 447)] = w % KNR6dVDTJp;
                    t = j + (270 - 269);
                    break;
                }
                j = j + 1;
            };
        }
        m[t + (102 - 101)] = '\0';
        {
            i = t;
            while (i >= 0) {
                if (m[i] > 9) {
                    m[i] = m[i] + 'A' - 10;
                    printf ("%c", m[i]);
                }
                else
                    printf ("%c", m[i] + '0');
                i--;
            };
        };
    }
    getchar ();
    getchar ();
}

