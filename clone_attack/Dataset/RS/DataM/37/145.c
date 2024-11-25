main () {
    int LxyLO3Ct9P0Z [26];
    char W69Np1OeHGX [100000];
    int YtOEg9cJG;
    int Qx2X0vz;
    int J4aspVXt8U;
    int I3M5PVA;
    scanf ("%d", &YtOEg9cJG);
    for (int NdyZ5l2 = 0;
    NdyZ5l2 < YtOEg9cJG; NdyZ5l2++) {
        int LxyLO3Ct9P0Z [26] = {0};
        scanf ("%s", W69Np1OeHGX);
        J4aspVXt8U = strlen (W69Np1OeHGX);
        for (I3M5PVA = 0; I3M5PVA < J4aspVXt8U; I3M5PVA = I3M5PVA +1) {
            for (Qx2X0vz = 0; Qx2X0vz < 26; Qx2X0vz = Qx2X0vz +1) {
                if (!(Qx2X0vz +'a' != W69Np1OeHGX[I3M5PVA]))
                    LxyLO3Ct9P0Z[Qx2X0vz]++;
            };
        }
        for (I3M5PVA = 0; I3M5PVA < J4aspVXt8U; I3M5PVA++) {
            if (LxyLO3Ct9P0Z[W69Np1OeHGX[I3M5PVA] - 'a'] == 1) {
                printf ("%c\n", W69Np1OeHGX[I3M5PVA]);
                break;
            };
        }
        if (I3M5PVA == J4aspVXt8U)
            ;
    }
    getchar ();
    getchar ();
}

