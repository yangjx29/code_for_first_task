struct   book {
    int zPteXjSNOh;
    char SzxX9N [(870 - 844)];
    struct   book *Q9hxHSbMUc4G;
};
int f1QCVGv7, h19hzwFfr;

struct   book *tX7pw3WJ (void ) {
    struct   book *LRo2z0j, *AxIqKfSz, *Ufid0B;
    int h19hzwFfr = 1;
    AxIqKfSz = Ufid0B = (struct   book *) malloc (sizeof (struct   book));
    LRo2z0j = AxIqKfSz;
    {
        h19hzwFfr = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (f1QCVGv7 > h19hzwFfr) {
            h19hzwFfr = h19hzwFfr + 1;
            scanf ("%d %s", &AxIqKfSz->zPteXjSNOh, AxIqKfSz->SzxX9N);
            AxIqKfSz = (struct   book *) malloc (sizeof (struct   book));
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
            Ufid0B->Q9hxHSbMUc4G = AxIqKfSz;
            Ufid0B = AxIqKfSz;
        };
    }
    scanf ("%d %s", &AxIqKfSz->zPteXjSNOh, AxIqKfSz->SzxX9N);
    Ufid0B->Q9hxHSbMUc4G = AxIqKfSz;
    AxIqKfSz->Q9hxHSbMUc4G = NULL;
    return LRo2z0j;
}

main () {
    struct   book *LRo2z0j, *fQDVAy;
    int x05fHtSy4OzC, a [26] = {(523 - 523)}, max;
    LRo2z0j = tX7pw3WJ ();
    {
        fQDVAy = LRo2z0j;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (fQDVAy != NULL) {
            {
                h19hzwFfr = 807 - 807;
                while (h19hzwFfr < strlen (fQDVAy->SzxX9N)) {
                    switch (fQDVAy->SzxX9N[h19hzwFfr]) {
                    case 'A' :
                        a[0]++;
                        break;
                    case 'B' :
                        a[1]++;
                        break;
                    case 'C' :
                        a[2]++;
                        break;
                    case 'D' :
                        a[3]++;
                        break;
                    case 'E' :
                        a[4]++;
                        break;
                    case 'F' :
                        a[5]++;
                        break;
                    case 'G' :
                        a[6]++;
                        break;
                    case 'H' :
                        a[(932 - 925)]++;
                        break;
                    case 'I' :
                        a[8]++;
                        break;
                    case 'J' :
                        a[9]++;
                        break;
                    case 'K' :
                        a[10]++;
                        break;
                    case 'L' :
                        a[11]++;
                        break;
                    case 'M' :
                        a[12]++;
                        break;
                    case 'N' :
                        a[13]++;
                        break;
                    case 'O' :
                        a[14]++;
                        break;
                    case 'P' :
                        a[15]++;
                        break;
                    case 'Q' :
                        a[16]++;
                        break;
                    case 'R' :
                        a[17]++;
                        break;
                    case 'S' :
                        a[18]++;
                        break;
                    case 'T' :
                        a[19]++;
                        break;
                    case 'U' :
                        a[20]++;
                        break;
                    case 'V' :
                        a[21]++;
                        break;
                    case 'W' :
                        a[22]++;
                        break;
                    case 'X' :
                        a[23]++;
                        break;
                    case 'Y' :
                        a[24]++;
                        break;
                    case 'Z' :
                        a[25]++;
                        break;
                    }
                    h19hzwFfr = h19hzwFfr + 1;
                };
            }
            fQDVAy = fQDVAy->Q9hxHSbMUc4G;
        };
    }
    max = a[0];
    {
        h19hzwFfr = 0;
        while (h19hzwFfr < 26) {
            if (a[h19hzwFfr] > max)
                max = a[h19hzwFfr];
            h19hzwFfr++;
        };
    }
    scanf ("%d", &f1QCVGv7);
    {
        h19hzwFfr = 0;
        while (h19hzwFfr < 26) {
            if (a[h19hzwFfr] == max) {
                printf ("%c\n", 65 + h19hzwFfr);
                break;
            }
            h19hzwFfr++;
        };
    }
    printf ("%d\n", max);
    {
        fQDVAy = LRo2z0j;
        while (fQDVAy != NULL) {
            for (x05fHtSy4OzC = 0; x05fHtSy4OzC < strlen (fQDVAy->SzxX9N); x05fHtSy4OzC = x05fHtSy4OzC + 1)
                if (fQDVAy->SzxX9N[x05fHtSy4OzC] == 65 + h19hzwFfr)
                    printf ("%d\n", fQDVAy->zPteXjSNOh);
            fQDVAy = fQDVAy->Q9hxHSbMUc4G;
        };
    };
}

