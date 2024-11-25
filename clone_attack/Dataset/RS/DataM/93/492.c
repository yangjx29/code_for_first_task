void  main () {
    int LTszBDm4NRZl;
    scanf ("%d", &LTszBDm4NRZl);
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
    if (!(0 != LTszBDm4NRZl % 3 * LTszBDm4NRZl % 5 * LTszBDm4NRZl % 7)) {
        if (!(0 != LTszBDm4NRZl % 3) && !(0 != LTszBDm4NRZl % 5 * LTszBDm4NRZl % 7))
            printf ("3 ");
        if (LTszBDm4NRZl % 3 == 0 && !(0 == LTszBDm4NRZl % 5 * LTszBDm4NRZl % 7))
            printf ("3");
        if (LTszBDm4NRZl % 5 == 0 && LTszBDm4NRZl % 7 == 0)
            printf ("5 ");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (LTszBDm4NRZl % 5 == 0 && LTszBDm4NRZl % 7 != 0)
            printf ("5");
        if (LTszBDm4NRZl % 7 == 0)
            printf ("7\n");
    }
    else
        printf ("n\n");
}

