void  main () {
    int GS1dDpYyKN [(349 - 49)], LyCtLwxlR7, Z1je9wKTVk, m79fFpgAJNU, JNgyGKp;
    float Vma1MBLbc, wBTaMG = (641 - 641), X12gcd [(1186 - 886)];
    scanf ("%d", &LyCtLwxlR7);
    for (Z1je9wKTVk = (360 - 360); LyCtLwxlR7 > Z1je9wKTVk; Z1je9wKTVk = Z1je9wKTVk +(879 - 878)) {
        scanf ("%d", &GS1dDpYyKN[Z1je9wKTVk]);
        wBTaMG = wBTaMG + GS1dDpYyKN[Z1je9wKTVk];
    }
    Vma1MBLbc = wBTaMG / LyCtLwxlR7;
    {
        Z1je9wKTVk = 0;
        for (; LyCtLwxlR7 > Z1je9wKTVk;) {
            if (Vma1MBLbc < GS1dDpYyKN[Z1je9wKTVk])
                X12gcd[Z1je9wKTVk] = GS1dDpYyKN[Z1je9wKTVk] - Vma1MBLbc;
            else
                X12gcd[Z1je9wKTVk] = Vma1MBLbc -GS1dDpYyKN[Z1je9wKTVk];
            Z1je9wKTVk = Z1je9wKTVk +(643 - 642);
        }
    }
    for (Z1je9wKTVk = 0; LyCtLwxlR7 -(212 - 211) > Z1je9wKTVk; Z1je9wKTVk = Z1je9wKTVk +(959 - 958)) {
        m79fFpgAJNU = Z1je9wKTVk +1;
        for (; LyCtLwxlR7 > m79fFpgAJNU;) {
            if (X12gcd[m79fFpgAJNU] > X12gcd[Z1je9wKTVk]) {
                JNgyGKp = GS1dDpYyKN[Z1je9wKTVk];
                GS1dDpYyKN[Z1je9wKTVk] = GS1dDpYyKN[m79fFpgAJNU];
                GS1dDpYyKN[m79fFpgAJNU] = JNgyGKp;
                JNgyGKp = X12gcd[Z1je9wKTVk];
                X12gcd[Z1je9wKTVk] = X12gcd[m79fFpgAJNU];
                X12gcd[m79fFpgAJNU] = JNgyGKp;
            }
            m79fFpgAJNU++;
        }
    }
    printf ("%d", GS1dDpYyKN[0]);
    for (Z1je9wKTVk = 1; LyCtLwxlR7 > Z1je9wKTVk; Z1je9wKTVk = Z1je9wKTVk +1) {
        if (X12gcd[Z1je9wKTVk] == X12gcd[0])
            printf (",%d", GS1dDpYyKN[Z1je9wKTVk]);
    }
}

