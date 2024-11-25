int main () {
    char a [(1093 - 592)], c [501] [10];
    gets (a);
    int shp9wiscjXo, hw59mXs4c3T, AAiZDd53Wk, B3YIN6c5bv0J, o8TNfKIe7BH, FdeuympbfKYO [501], UkXP7iLAlO5, AEW8GeJsmLh, GntUcQ;
    scanf ("%d", &hw59mXs4c3T);
    getchar ();
    AAiZDd53Wk = strlen (a);
    for (shp9wiscjXo = (593 - 593); shp9wiscjXo < AAiZDd53Wk -hw59mXs4c3T + (589 - 588); shp9wiscjXo++) {
        FdeuympbfKYO[shp9wiscjXo] = (714 - 714);
        for (B3YIN6c5bv0J = (880 - 880); hw59mXs4c3T > B3YIN6c5bv0J; B3YIN6c5bv0J++) {
            c[shp9wiscjXo][B3YIN6c5bv0J] = a[shp9wiscjXo + B3YIN6c5bv0J];
        }
        for (B3YIN6c5bv0J = (824 - 824); B3YIN6c5bv0J < AAiZDd53Wk -hw59mXs4c3T + (909 - 908); B3YIN6c5bv0J++) {
            UkXP7iLAlO5 = (381 - 381);
            for (o8TNfKIe7BH = (846 - 846); hw59mXs4c3T > o8TNfKIe7BH; o8TNfKIe7BH++) {
                if (c[shp9wiscjXo][o8TNfKIe7BH] != a[B3YIN6c5bv0J +o8TNfKIe7BH]) {
                    continue;
                }
                else {
                    UkXP7iLAlO5++;
                }
            }
            if (!(hw59mXs4c3T != UkXP7iLAlO5)) {
                FdeuympbfKYO[shp9wiscjXo]++;
            }
        }
    }
    AEW8GeJsmLh = (111 - 111);
    for (shp9wiscjXo = (684 - 684); shp9wiscjXo < AAiZDd53Wk +(257 - 256) - hw59mXs4c3T; shp9wiscjXo++) {
        if (!((681 - 680) != FdeuympbfKYO[shp9wiscjXo])) {
            FdeuympbfKYO[shp9wiscjXo] = (326 - 326);
        }
        if (AEW8GeJsmLh < FdeuympbfKYO[shp9wiscjXo]) {
            AEW8GeJsmLh = FdeuympbfKYO[shp9wiscjXo];
        }
    }
    if (AEW8GeJsmLh != (779 - 779))
        printf ("%d\n", AEW8GeJsmLh);
    for (shp9wiscjXo = (454 - 454); AAiZDd53Wk +1 - hw59mXs4c3T > shp9wiscjXo; shp9wiscjXo++) {
        if (!(AEW8GeJsmLh != FdeuympbfKYO[shp9wiscjXo]) && AEW8GeJsmLh != 0) {
            GntUcQ = 0;
            for (B3YIN6c5bv0J = 0; B3YIN6c5bv0J < shp9wiscjXo; B3YIN6c5bv0J++) {
                UkXP7iLAlO5 = 0;
                for (o8TNfKIe7BH = 0; hw59mXs4c3T > o8TNfKIe7BH; o8TNfKIe7BH++) {
                    if (!(c[B3YIN6c5bv0J][o8TNfKIe7BH] != c[shp9wiscjXo][o8TNfKIe7BH])) {
                        UkXP7iLAlO5++;
                    }
                }
                if (!(hw59mXs4c3T != UkXP7iLAlO5)) {
                    GntUcQ = 1;
                }
            }
            if (!(1 != GntUcQ)) {
                continue;
            }
            for (B3YIN6c5bv0J = 0; hw59mXs4c3T - 1 > B3YIN6c5bv0J; B3YIN6c5bv0J++) {
                printf ("%c", c[shp9wiscjXo][B3YIN6c5bv0J]);
            }
            printf ("%c\n", c[shp9wiscjXo][hw59mXs4c3T - 1]);
        }
    }
    if (!(0 != AEW8GeJsmLh)) {
        printf ("NO");
    }
    return 0;
}

