struct   letter {
    char OvF3eLjt6coh;
    int times;
}
r5gDh2pe [57], letb [57];

int main () {
    char b3dr9Me5y [30] = {0}, jLOKw7g [30] = {0};
    int NLDITdc;
    int eObalusK;
    int G1Sl9oB;
    int p03NmJAhST;
    NLDITdc = (728 - 728);
    scanf ("%s %s", b3dr9Me5y, jLOKw7g);
    G1Sl9oB = strlen (b3dr9Me5y);
    for (eObalusK = 0; 57 > eObalusK; eObalusK = eObalusK + 1) {
        r5gDh2pe[eObalusK].OvF3eLjt6coh = 'a' + eObalusK;
        letb[eObalusK].OvF3eLjt6coh = 'a' + eObalusK;
        r5gDh2pe[eObalusK].times = 0;
        letb[eObalusK].times = 0;
    }
    p03NmJAhST = strlen (jLOKw7g);
    if (!(p03NmJAhST == G1Sl9oB)) {
        printf ("NO");
        return 0;
    }
    else {
        {
            eObalusK = 0;
            while (eObalusK < G1Sl9oB) {
                r5gDh2pe[b3dr9Me5y[eObalusK] - 65].times++;
                letb[jLOKw7g[eObalusK] - 65].times++;
                eObalusK++;
            };
        }
        for (eObalusK = 0; eObalusK < 57; eObalusK = eObalusK + 1) {
            if (r5gDh2pe[eObalusK].times != letb[eObalusK].times)
                NLDITdc = 1;
        }
        if (NLDITdc == 0)
            printf ("YES");
        else
            ;
    };
}

