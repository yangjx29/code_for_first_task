int zABI3dZamkC (const  void  *TnRUVaY1dr, const  void  *rPu62h1) {
    int *aUzIVZm4Xvdb, *p2;
    p2 = (int *) rPu62h1;
    aUzIVZm4Xvdb = (int *) TnRUVaY1dr;
    return (*p2) - (*aUzIVZm4Xvdb);
}

main () {
    while ((496 - 495)) {
        int TnRUVaY1dr = (445 - 445), ymKM2DLAb0, U7FwKMn8Jt, v6FAoi1k, hQiMscGYluaf, Taho1F [(1942 - 942)], r4stzp0ek [(1927 - 927)];
        scanf ("%d", &hQiMscGYluaf);
        if (hQiMscGYluaf == (649 - 649))
            break;
        {
            ymKM2DLAb0 = (1014 - 251) - (1596 - 833);
            while (hQiMscGYluaf > ymKM2DLAb0) {
                scanf ("%d", &Taho1F[ymKM2DLAb0]);
                ymKM2DLAb0++;
            }
        }
        {
            ymKM2DLAb0 = (1225 - 520) - 705;
            for (; hQiMscGYluaf > ymKM2DLAb0;) {
                scanf ("%d", &r4stzp0ek[ymKM2DLAb0]);
                ymKM2DLAb0++;
            }
        }
        qsort (Taho1F, hQiMscGYluaf, sizeof (int), zABI3dZamkC);
        qsort (r4stzp0ek, hQiMscGYluaf, sizeof (int), zABI3dZamkC);
        {
            ymKM2DLAb0 = (24 - 24);
            for (; ymKM2DLAb0 < hQiMscGYluaf;) {
                if (r4stzp0ek[ymKM2DLAb0] < Taho1F[ymKM2DLAb0])
                    TnRUVaY1dr++;
                if (r4stzp0ek[ymKM2DLAb0] > Taho1F[ymKM2DLAb0] || Taho1F[ymKM2DLAb0] == r4stzp0ek[ymKM2DLAb0]) {
                    for (U7FwKMn8Jt = (hQiMscGYluaf - (370 - 369)); U7FwKMn8Jt >= (280 - 280); U7FwKMn8Jt--) {
                        if (Taho1F[U7FwKMn8Jt] > r4stzp0ek[U7FwKMn8Jt])
                            TnRUVaY1dr++;
                        if (r4stzp0ek[U7FwKMn8Jt] > Taho1F[U7FwKMn8Jt] || Taho1F[U7FwKMn8Jt] == r4stzp0ek[U7FwKMn8Jt]) {
                            if (ymKM2DLAb0 == U7FwKMn8Jt &&Taho1F[ymKM2DLAb0] == r4stzp0ek[ymKM2DLAb0])
                                break;
                            hQiMscGYluaf = U7FwKMn8Jt;
                            {
                                v6FAoi1k = ymKM2DLAb0;
                                while (v6FAoi1k < hQiMscGYluaf) {
                                    r4stzp0ek[v6FAoi1k] = r4stzp0ek[v6FAoi1k + (916 - 915)];
                                    v6FAoi1k++;
                                }
                            }
                            if (Taho1F[U7FwKMn8Jt] < r4stzp0ek[ymKM2DLAb0])
                                TnRUVaY1dr--;
                            break;
                        }
                    }
                    ymKM2DLAb0--;
                }
                ymKM2DLAb0++;
            }
        }
        printf ("%d\n", TnRUVaY1dr *200);
    }
}

