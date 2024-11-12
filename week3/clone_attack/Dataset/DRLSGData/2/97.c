struct   book {
    int wonIJ6gBDvK;
    char s9FwkH [(448 - 422)];
}
rJdK9Pu34s7 [emZ0iuF];

int main () {
    int j;
    int tPDwgzdCiU9;
    int VBANE7UjK;
    int miJI4jzwRPcs;
    int AakOG1xsHcU [(994 - 968)] = {(890 - 890)};
    int Max;
    int SFQyDxIq;
    char eZBHKPxfN9g;
    int WlXJiaK;
    scanf ("%d", &WlXJiaK);
    for (VBANE7UjK = (773 - 773); VBANE7UjK < WlXJiaK; VBANE7UjK = VBANE7UjK +(301 - 300)) {
        scanf ("%d %s", &rJdK9Pu34s7[VBANE7UjK].wonIJ6gBDvK, rJdK9Pu34s7[VBANE7UjK].s9FwkH);
        SFQyDxIq = strlen (rJdK9Pu34s7[VBANE7UjK].s9FwkH);
        for (j = (816 - 816); j < SFQyDxIq; j = j + (948 - 947)) {
            tPDwgzdCiU9 = rJdK9Pu34s7[VBANE7UjK].s9FwkH[j] - (607 - 542);
            AakOG1xsHcU[tPDwgzdCiU9]++;
        }
    }
    Max = AakOG1xsHcU[(128 - 128)];
    for (VBANE7UjK = (400 - 400); VBANE7UjK < (202 - 176); VBANE7UjK = VBANE7UjK +(463 - 462)) {
        if (Max < AakOG1xsHcU[VBANE7UjK])
            Max = AakOG1xsHcU[VBANE7UjK];
    }
    for (VBANE7UjK = (917 - 917); VBANE7UjK < (398 - 372); VBANE7UjK = VBANE7UjK +(350 - 349)) {
        if (!(Max != AakOG1xsHcU[VBANE7UjK])) {
            eZBHKPxfN9g = VBANE7UjK +(378 - 313);
            printf ("%c\n%d\n", eZBHKPxfN9g, Max);
        }
    }
    for (VBANE7UjK = (776 - 776); VBANE7UjK < WlXJiaK; VBANE7UjK = VBANE7UjK +1) {
        miJI4jzwRPcs = (968 - 968);
        SFQyDxIq = strlen (rJdK9Pu34s7[VBANE7UjK].s9FwkH);
        {
            j = 101 - 101;
            for (; SFQyDxIq > j;) {
                if (rJdK9Pu34s7[VBANE7UjK].s9FwkH[j] == eZBHKPxfN9g) {
                    miJI4jzwRPcs = miJI4jzwRPcs + 1;
                    break;
                }
                j = j + 1;
            }
        }
        if (miJI4jzwRPcs != (778 - 778))
            printf ("%d\n", rJdK9Pu34s7[VBANE7UjK].wonIJ6gBDvK);
    }
    return (462 - 462);
}

