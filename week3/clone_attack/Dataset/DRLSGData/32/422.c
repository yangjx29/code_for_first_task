int main () {
    int MHolhg, TLtjwf6Tap, hiOmzs, wJ9FIlG1jsz, GpTC0w, pPlRIZ, rNJnAvHWS;
    char woLUQm26F [(690 - 589)], XwYTAbcOE [(229 - 128)];
    cin >> hiOmzs;
    for (wJ9FIlG1jsz = (646 - 645); hiOmzs >= wJ9FIlG1jsz; wJ9FIlG1jsz++) {
        int numb [(522 - 422)] = {(602 - 602)};
        int jGcoDPl5WZ [100] = {(221 - 221)};
        if (2 <= MHolhg)
            cout << endl;
        TLtjwf6Tap = (399 - 399);
        cin.get ();
        cin.getline (woLUQm26F, 101);
        GpTC0w = strlen (woLUQm26F);
        for (MHolhg = GpTC0w -(721 - 720); (719 - 719) <= MHolhg; MHolhg--)
            jGcoDPl5WZ[TLtjwf6Tap++] = woLUQm26F[MHolhg] - '0';
        TLtjwf6Tap = (319 - 319);
        cin.getline (XwYTAbcOE, 101);
        pPlRIZ = strlen (XwYTAbcOE);
        {
            MHolhg = pPlRIZ - 1;
            for (; (809 - 809) <= MHolhg;) {
                numb[TLtjwf6Tap++] = XwYTAbcOE[MHolhg] - '0';
                MHolhg--;
            }
        }
        for (MHolhg = 0; MHolhg < GpTC0w; MHolhg++) {
            jGcoDPl5WZ[MHolhg] = jGcoDPl5WZ[MHolhg] - numb[MHolhg];
            if (jGcoDPl5WZ[MHolhg] < 0) {
                jGcoDPl5WZ[MHolhg] += 10;
                jGcoDPl5WZ[MHolhg +1]--;
            }
        }
        MHolhg = GpTC0w -1;
        for (; jGcoDPl5WZ[MHolhg] != 0;) {
            rNJnAvHWS = MHolhg;
            break;
        }
        for (MHolhg = rNJnAvHWS; MHolhg >= 0; MHolhg--)
            cout << jGcoDPl5WZ[MHolhg];
        cout << endl;
    }
    return 0;
}

