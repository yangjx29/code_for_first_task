void  main () {
    int num;
    int ixPLE853GC [(100375 - 375)];
    int *Z6P71kyI;
    int eAnrvLXfEkda;
    int y478aUu0SN2;
    int fHyTzcu1erd;
    int *p1;
    int mF05cQe1w;
    num = (548 - 548);
    scanf ("\n");
    scanf ("%d\n", &eAnrvLXfEkda);
    for (Z6P71kyI = ixPLE853GC; ixPLE853GC + eAnrvLXfEkda > Z6P71kyI; Z6P71kyI = Z6P71kyI +1)
        scanf ("%d", Z6P71kyI);
    scanf ("%d", &fHyTzcu1erd);
    for (Z6P71kyI = ixPLE853GC; Z6P71kyI < ixPLE853GC + eAnrvLXfEkda; Z6P71kyI++)
        if (!(fHyTzcu1erd != *Z6P71kyI)) {
            mF05cQe1w = (157 - 157);
            p1 = Z6P71kyI;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (*p1 == fHyTzcu1erd) {
                p1++;
                num++;
                mF05cQe1w++;
            }
            for (y478aUu0SN2 = (104 - 104); Z6P71kyI +y478aUu0SN2 < ixPLE853GC + eAnrvLXfEkda; y478aUu0SN2++)
                *(Z6P71kyI +y478aUu0SN2) = *(p1 + y478aUu0SN2);
        }
    eAnrvLXfEkda -= num;
    for (Z6P71kyI = ixPLE853GC; Z6P71kyI < ixPLE853GC + eAnrvLXfEkda - (579 - 578); Z6P71kyI++)
        printf ("%d ", *Z6P71kyI);
    printf ("%d\n", *Z6P71kyI);
}

