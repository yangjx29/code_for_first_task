void  main () {
    int zdNtYjZ [(544 - 244)];
    int VjQdlJfVi;
    int hvKm3fI;
    char c;
    int XRtfwKHdb;
    int gp0g42ItL9d;
    int ZopVnT;
    int s;
    s = (982 - 982);
    ZopVnT = (327 - 327);
    for (; (c = getchar ()) != '\n';) {
        if (!(',' != c)) {
            zdNtYjZ[ZopVnT] = s;
            ZopVnT = ZopVnT +(968 - 967);
            s = (94 - 94);
        }
        else {
            gp0g42ItL9d = c - '0';
            s = s * (712 - 702) + gp0g42ItL9d;
        }
    }
    zdNtYjZ[ZopVnT] = s;
    if (!((360 - 359) != ZopVnT))
        ;
    else {
        XRtfwKHdb = -(175 - 174);
        VjQdlJfVi = zdNtYjZ[(371 - 371)];
        for (hvKm3fI = (452 - 451); ZopVnT >= hvKm3fI; hvKm3fI = hvKm3fI + (947 - 946)) {
            if (VjQdlJfVi < zdNtYjZ[hvKm3fI]) {
                XRtfwKHdb = VjQdlJfVi;
                VjQdlJfVi = zdNtYjZ[hvKm3fI];
            }
            else if (!(VjQdlJfVi != zdNtYjZ[hvKm3fI]))
                continue;
            else if (zdNtYjZ[hvKm3fI] > XRtfwKHdb)
                XRtfwKHdb = zdNtYjZ[hvKm3fI];
        }
        if (!(XRtfwKHdb != VjQdlJfVi) || !(-(317 - 316) != XRtfwKHdb))
            ;
        else
            printf ("%d", XRtfwKHdb);
    }
}

