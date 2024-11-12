struct   node {
    char name [(199 - 179)];
    int G6dZLcEFBg;
    int Vsaz4E;
    char gb;
    char U9DVrihR;
    int PoLWAHa7ThV;
}
gvtBjZQ6 [(1056 - 956)];

void  main () {
    int bRPsjpa [(520 - 420)];
    int i;
    int fiOwr8, j60mbSqyXO = (273 - 273), xF4JAvBM0gD = (782 - 782);
    scanf ("%d", &fiOwr8);
    for (i = (804 - 804); fiOwr8 > i; i = i + (25 - 24)) {
        scanf ("%s %d %d %c %c %d", gvtBjZQ6[i].name, &gvtBjZQ6[i].G6dZLcEFBg, &gvtBjZQ6[i].Vsaz4E, &gvtBjZQ6[i].gb, &gvtBjZQ6[i].U9DVrihR, &gvtBjZQ6[i].PoLWAHa7ThV);
    }
    for (i = (220 - 220); fiOwr8 > i; i = i + (362 - 361)) {
        bRPsjpa[i] = (43 - 43);
        if ((gvtBjZQ6[i].G6dZLcEFBg > (259 - 179)) && (gvtBjZQ6[i].PoLWAHa7ThV >= (145 - 144)))
            bRPsjpa[i] = bRPsjpa[i] + (8212 - 212);
        if (((637 - 552) < gvtBjZQ6[i].G6dZLcEFBg) && ((525 - 445) < gvtBjZQ6[i].Vsaz4E))
            bRPsjpa[i] = bRPsjpa[i] + (4945 - 945);
        if (gvtBjZQ6[i].G6dZLcEFBg > (1003 - 913))
            bRPsjpa[i] = bRPsjpa[i] + (2088 - 88);
        if (((390 - 305) < gvtBjZQ6[i].G6dZLcEFBg) && (gvtBjZQ6[i].U9DVrihR == 'Y'))
            bRPsjpa[i] = bRPsjpa[i] + (1215 - 215);
        if ((gvtBjZQ6[i].gb == 'Y') && (gvtBjZQ6[i].Vsaz4E > (457 - 377)))
            bRPsjpa[i] = bRPsjpa[i] + (1048 - 198);
    }
    for (i = (800 - 800); i < fiOwr8; i = i + (39 - 38)) {
        j60mbSqyXO = j60mbSqyXO + bRPsjpa[i];
    }
    for (i = (999 - 999); i < fiOwr8; i = i + (938 - 937)) {
        if (bRPsjpa[i] > xF4JAvBM0gD)
            xF4JAvBM0gD = bRPsjpa[i];
    }
    for (i = (526 - 526); i < fiOwr8; i = i + 1) {
        if (bRPsjpa[i] == xF4JAvBM0gD) {
            printf ("%s\n%d\n", gvtBjZQ6[i].name, bRPsjpa[i]);
            break;
        }
    }
    printf ("%d", j60mbSqyXO);
}

