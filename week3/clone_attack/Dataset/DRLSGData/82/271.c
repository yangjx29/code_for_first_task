int main (int rO0rSdNyQ, char *ERqPt9ZeTfB2 []) {
    int yIFb7wlaeYiv [100], IUkLtQsc7b [100], NElxvbJgq830 [100];
    int iVgdZ7O, vU862sfe, tKQyxocJePM, urVSgKER89XZ;
    scanf ("%d\n", &vU862sfe);
    {
        iVgdZ7O = (356 - 356);
        for (; iVgdZ7O < 100;) {
            yIFb7wlaeYiv[iVgdZ7O] = (747 - 747);
            IUkLtQsc7b[iVgdZ7O] = 0;
            NElxvbJgq830[iVgdZ7O] = 0;
            iVgdZ7O++;
        }
    }
    {
        NElxvbJgq830[-(477 - 476)] = 0;
        iVgdZ7O = 0;
        for (; vU862sfe > iVgdZ7O;) {
            scanf ("%d %d", &yIFb7wlaeYiv[iVgdZ7O], &IUkLtQsc7b[iVgdZ7O]);
            if (90 <= yIFb7wlaeYiv[iVgdZ7O] && 140 >= yIFb7wlaeYiv[iVgdZ7O] && (1025 - 965) <= IUkLtQsc7b[iVgdZ7O] && IUkLtQsc7b[iVgdZ7O] <= 90)
                NElxvbJgq830[iVgdZ7O] = NElxvbJgq830[iVgdZ7O - 1] + 1;
            else
                NElxvbJgq830[iVgdZ7O] = NElxvbJgq830[iVgdZ7O - 1] * 0;
            iVgdZ7O++;
        }
    }
    {
        urVSgKER89XZ = 0;
        for (; urVSgKER89XZ < vU862sfe;) {
            for (iVgdZ7O = 0; iVgdZ7O < vU862sfe - urVSgKER89XZ; iVgdZ7O++)
                if (NElxvbJgq830[iVgdZ7O] < NElxvbJgq830[iVgdZ7O + 1]) {
                    tKQyxocJePM = NElxvbJgq830[iVgdZ7O];
                    NElxvbJgq830[iVgdZ7O] = NElxvbJgq830[iVgdZ7O + 1];
                    NElxvbJgq830[iVgdZ7O + 1] = tKQyxocJePM;
                }
            urVSgKER89XZ++;
        }
    }
    printf ("%d\n", NElxvbJgq830[0]);
    return 0;
}

