main () {
    int VbXR67OsaiLg;
    int gR5a6ISt;
    int JPA7qOu8;
    int m2XkrFdzVDWh;
    int Y5qWXz;
    char rVdKb7e [100000];
    scanf ("%d\n", &VbXR67OsaiLg);
    while (VbXR67OsaiLg--) {
        gets (rVdKb7e);
        Y5qWXz = strlen (rVdKb7e);
        {
            gR5a6ISt = 0;
            while (gR5a6ISt < Y5qWXz) {
                m2XkrFdzVDWh = 1;
                if (rVdKb7e[gR5a6ISt] == '@')
                    continue;
                {
                    JPA7qOu8 = gR5a6ISt + 1;
                    while (JPA7qOu8 < Y5qWXz) {
                        if (rVdKb7e[gR5a6ISt] == rVdKb7e[JPA7qOu8]) {
                            m2XkrFdzVDWh = 0;
                            rVdKb7e[JPA7qOu8] = '@';
                        }
                        JPA7qOu8 = JPA7qOu8 +1;
                    };
                }
                if (m2XkrFdzVDWh == 1) {
                    CBLtzW (rVdKb7e [gR5a6ISt]);
                    break;
                }
                gR5a6ISt++;
            };
        }
        CBLtzW (10);
        if (gR5a6ISt == Y5qWXz)
            printf ("no");
    };
}

