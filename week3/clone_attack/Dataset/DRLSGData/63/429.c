main () {
    int koAIPXz6V, hySEQz, gFvVnc94E, VvFz5a9htxpo, Ul1uOshZJ9vR, iQ0USRy, vvbjFLI, E4gkEy3eZnif, DPDIzN2C [100] [100], i2JVwARH [100] [100], oigdJH [100] [100];
    scanf ("%d %d", &gFvVnc94E, &VvFz5a9htxpo);
    {
        koAIPXz6V = 0;
        while (gFvVnc94E > koAIPXz6V) {
            for (hySEQz = 0; hySEQz < VvFz5a9htxpo; hySEQz++) {
                scanf ("%d", &DPDIzN2C[koAIPXz6V][hySEQz]);
            }
            koAIPXz6V++;
        }
    }
    scanf ("%d %d", &Ul1uOshZJ9vR, &iQ0USRy);
    {
        koAIPXz6V = 0;
        while (Ul1uOshZJ9vR > koAIPXz6V) {
            hySEQz = 0;
            while (iQ0USRy > hySEQz) {
                scanf ("%d", &i2JVwARH[koAIPXz6V][hySEQz]);
                hySEQz++;
            }
            koAIPXz6V++;
        }
    }
    {
        koAIPXz6V = 0;
        while (gFvVnc94E > koAIPXz6V) {
            {
                hySEQz = 0;
                while (hySEQz < iQ0USRy) {
                    oigdJH[koAIPXz6V][hySEQz] = 0;
                    {
                        vvbjFLI = 0;
                        while (VvFz5a9htxpo > vvbjFLI) {
                            oigdJH[koAIPXz6V][hySEQz] = oigdJH[koAIPXz6V][hySEQz] + DPDIzN2C[koAIPXz6V][vvbjFLI] * i2JVwARH[vvbjFLI][hySEQz];
                            vvbjFLI++;
                        }
                    }
                    hySEQz++;
                }
            }
            koAIPXz6V++;
        }
    }
    {
        koAIPXz6V = 0;
        while (gFvVnc94E > koAIPXz6V) {
            {
                hySEQz = 0;
                while (hySEQz < iQ0USRy) {
                    if (!(0 != hySEQz) && hySEQz != iQ0USRy - 1)
                        printf ("%d", oigdJH[koAIPXz6V][hySEQz]);
                    else {
                        if (!(iQ0USRy - 1 != hySEQz) && hySEQz != 0)
                            printf (" %d\n", oigdJH[koAIPXz6V][hySEQz]);
                        else {
                            if (!(0 != hySEQz) && hySEQz == iQ0USRy - 1)
                                printf ("%d\n", oigdJH[koAIPXz6V][hySEQz]);
                            else
                                printf (" %d", oigdJH[koAIPXz6V][hySEQz]);
                        }
                    }
                    hySEQz++;
                }
            }
            koAIPXz6V++;
        }
    }
}

