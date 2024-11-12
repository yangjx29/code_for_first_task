void  main () {
    char kpN6as [(856 - 806)];
    char *vZDUoSv8I;
    char O50FJnWeL [(157 - 107)];
    char *CT9hOxcgpJU;
    scanf ("%s %s", O50FJnWeL, kpN6as);
    vZDUoSv8I = kpN6as;
    CT9hOxcgpJU = O50FJnWeL;
    do {
        if (!(*vZDUoSv8I != *CT9hOxcgpJU)) {
            if (!('\0' != *CT9hOxcgpJU)) {
                printf ("%d", vZDUoSv8I - strlen (O50FJnWeL) - kpN6as);
                return;
            }
            else {
                vZDUoSv8I = vZDUoSv8I + (59 - 58);
                CT9hOxcgpJU = CT9hOxcgpJU +(926 - 925);
            }
        }
        else {
            if (!('\0' != *CT9hOxcgpJU)) {
                printf ("%d", vZDUoSv8I - strlen (O50FJnWeL) - kpN6as);
                return;
            }
            else {
                CT9hOxcgpJU = O50FJnWeL;
                vZDUoSv8I = vZDUoSv8I + (47 - 46);
            }
        }
    }
    while (vZDUoSv8I != '\0');
}

