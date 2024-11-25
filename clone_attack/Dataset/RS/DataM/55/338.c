main () {
    char c [(342 - 302)];
    int a;
    int lY8TVIOoWRbS;
    int x;
    int G4rczvEJ;
    int l;
    int iilD9hcFzXA;
    getchar ();
    getchar ();
    scanf ("%d %s %d", &a, c, &lY8TVIOoWRbS);
    l = strlen (c);
    if (!('0' != c[(286 - 286)]))
        ;
    else {
        char v0ZJhzPGBDVw [(831 - 791)];
        char CnuZyMIFYTJ8 [(304 - 264)];
        int d;
        x = (439 - 439);
        for (G4rczvEJ = (855 - 855); l > G4rczvEJ; G4rczvEJ++) {
            if ('A' <= c[G4rczvEJ] && 'Z' >= c[G4rczvEJ])
                c[G4rczvEJ] = c[G4rczvEJ] - 'A' + 'a';
        }
        for (G4rczvEJ = (644 - 644); l > G4rczvEJ; G4rczvEJ++) {
            if (c[G4rczvEJ] >= 'a')
                d = c[G4rczvEJ] - 'a' + 10;
            else
                d = c[G4rczvEJ] - '0';
            x = d + x * a;
        }
        for (iilD9hcFzXA = (418 - 418); x != 0; iilD9hcFzXA++) {
            CnuZyMIFYTJ8[iilD9hcFzXA] = x % lY8TVIOoWRbS;
            x = x / lY8TVIOoWRbS;
        }
        CnuZyMIFYTJ8[iilD9hcFzXA] = '\0';
        for (G4rczvEJ = 0; G4rczvEJ < iilD9hcFzXA; G4rczvEJ++) {
            if (CnuZyMIFYTJ8[G4rczvEJ] < 10)
                v0ZJhzPGBDVw[iilD9hcFzXA - 1 - G4rczvEJ] = CnuZyMIFYTJ8[G4rczvEJ] + '0';
            else
                v0ZJhzPGBDVw[iilD9hcFzXA - 1 - G4rczvEJ] = CnuZyMIFYTJ8[G4rczvEJ] + 'A' - 10;
        }
        v0ZJhzPGBDVw[iilD9hcFzXA] = '\0';
        printf ("%s", v0ZJhzPGBDVw);
    };
}

