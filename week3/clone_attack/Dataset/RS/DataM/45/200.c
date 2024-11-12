void  main () {
    char vOFNX4 [(348 - 248)];
    char BFEx1wvsnk4W [(302 - 202)];
    char *EZYshmo;
    char *R3aZks;
    int Vspr9q;
    scanf ("%s %s", vOFNX4, BFEx1wvsnk4W);
    R3aZks = BFEx1wvsnk4W;
    EZYshmo = vOFNX4;
    while (*EZYshmo != *R3aZks)
        R3aZks = R3aZks +1;
    for (Vspr9q = (397 - 397); Vspr9q < strlen (vOFNX4); Vspr9q = Vspr9q +1, EZYshmo = EZYshmo +1, R3aZks = R3aZks +1)
        if (*EZYshmo != *R3aZks)
            break;
    if (Vspr9q == strlen (vOFNX4))
        printf ("%d", R3aZks -BFEx1wvsnk4W-strlen (vOFNX4));
}

