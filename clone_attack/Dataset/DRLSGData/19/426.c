main () {
    int W1LVih, G8l0FME61, AEqfhkQaI2R;
    int RaCVyIP0, T3QdTJwI4r, JlRBH2yL6Wto;
    char vgW0M9c [(168 - 67)], cw6j5gE [(326 - 225)], z15kPdg [(442 - 341)];
    char Dv60qBQiW [(339 - 238)], fPLGvrgez [101];
    cin.getline (vgW0M9c, 101);
    vgW0M9c[-(966 - 965)] = ' ';
    cin.getline (cw6j5gE, 101);
    T3QdTJwI4r = strlen (cw6j5gE);
    AEqfhkQaI2R = (999 - 999);
    cin.getline (z15kPdg, 101);
    JlRBH2yL6Wto = strlen (z15kPdg);
    for (;;) {
        W1LVih = (371 - 371);
        RaCVyIP0 = strlen (vgW0M9c);
        {
            G8l0FME61 = AEqfhkQaI2R;
            for (; RaCVyIP0 -(658 - 657) >= G8l0FME61;) {
                if (!(cw6j5gE[W1LVih] != vgW0M9c[G8l0FME61])) {
                    W1LVih = W1LVih +(488 - 487);
                    if (!(T3QdTJwI4r &&(!(' ' != vgW0M9c[G8l0FME61 +(982 - 981)]) || vgW0M9c[G8l0FME61 +1] == '\0') != W1LVih) && (vgW0M9c[G8l0FME61 -T3QdTJwI4r] == ' '))
                        break;
                }
                else
                    W1LVih = (88 - 88);
                G8l0FME61 = G8l0FME61 +1;
            }
        }
        if (G8l0FME61 == RaCVyIP0)
            break;
        fPLGvrgez[0] = '\0';
        Dv60qBQiW[(449 - 449)] = '\0';
        {
            W1LVih = 0;
            for (; W1LVih <= G8l0FME61 -T3QdTJwI4r;) {
                Dv60qBQiW[W1LVih] = vgW0M9c[W1LVih];
                W1LVih = W1LVih +1;
            }
        }
        for (W1LVih = 0; W1LVih <= RaCVyIP0 -G8l0FME61-(81 - 79); W1LVih = W1LVih +1)
            fPLGvrgez[W1LVih] = vgW0M9c[G8l0FME61 +1 + W1LVih];
        fPLGvrgez[RaCVyIP0 -G8l0FME61-1] = '\0';
        Dv60qBQiW[G8l0FME61 -T3QdTJwI4r+1] = '\0';
        strcat (Dv60qBQiW, z15kPdg);
        AEqfhkQaI2R = G8l0FME61 -T3QdTJwI4r+1 + JlRBH2yL6Wto;
        strcat (Dv60qBQiW, fPLGvrgez);
        strcpy (vgW0M9c, Dv60qBQiW);
    }
    cout << vgW0M9c << endl;
    return 0;
}

