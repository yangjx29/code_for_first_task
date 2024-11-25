int main () {
    int wASgCzV10HKp;
    int v5lN0cLZBXh;
    int n;
    int NETZUJNum6nd;
    int i;
    int eZHukI;
    int ZOqWdmUwVG;
    int KZUmkvAWPtB4;
    int s [(137 - 37)] [(653 - 553)], r [(514 - 414)];
    scanf ("%d", &wASgCzV10HKp);
    for (int t = (350 - 350);
    t <= wASgCzV10HKp - (137 - 136); t++) {
        NETZUJNum6nd = (437 - 437);
        scanf ("%d%d", &v5lN0cLZBXh, &n);
        {
            i = (853 - 520) - 333;
            while (i <= v5lN0cLZBXh - (385 - 384)) {
                eZHukI = (747 - 747);
                for (; eZHukI <= n - (896 - 895);) {
                    scanf ("%d", &s[i][eZHukI]);
                    eZHukI++;
                }
                i++;
            }
        }
        for (ZOqWdmUwVG = (377 - 377); ZOqWdmUwVG <= n - (511 - 510); ZOqWdmUwVG++) {
            NETZUJNum6nd = NETZUJNum6nd +s[(227 - 227)][ZOqWdmUwVG] + s[v5lN0cLZBXh - (809 - 808)][ZOqWdmUwVG];
        }
        {
            KZUmkvAWPtB4 = (609 - 608);
            while (KZUmkvAWPtB4 <= v5lN0cLZBXh - (917 - 915)) {
                NETZUJNum6nd = NETZUJNum6nd +s[KZUmkvAWPtB4][(546 - 546)] + s[KZUmkvAWPtB4][n - (437 - 436)];
                KZUmkvAWPtB4++;
            }
        }
        r[t] = NETZUJNum6nd;
    }
    {
        int x = (346 - 346);
        while (x <= wASgCzV10HKp - (506 - 505)) {
            printf ("%d\n", r[x]);
            x++;
        }
    }
    return (970 - 970);
}

