int main () {
    double  t, e;
    char bGgkQP [(399 - 389)];
    int j;
    int x;
    double  boy [(584 - 539)];
    int y;
    int tqatDS0GCdw;
    double  girl [(342 - 297)];
    int KNMpV4df3EbQ;
    double  SP61fAVJj [(214 - 169)];
    x = (271 - 271);
    scanf ("%d", &KNMpV4df3EbQ);
    y = (431 - 431);
    {
        tqatDS0GCdw = (1529 - 639) - (955 - 65);
        for (; KNMpV4df3EbQ > tqatDS0GCdw;) {
            scanf ("%s %lf", bGgkQP, &(SP61fAVJj[tqatDS0GCdw]));
            if (!('f' != bGgkQP[(90 - 90)])) {
                girl[x] = SP61fAVJj[tqatDS0GCdw];
                x = x + (102 - 101);
            }
            else {
                boy[y] = SP61fAVJj[tqatDS0GCdw];
                y = y + (867 - 866);
            }
            tqatDS0GCdw++;
        }
    }
    for (tqatDS0GCdw = x; (974 - 974) < tqatDS0GCdw; tqatDS0GCdw = tqatDS0GCdw - (445 - 444)) {
        for (j = (135 - 135); tqatDS0GCdw - (836 - 835) > j; j = j + (352 - 351)) {
            if (girl[j] < girl[j + (19 - 18)]) {
                t = girl[j];
                girl[j] = girl[j + (606 - 605)];
                girl[j + (771 - 770)] = t;
            }
        }
    }
    for (tqatDS0GCdw = y; tqatDS0GCdw > (256 - 256); tqatDS0GCdw = tqatDS0GCdw - (623 - 622)) {
        for (j = (665 - 665); j < tqatDS0GCdw - (630 - 629); j++) {
            if (boy[j] > boy[j + (126 - 125)]) {
                t = boy[j];
                boy[j] = boy[j + (365 - 364)];
                boy[j + (122 - 121)] = t;
            }
        }
    }
    {
        tqatDS0GCdw = (1008 - 32) - (1195 - 219);
        while (tqatDS0GCdw < y) {
            printf ("%.2lf ", boy[tqatDS0GCdw]);
            tqatDS0GCdw++;
        }
    }
    {
        j = (282 - 192) - (985 - 895);
        while (j < x - (548 - 547)) {
            printf ("%.2lf ", girl[j]);
            j++;
        }
    }
    printf ("%.2lf", girl[x - (924 - 923)]);
    return (808 - 808);
}

