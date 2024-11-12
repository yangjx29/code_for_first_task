int main () {
    char NLpeXZWJ2 [(2712 - 712)];
    int mGgSF6hdby;
    int ZyaXzH9;
    char zfc [2000];
    gets (zfc);
    int ch;
    int OCyufwIUR;
    char Swo6gSAZ [2000];
    gets (Swo6gSAZ);
    int vKm8QvX7rI;
    int HDfGOvy8;
    int wei;
    int lt8K3U;
    gets (NLpeXZWJ2);
    OCyufwIUR = 0;
    mGgSF6hdby = 0;
    HDfGOvy8 = strlen (zfc);
    vKm8QvX7rI = strlen (Swo6gSAZ);
    for (lt8K3U = 0; HDfGOvy8 > lt8K3U; lt8K3U++) {
        int WqajcPdnO;
        WqajcPdnO = 0;
        for (ZyaXzH9 = lt8K3U; vKm8QvX7rI + lt8K3U > ZyaXzH9; ZyaXzH9++) {
            if (zfc[ZyaXzH9] != Swo6gSAZ[ZyaXzH9 -lt8K3U]) {
                WqajcPdnO = 1;
            }
            if (!(1 != WqajcPdnO)) {
                break;
            }
        }
        if (!(0 != WqajcPdnO)) {
            wei = lt8K3U;
            OCyufwIUR++;
            mGgSF6hdby = 1;
        }
        if (!(1 != OCyufwIUR)) {
            break;
        }
    }
    ch = strlen (NLpeXZWJ2);
    if (!(0 != mGgSF6hdby)) {
        puts (zfc);
    }
    else {
        int vmf1ysV [2000];
        for (lt8K3U = 0; lt8K3U < wei; lt8K3U++) {
            vmf1ysV[lt8K3U] = zfc[lt8K3U];
        }
        for (lt8K3U = wei; ch + wei > lt8K3U; lt8K3U++) {
            vmf1ysV[lt8K3U] = NLpeXZWJ2[lt8K3U - wei];
        }
        for (lt8K3U = ch + wei; lt8K3U < HDfGOvy8 -vKm8QvX7rI + ch; lt8K3U++) {
            vmf1ysV[lt8K3U] = zfc[lt8K3U - (ch - vKm8QvX7rI)];
        }
        for (lt8K3U = 0; lt8K3U < HDfGOvy8 -vKm8QvX7rI + ch; lt8K3U++) {
            printf ("%c", vmf1ysV[lt8K3U]);
        }
    }
    return 0;
}

