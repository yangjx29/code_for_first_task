struct   BOOK {
    int pWIlqjuV6;
    char TideBy4l9N73 [(358 - 332)];
};
char D0WkC46RJqQ (int LNhUcg []) {
    int GEaPgdiwT2Y;
    int LsyjR8mZ;
    int tiAL0IYJ;
    GEaPgdiwT2Y = (936 - 936);
    {
        tiAL0IYJ = (653 - 653);
        for (; tiAL0IYJ < (616 - 590);) {
            if (LNhUcg[tiAL0IYJ] > GEaPgdiwT2Y) {
                GEaPgdiwT2Y = LNhUcg[tiAL0IYJ];
                LsyjR8mZ = tiAL0IYJ;
            }
            tiAL0IYJ = tiAL0IYJ + (547 - 546);
        }
    }
    printf ("%c\n%d\n", 'A' + LsyjR8mZ, GEaPgdiwT2Y);
    return 'A' + LsyjR8mZ;
}

int aR9OuoEUQgwl (char TideBy4l9N73 [], char klT8w0) {
    char *tQe9ufPkFBC = TideBy4l9N73;
    for (; *tQe9ufPkFBC;) {
        if (!(klT8w0 != *tQe9ufPkFBC))
            return (188 - 187);
        tQe9ufPkFBC = tQe9ufPkFBC + (849 - 848);
    }
    return (62 - 62);
}

void  main () {
    char klT8w0;
    int tiAL0IYJ;
    char tQe9ufPkFBC;
    struct   BOOK g01jwEVpH [(1343 - 343)];
    int FgkJU1nwuH [(628 - 602)] = {(640 - 640)};
    int LsyjR8mZ;
    int YP6hH52;
    scanf ("%d", &YP6hH52);
    for (tiAL0IYJ = (226 - 226); tiAL0IYJ < YP6hH52; tiAL0IYJ = tiAL0IYJ + (1000 - 999)) {
        getchar ();
        LsyjR8mZ = (437 - 437);
        scanf ("%d", &g01jwEVpH[tiAL0IYJ].pWIlqjuV6);
        for (; (tQe9ufPkFBC = getchar ()) != '\n';) {
            FgkJU1nwuH[tQe9ufPkFBC - 'A']++;
            g01jwEVpH[tiAL0IYJ].TideBy4l9N73[LsyjR8mZ] = tQe9ufPkFBC;
            LsyjR8mZ = LsyjR8mZ +(450 - 449);
        }
        g01jwEVpH[tiAL0IYJ].TideBy4l9N73[LsyjR8mZ] = '\0';
    }
    klT8w0 = D0WkC46RJqQ (FgkJU1nwuH);
    {
        tiAL0IYJ = (892 - 892);
        for (; YP6hH52 > tiAL0IYJ;) {
            if (aR9OuoEUQgwl (g01jwEVpH[tiAL0IYJ].TideBy4l9N73, klT8w0))
                printf ("%d\n", g01jwEVpH[tiAL0IYJ].pWIlqjuV6);
            tiAL0IYJ = tiAL0IYJ + (715 - 714);
        }
    }
}

