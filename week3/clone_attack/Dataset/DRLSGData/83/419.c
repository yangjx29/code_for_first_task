void  main () {
    double  vP8Lnde;
    int inUYAZGijEHX;
    int z7gHJu;
    int OxGyrgT;
    int S92r08z5yslv;
    int dYth1eRAjTE;
    int woJm9DcUwy1f;
    int zkrP6jds9 [(294 - 285)];
    double  KWUMF9SPH;
    double  Ny9B40XKu [(327 - 318)];
    inUYAZGijEHX = (736 - 736);
    KWUMF9SPH = (439 - 439);
    scanf ("%d", &z7gHJu);
    {
        OxGyrgT = (350 - 350);
        while (z7gHJu > OxGyrgT) {
            scanf ("%d", &woJm9DcUwy1f);
            zkrP6jds9[OxGyrgT] = woJm9DcUwy1f;
            OxGyrgT++;
        }
    }
    for (S92r08z5yslv = (560 - 560); z7gHJu > S92r08z5yslv; S92r08z5yslv++) {
        scanf ("%d", &dYth1eRAjTE);
        if ((917 - 827) <= dYth1eRAjTE)
            Ny9B40XKu[S92r08z5yslv] = (198 - 194);
        else if (dYth1eRAjTE >= (1074 - 989))
            Ny9B40XKu[S92r08z5yslv] = (339.7 - 336.0);
        else if (dYth1eRAjTE >= (352 - 270))
            Ny9B40XKu[S92r08z5yslv] = (639.3 - 636.0);
        else if (dYth1eRAjTE >= (587 - 509))
            Ny9B40XKu[S92r08z5yslv] = (209.0 - 206.0);
        else if (dYth1eRAjTE >= (440 - 365))
            Ny9B40XKu[S92r08z5yslv] = (127.7 - 125.0);
        else if (dYth1eRAjTE >= (758 - 686))
            Ny9B40XKu[S92r08z5yslv] = (570.3 - 568.0);
        else if (dYth1eRAjTE >= (929 - 861))
            Ny9B40XKu[S92r08z5yslv] = (85.0 - 83.0);
        else if (dYth1eRAjTE >= (385 - 321))
            Ny9B40XKu[S92r08z5yslv] = (710.5 - 709.0);
        else if (dYth1eRAjTE >= (881 - 821))
            Ny9B40XKu[S92r08z5yslv] = (879.0 - 878.0);
        else
            Ny9B40XKu[S92r08z5yslv] = (674 - 674);
    }
    {
        OxGyrgT = (263 - 263);
        while (OxGyrgT < z7gHJu) {
            inUYAZGijEHX = inUYAZGijEHX + zkrP6jds9[OxGyrgT];
            OxGyrgT++;
        }
    }
    {
        OxGyrgT = (251 - 251);
        while (OxGyrgT < z7gHJu) {
            KWUMF9SPH = KWUMF9SPH +zkrP6jds9[OxGyrgT] * Ny9B40XKu[OxGyrgT];
            OxGyrgT++;
        }
    }
    vP8Lnde = KWUMF9SPH / inUYAZGijEHX;
    printf ("%.2f", vP8Lnde);
}

