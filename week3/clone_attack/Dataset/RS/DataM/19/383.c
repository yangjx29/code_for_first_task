int main () {
    char DF3G9EOw [(694 - 594)];
    char IJHV2uBpv7AD [100] [100] = {(739 - 739)};
    char Pz6geh [100];
    char Im3q04dA [100];
    int ZR6Q071yXv;
    int awyvzRoG3S;
    int ihsAzotSZ;
    int T1nMpuNkeg;
    int vXuQyjRpt;
    int Hyq7Y9j10D;
    ZR6Q071yXv = (850 - 850);
    awyvzRoG3S = (635 - 635);
    ihsAzotSZ = (572 - 572);
    gets (DF3G9EOw);
    gets (Pz6geh);
    gets (Im3q04dA);
    Hyq7Y9j10D = strlen (DF3G9EOw);
    for (T1nMpuNkeg = (618 - 618); Hyq7Y9j10D > T1nMpuNkeg; T1nMpuNkeg = T1nMpuNkeg +1) {
        if (!(' ' != DF3G9EOw[T1nMpuNkeg]) || !(Hyq7Y9j10D -1 != T1nMpuNkeg)) {
            for (vXuQyjRpt = ZR6Q071yXv; T1nMpuNkeg > vXuQyjRpt; vXuQyjRpt++, ihsAzotSZ = ihsAzotSZ + 1)
                IJHV2uBpv7AD[awyvzRoG3S][ihsAzotSZ] = DF3G9EOw[vXuQyjRpt];
            ZR6Q071yXv = T1nMpuNkeg +1;
            if (!(Hyq7Y9j10D -1 != T1nMpuNkeg))
                IJHV2uBpv7AD[awyvzRoG3S][ihsAzotSZ] = DF3G9EOw[T1nMpuNkeg];
            awyvzRoG3S = awyvzRoG3S + 1;
            ihsAzotSZ = (57 - 57);
        };
    }
    for (T1nMpuNkeg = 0; awyvzRoG3S > T1nMpuNkeg; T1nMpuNkeg = T1nMpuNkeg +1) {
        if (strcmp (IJHV2uBpv7AD[T1nMpuNkeg], Pz6geh) == 0)
            strcpy (IJHV2uBpv7AD[T1nMpuNkeg], Im3q04dA);
    }
    for (T1nMpuNkeg = 0; T1nMpuNkeg < awyvzRoG3S; T1nMpuNkeg = T1nMpuNkeg +1) {
        if (T1nMpuNkeg != 0)
            ;
        printf ("%s", IJHV2uBpv7AD[T1nMpuNkeg]);
    }
    return 0;
}

