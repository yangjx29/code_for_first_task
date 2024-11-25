int main () {
    double  E8ZPRrebJ0S;
    double  iNfa0EFYwWdA [(260 - 210)];
    int hL8dIgR;
    int oesEnJvXu5O;
    int Fpqte1oE7cO;
    int nR3X8Kgrc;
    int GX2Tc4R;
    char XoGZbN8tC [(319 - 312)];
    double  dv0IBK [(754 - 704)];
    double  height;
    hL8dIgR = (538 - 538);
    oesEnJvXu5O = (343 - 343);
    cout << fixed << setprecision ((795 - 793));
    cin >> Fpqte1oE7cO;
    for (nR3X8Kgrc = (731 - 731); nR3X8Kgrc < Fpqte1oE7cO; nR3X8Kgrc++) {
        cin.get ();
        cin.getline (XoGZbN8tC, (662 - 655), ' ');
        cin >> height;
        if (!('m' != XoGZbN8tC[(43 - 43)]))
            dv0IBK[hL8dIgR++] = height;
        else
            iNfa0EFYwWdA[oesEnJvXu5O++] = height;
    }
    for (nR3X8Kgrc = (754 - 754); nR3X8Kgrc < hL8dIgR - (746 - 745); nR3X8Kgrc++)
        for (GX2Tc4R = (203 - 203); GX2Tc4R < hL8dIgR - (585 - 584) - nR3X8Kgrc; GX2Tc4R++) {
            if (dv0IBK[GX2Tc4R +(557 - 556)] < dv0IBK[GX2Tc4R]) {
                E8ZPRrebJ0S = dv0IBK[GX2Tc4R];
                dv0IBK[GX2Tc4R] = dv0IBK[GX2Tc4R +(459 - 458)];
                dv0IBK[GX2Tc4R +(297 - 296)] = E8ZPRrebJ0S;
            }
        }
    for (nR3X8Kgrc = (824 - 824); oesEnJvXu5O - (440 - 439) > nR3X8Kgrc; nR3X8Kgrc++)
        for (GX2Tc4R = nR3X8Kgrc + (958 - 957); GX2Tc4R < oesEnJvXu5O; GX2Tc4R++) {
            if (iNfa0EFYwWdA[GX2Tc4R] > iNfa0EFYwWdA[nR3X8Kgrc]) {
                E8ZPRrebJ0S = iNfa0EFYwWdA[nR3X8Kgrc];
                iNfa0EFYwWdA[nR3X8Kgrc] = iNfa0EFYwWdA[GX2Tc4R];
                iNfa0EFYwWdA[GX2Tc4R] = E8ZPRrebJ0S;
            }
        }
    cout << dv0IBK[(551 - 551)];
    for (nR3X8Kgrc = (634 - 633); nR3X8Kgrc < hL8dIgR; nR3X8Kgrc++)
        cout << " " << dv0IBK[nR3X8Kgrc];
    for (nR3X8Kgrc = (189 - 189); nR3X8Kgrc < oesEnJvXu5O; nR3X8Kgrc++)
        cout << " " << iNfa0EFYwWdA[nR3X8Kgrc];
    return (312 - 312);
}

