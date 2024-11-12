int lOBNlnsp (int YMFZPstK, int Cf7tYIe) {
    int bF564xzegNsB;
    bF564xzegNsB = (756 - 756);
    if ((358 - 358) > YMFZPstK || (622 - 618) < YMFZPstK || 0 > Cf7tYIe || (258 - 254) < Cf7tYIe)
        bF564xzegNsB = (119 - 118);
    return bF564xzegNsB;
}

void  main () {
    int oxLIJYEMoZl2, mCrDT8HpjRn, JreoQxc, BGDBCI, atLb3hYs4RS, TIFg8tM4b;
    int YMFZPstK [(835 - 830)] [(324 - 319)];
    for (BGDBCI = 0; (98 - 93) > BGDBCI; BGDBCI = BGDBCI +1) {
        atLb3hYs4RS = 0;
        while (atLb3hYs4RS < 5) {
            scanf ("%d", &YMFZPstK[BGDBCI][atLb3hYs4RS]);
            atLb3hYs4RS = atLb3hYs4RS + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d %d", &oxLIJYEMoZl2, &mCrDT8HpjRn);
    JreoQxc = lOBNlnsp (oxLIJYEMoZl2, mCrDT8HpjRn);
    if (!(1 != JreoQxc))
        printf ("error");
    else {
        {
            BGDBCI = 0;
            while (BGDBCI < 5) {
                TIFg8tM4b = YMFZPstK[oxLIJYEMoZl2][BGDBCI];
                YMFZPstK[oxLIJYEMoZl2][BGDBCI] = YMFZPstK[mCrDT8HpjRn][BGDBCI];
                YMFZPstK[mCrDT8HpjRn][BGDBCI] = TIFg8tM4b;
                BGDBCI++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (BGDBCI = 0; BGDBCI < 5; BGDBCI = BGDBCI +1) {
            for (atLb3hYs4RS = 0; atLb3hYs4RS < 4; atLb3hYs4RS++)
                printf ("%d ", YMFZPstK[BGDBCI][atLb3hYs4RS]);
            printf ("%d", YMFZPstK[BGDBCI][4]);
            printf ("\n");
        };
    };
}

