void  main () {
    int aUzBgueXPA, i, fDAL1cp7 = 1, mxKgdtFp = 0;
    char wdUaeq7V5i6 [10000] = {(408 - 408)};
    gets (wdUaeq7V5i6);
    aUzBgueXPA = strlen (wdUaeq7V5i6);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aUzBgueXPA >= i) {
            if (wdUaeq7V5i6[i + 1] == 32 || wdUaeq7V5i6[i + 1] == 0) {
                if (fDAL1cp7 != 0)
                    if (mxKgdtFp == 0) {
                        mxKgdtFp++;
                        printf ("%d", fDAL1cp7);
                        fDAL1cp7 = 0;
                    }
                    else {
                        printf (",%d", fDAL1cp7);
                        fDAL1cp7 = 0;
                    };
            }
            else
                fDAL1cp7++;
            i = i + 1;
        };
    };
}

