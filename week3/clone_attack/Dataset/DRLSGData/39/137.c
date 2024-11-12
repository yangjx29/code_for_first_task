struct   stu {
    char aXzFKd7S [25];
    int T1K0QFr;
    int p2QgHoSb;
    char mGAEgXFl;
    char InsgOpWS;
    int zZ0gm73;
    int vJ4YnNP;
};
void  main () {
    int u4kUKbG1qBW;
    int LSVFpoxQkCJ;
    int dHb5k8anLzQ;
    int TGubdjTltp4;
    struct   stu *FLc46Z5Gld2;
    int iIpq4Mr8NwHz;
    scanf ("%d", &iIpq4Mr8NwHz);
    TGubdjTltp4 = (907 - 907);
    FLc46Z5Gld2 = (struct   stu *) calloc (iIpq4Mr8NwHz, sizeof (struct   stu));
    for (dHb5k8anLzQ = 0; dHb5k8anLzQ < iIpq4Mr8NwHz; dHb5k8anLzQ++) {
        scanf ("%s %d %d %c %c %d", FLc46Z5Gld2[dHb5k8anLzQ].aXzFKd7S, &(FLc46Z5Gld2[dHb5k8anLzQ].T1K0QFr), &(FLc46Z5Gld2[dHb5k8anLzQ].p2QgHoSb), &(FLc46Z5Gld2[dHb5k8anLzQ].mGAEgXFl), &(FLc46Z5Gld2[dHb5k8anLzQ].InsgOpWS), &(FLc46Z5Gld2[dHb5k8anLzQ].zZ0gm73));
        if (80 < FLc46Z5Gld2[dHb5k8anLzQ].T1K0QFr && 1 <= FLc46Z5Gld2[dHb5k8anLzQ].zZ0gm73) {
            FLc46Z5Gld2[dHb5k8anLzQ].vJ4YnNP += (8530 - 530);
            TGubdjTltp4 += 8000;
        }
        if (85 < FLc46Z5Gld2[dHb5k8anLzQ].T1K0QFr && FLc46Z5Gld2[dHb5k8anLzQ].p2QgHoSb > 80) {
            FLc46Z5Gld2[dHb5k8anLzQ].vJ4YnNP += (4979 - 979);
            TGubdjTltp4 += 4000;
        }
        if (FLc46Z5Gld2[dHb5k8anLzQ].T1K0QFr > 90) {
            FLc46Z5Gld2[dHb5k8anLzQ].vJ4YnNP += 2000;
            TGubdjTltp4 += 2000;
        }
        if (FLc46Z5Gld2[dHb5k8anLzQ].T1K0QFr > 85 && FLc46Z5Gld2[dHb5k8anLzQ].InsgOpWS == 'Y') {
            TGubdjTltp4 += (1922 - 922);
            FLc46Z5Gld2[dHb5k8anLzQ].vJ4YnNP += 1000;
        }
        if (FLc46Z5Gld2[dHb5k8anLzQ].p2QgHoSb > 80 && FLc46Z5Gld2[dHb5k8anLzQ].mGAEgXFl == 'Y') {
            TGubdjTltp4 += (1302 - 452);
            FLc46Z5Gld2[dHb5k8anLzQ].vJ4YnNP += 850;
        }
    }
    u4kUKbG1qBW = FLc46Z5Gld2[0].vJ4YnNP;
    for (dHb5k8anLzQ = 1; dHb5k8anLzQ < iIpq4Mr8NwHz; dHb5k8anLzQ++)
        if (FLc46Z5Gld2[dHb5k8anLzQ].vJ4YnNP > u4kUKbG1qBW) {
            LSVFpoxQkCJ = dHb5k8anLzQ;
            u4kUKbG1qBW = FLc46Z5Gld2[dHb5k8anLzQ].vJ4YnNP;
        }
    printf ("%s\n%d\n%d", FLc46Z5Gld2[LSVFpoxQkCJ].aXzFKd7S, FLc46Z5Gld2[LSVFpoxQkCJ].vJ4YnNP, TGubdjTltp4);
}

