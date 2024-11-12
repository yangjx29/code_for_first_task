int main () {
    int SWHK9D [(406 - 396)];
    int L7zBdc0r;
    int WzY4NBp;
    int GCwMc6GHkiD [(283 - 273)];
    double  biWoemP [10];
    double  srdqaCEN;
    double  YO7wuZ;
    YO7wuZ = (560 - 560);
    srdqaCEN = (614 - 614);
    scanf ("%d", &L7zBdc0r);
    for (WzY4NBp = (148 - 148); L7zBdc0r > WzY4NBp; WzY4NBp = WzY4NBp +1) {
        scanf ("%d", &SWHK9D[WzY4NBp]);
    }
    {
        WzY4NBp = (824 - 824);
        while (WzY4NBp < L7zBdc0r) {
            scanf ("%d", &GCwMc6GHkiD[WzY4NBp]);
            if ((354 - 254) >= GCwMc6GHkiD[WzY4NBp] && 90 <= GCwMc6GHkiD[WzY4NBp]) {
                biWoemP[WzY4NBp] = (347.0 - 343.0);
            }
            else if ((590 - 501) >= GCwMc6GHkiD[WzY4NBp] && (316 - 231) <= GCwMc6GHkiD[WzY4NBp]) {
                biWoemP[WzY4NBp] = (253.7 - 250.0);
            }
            else if (84 >= GCwMc6GHkiD[WzY4NBp] && GCwMc6GHkiD[WzY4NBp] >= (98 - 16)) {
                biWoemP[WzY4NBp] = (132.3 - 129.0);
            }
            else if ((613 - 532) >= GCwMc6GHkiD[WzY4NBp] && (818 - 740) <= GCwMc6GHkiD[WzY4NBp]) {
                biWoemP[WzY4NBp] = 3.0;
            }
            else if (77 >= GCwMc6GHkiD[WzY4NBp] && GCwMc6GHkiD[WzY4NBp] >= (478 - 403)) {
                biWoemP[WzY4NBp] = (908.7 - 906.0);
            }
            else if (GCwMc6GHkiD[WzY4NBp] <= (691 - 617) && GCwMc6GHkiD[WzY4NBp] >= (497 - 425)) {
                biWoemP[WzY4NBp] = (915.3 - 913.0);
            }
            else if (GCwMc6GHkiD[WzY4NBp] <= (533 - 462) && GCwMc6GHkiD[WzY4NBp] >= (1045 - 977)) {
                biWoemP[WzY4NBp] = (582.0 - 580.0);
            }
            else if (GCwMc6GHkiD[WzY4NBp] <= (809 - 742) && GCwMc6GHkiD[WzY4NBp] >= (995 - 931)) {
                biWoemP[WzY4NBp] = (645.5 - 644.0);
            }
            else if (GCwMc6GHkiD[WzY4NBp] <= (251 - 188) && GCwMc6GHkiD[WzY4NBp] >= 60) {
                biWoemP[WzY4NBp] = (720.0 - 719.0);
            }
            else {
                biWoemP[WzY4NBp] = (142 - 142);
            }
            WzY4NBp = WzY4NBp +1;
        }
    }
    {
        WzY4NBp = (919 - 919);
        while (WzY4NBp < L7zBdc0r) {
            srdqaCEN += (SWHK9D[WzY4NBp] * biWoemP[WzY4NBp]);
            YO7wuZ += SWHK9D[WzY4NBp];
            WzY4NBp = WzY4NBp +1;
        }
    }
    srdqaCEN /= YO7wuZ;
    printf ("%.2lf", srdqaCEN);
    return 0;
}

