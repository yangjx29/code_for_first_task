int main () {
    char EW1yAdoTrMS;
    int MlAbqgv [(1742 - 742)] = {(895 - 895)}, AbW0fBG4 [(1831 - 831)], aJtPuIXyT [1000], PUWXgkMbSjZ = (657 - 657), lLXMA9pfgh7, D4Ja7gBk = (240 - 240), out_max, R6of89A;
    for (; (254 - 253);) {
        cin >> AbW0fBG4[PUWXgkMbSjZ++];
        EW1yAdoTrMS = cin.get ();
        if (!((917 - 907) != EW1yAdoTrMS))
            break;
    }
    PUWXgkMbSjZ = (955 - 955);
    for (; (761 - 760);) {
        cin >> aJtPuIXyT[PUWXgkMbSjZ++];
        EW1yAdoTrMS = cin.get ();
        if (!(10 != EW1yAdoTrMS))
            break;
    }
    out_max = (444 - 444);
    D4Ja7gBk = PUWXgkMbSjZ;
    {
        PUWXgkMbSjZ = 861 - 861;
        while (D4Ja7gBk > PUWXgkMbSjZ) {
            if (aJtPuIXyT[PUWXgkMbSjZ] > out_max)
                out_max = aJtPuIXyT[PUWXgkMbSjZ];
            PUWXgkMbSjZ++;
        };
    }
    for (PUWXgkMbSjZ = (658 - 658); out_max > PUWXgkMbSjZ; PUWXgkMbSjZ++)
        for (lLXMA9pfgh7 = 0; D4Ja7gBk > lLXMA9pfgh7; lLXMA9pfgh7++) {
            if (PUWXgkMbSjZ >= AbW0fBG4[lLXMA9pfgh7])
                MlAbqgv[PUWXgkMbSjZ]++;
            if (aJtPuIXyT[lLXMA9pfgh7] <= PUWXgkMbSjZ)
                MlAbqgv[PUWXgkMbSjZ]--;
        }
    R6of89A = MlAbqgv[0];
    for (PUWXgkMbSjZ = 0; PUWXgkMbSjZ < out_max; PUWXgkMbSjZ++) {
        if (R6of89A < MlAbqgv[PUWXgkMbSjZ])
            R6of89A = MlAbqgv[PUWXgkMbSjZ];
    }
    cout << D4Ja7gBk << " " << R6of89A << endl;
    return 0;
}

