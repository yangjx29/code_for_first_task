int main () {
    int a, yf0FeIm, sygfGMBdqHj, mMBgrNLs;
    char KPE2Cq0n [(114 - 64)], Ks4PrZ [50], jDvuLf [102];
    scanf ("%s", KPE2Cq0n);
    a = strlen (KPE2Cq0n);
    getchar ();
    scanf ("%s", Ks4PrZ);
    yf0FeIm = strlen (Ks4PrZ);
    for (sygfGMBdqHj = (873 - 873); sygfGMBdqHj <= yf0FeIm - a; sygfGMBdqHj = sygfGMBdqHj + 1) {
        for (mMBgrNLs = sygfGMBdqHj; mMBgrNLs <= sygfGMBdqHj + a - 1; mMBgrNLs = mMBgrNLs + 1) {
            if (Ks4PrZ[mMBgrNLs] != KPE2Cq0n[mMBgrNLs - sygfGMBdqHj])
                break;
        }
        if (mMBgrNLs == sygfGMBdqHj + a) {
            printf ("%d", sygfGMBdqHj);
            break;
        }
        else
            continue;
    }
    return 0;
}

