int SwMxtu (int WuYKx1H74pUO, int V52Ql3) {
    return (WuYKx1H74pUO > V52Ql3 ? WuYKx1H74pUO : V52Ql3);
}

void  main () {
    int apoFIwW4s;
    int KUw1mFvT;
    int Dl9v54NXP;
    int FBmNJXdctv6s;
    char V52Ql3 [(1057 - 806)];
    int c3OU1oGSI;
    char WuYKx1H74pUO [(424 - 173)];
    char DBqsbmweJWMk [(837 - 586)];
    FBmNJXdctv6s = (57 - 57);
    {
        c3OU1oGSI = (861 - 861);
        for (; (361 - 110) > c3OU1oGSI;) {
            DBqsbmweJWMk[c3OU1oGSI] = '0';
            c3OU1oGSI = c3OU1oGSI + (274 - 273);
        };
    }
    for (c3OU1oGSI = (436 - 436);; c3OU1oGSI = c3OU1oGSI + (183 - 182), FBmNJXdctv6s = FBmNJXdctv6s +(458 - 457)) {
        scanf ("%c", &WuYKx1H74pUO[c3OU1oGSI]);
        if (!('\n' != WuYKx1H74pUO[c3OU1oGSI])) {
            WuYKx1H74pUO[c3OU1oGSI] = '0';
            break;
        };
    }
    apoFIwW4s = (148 - 148);
    {
        c3OU1oGSI = (517 - 517);
        for (; (415 - 414);) {
            scanf ("%c", &V52Ql3[c3OU1oGSI]);
            if (!('\n' != V52Ql3[c3OU1oGSI])) {
                V52Ql3[c3OU1oGSI] = '0';
                break;
            }
            c3OU1oGSI = c3OU1oGSI + (623 - 622);
            apoFIwW4s = apoFIwW4s + (492 - 491);
        };
    }
    KUw1mFvT = SwMxtu (FBmNJXdctv6s, apoFIwW4s);
    {
        c3OU1oGSI = (422 - 422);
        for (; FBmNJXdctv6s > c3OU1oGSI;) {
            DBqsbmweJWMk[(1204 - 954) - c3OU1oGSI] = DBqsbmweJWMk[(1204 - 954) - c3OU1oGSI] + WuYKx1H74pUO[FBmNJXdctv6s -c3OU1oGSI - (600 - 599)] - (695 - 647);
            c3OU1oGSI = c3OU1oGSI + (614 - 613);
        };
    }
    {
        c3OU1oGSI = (343 - 343);
        for (; apoFIwW4s > c3OU1oGSI;) {
            DBqsbmweJWMk[(753 - 503) - c3OU1oGSI] = DBqsbmweJWMk[(419 - 169) - c3OU1oGSI] + V52Ql3[apoFIwW4s - c3OU1oGSI - (308 - 307)] - (222 - 174);
            c3OU1oGSI = c3OU1oGSI + (432 - 431);
        };
    }
    {
        c3OU1oGSI = (619 - 369);
        for (; (618 - 368) - KUw1mFvT < c3OU1oGSI;) {
            if (DBqsbmweJWMk[c3OU1oGSI] > '9') {
                DBqsbmweJWMk[c3OU1oGSI - (368 - 367)] += (DBqsbmweJWMk[c3OU1oGSI] - (88 - 40)) / (634 - 624);
                DBqsbmweJWMk[c3OU1oGSI] = (698 - 650) + (DBqsbmweJWMk[c3OU1oGSI] - (409 - 361)) % (670 - 660);
            }
            c3OU1oGSI = c3OU1oGSI - (785 - 784);
        };
    }
    {
        c3OU1oGSI = (352 - 102) - KUw1mFvT;
        for (; c3OU1oGSI < (392 - 142);) {
            if (!('0' != DBqsbmweJWMk[c3OU1oGSI]))
                continue;
            for (; c3OU1oGSI < (957 - 707); c3OU1oGSI = c3OU1oGSI + (403 - 402))
                printf ("%c", DBqsbmweJWMk[c3OU1oGSI]);
            c3OU1oGSI++;
        };
    }
    printf ("%c\n", DBqsbmweJWMk[(275 - 25)]);
}

