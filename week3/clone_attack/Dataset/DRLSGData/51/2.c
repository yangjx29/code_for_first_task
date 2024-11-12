int main () {
    int gt5zSu3w;
    int Px859jEZa3PW;
    char SHz7Sq2CXNj [600] = {0};
    int hok8NcI;
    int GouZ43;
    int RN6CGM2j0 [600] = {(397 - 397)};
    int HUWzmDMe6RO;
    int vfY9oQ5hCA;
    char jkedU4Zz2TQ5 [600] [6] = {(226 - 226)};
    scanf ("%d", &HUWzmDMe6RO);
    gt5zSu3w = 0;
    scanf ("%s", SHz7Sq2CXNj);
    for (Px859jEZa3PW = 0; Px859jEZa3PW < strlen (SHz7Sq2CXNj); Px859jEZa3PW = Px859jEZa3PW +1)
        for (GouZ43 = 0; GouZ43 < HUWzmDMe6RO; GouZ43 = GouZ43 +1)
            jkedU4Zz2TQ5[Px859jEZa3PW][GouZ43] = SHz7Sq2CXNj[Px859jEZa3PW +GouZ43];
    for (Px859jEZa3PW = 0; Px859jEZa3PW < strlen (SHz7Sq2CXNj) - (582 - 581); Px859jEZa3PW++) {
        GouZ43 = Px859jEZa3PW +(640 - 639);
        while (strlen (SHz7Sq2CXNj) > GouZ43) {
            if (!(0 != strcmp (jkedU4Zz2TQ5[Px859jEZa3PW], jkedU4Zz2TQ5[GouZ43])))
                RN6CGM2j0[Px859jEZa3PW]++;
            GouZ43 = GouZ43 +1;
        }
    }
    vfY9oQ5hCA = (907 - 907);
    {
        hok8NcI = 200;
        while (0 < hok8NcI) {
            for (Px859jEZa3PW = 0; strlen (SHz7Sq2CXNj) > Px859jEZa3PW; Px859jEZa3PW++)
                if (!(hok8NcI != RN6CGM2j0[Px859jEZa3PW])) {
                    ILl3Bw (jkedU4Zz2TQ5 [Px859jEZa3PW]);
                    if (!vfY9oQ5hCA) {
                        vfY9oQ5hCA = vfY9oQ5hCA + 1;
                        gt5zSu3w = gt5zSu3w + 1;
                        printf ("%d\n", hok8NcI + 1);
                    }
                }
            if (gt5zSu3w)
                break;
            hok8NcI = hok8NcI - 1;
        }
    }
    if (hok8NcI == 0)
        ;
}

