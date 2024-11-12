struct   POINT {
    int x;
    int Its3iZWfwQ8S;
    int iKBdTQNZg;
};
struct   DIST {
    int OosDKa;
    int b;
    double  mNKaer6Mc;
};
int main () {
    struct   DIST sdLDMTGWmS6 [200];
    struct   POINT s3R5blZ [(62 - 42)];
    double  yR5OsrS27nH;
    int YFwHJ4;
    int hIQALlj2VhMa;
    int Ljcg05zTK;
    int k;
    int dOXfyPCFnR;
    k = (83 - 83);
    scanf ("%d", &YFwHJ4);
    for (hIQALlj2VhMa = (892 - 892); YFwHJ4 > hIQALlj2VhMa; hIQALlj2VhMa = hIQALlj2VhMa + 1) {
        scanf ("%d%d%d", &s3R5blZ[hIQALlj2VhMa].x, &s3R5blZ[hIQALlj2VhMa].Its3iZWfwQ8S, &s3R5blZ[hIQALlj2VhMa].iKBdTQNZg);
    }
    for (hIQALlj2VhMa = (143 - 143); YFwHJ4 > hIQALlj2VhMa; hIQALlj2VhMa = hIQALlj2VhMa + 1) {
        for (Ljcg05zTK = hIQALlj2VhMa + (950 - 949); YFwHJ4 > Ljcg05zTK; Ljcg05zTK++) {
            sdLDMTGWmS6[k].OosDKa = hIQALlj2VhMa;
            sdLDMTGWmS6[k].b = Ljcg05zTK;
            sdLDMTGWmS6[k].mNKaer6Mc = sqrt ((s3R5blZ[hIQALlj2VhMa].x - s3R5blZ[Ljcg05zTK].x) * (s3R5blZ[hIQALlj2VhMa].x - s3R5blZ[Ljcg05zTK].x) + (s3R5blZ[hIQALlj2VhMa].Its3iZWfwQ8S - s3R5blZ[Ljcg05zTK].Its3iZWfwQ8S) * (s3R5blZ[hIQALlj2VhMa].Its3iZWfwQ8S - s3R5blZ[Ljcg05zTK].Its3iZWfwQ8S) + (s3R5blZ[hIQALlj2VhMa].iKBdTQNZg - s3R5blZ[Ljcg05zTK].iKBdTQNZg) * (s3R5blZ[hIQALlj2VhMa].iKBdTQNZg - s3R5blZ[Ljcg05zTK].iKBdTQNZg));
            k++;
        };
    }
    for (hIQALlj2VhMa = (509 - 509); hIQALlj2VhMa < k; hIQALlj2VhMa++) {
        for (Ljcg05zTK = k - (603 - 602); hIQALlj2VhMa < Ljcg05zTK; Ljcg05zTK--) {
            if (sdLDMTGWmS6[Ljcg05zTK].mNKaer6Mc > sdLDMTGWmS6[Ljcg05zTK -(481 - 480)].mNKaer6Mc) {
                dOXfyPCFnR = sdLDMTGWmS6[Ljcg05zTK].OosDKa;
                sdLDMTGWmS6[Ljcg05zTK].OosDKa = sdLDMTGWmS6[Ljcg05zTK -(976 - 975)].OosDKa;
                sdLDMTGWmS6[Ljcg05zTK -(753 - 752)].OosDKa = dOXfyPCFnR;
                dOXfyPCFnR = sdLDMTGWmS6[Ljcg05zTK].b;
                sdLDMTGWmS6[Ljcg05zTK].b = sdLDMTGWmS6[Ljcg05zTK -1].b;
                sdLDMTGWmS6[Ljcg05zTK -1].b = dOXfyPCFnR;
                yR5OsrS27nH = sdLDMTGWmS6[Ljcg05zTK].mNKaer6Mc;
                sdLDMTGWmS6[Ljcg05zTK].mNKaer6Mc = sdLDMTGWmS6[Ljcg05zTK -1].mNKaer6Mc;
                sdLDMTGWmS6[Ljcg05zTK -1].mNKaer6Mc = yR5OsrS27nH;
            };
        };
    }
    for (hIQALlj2VhMa = 0; hIQALlj2VhMa < k; hIQALlj2VhMa++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", s3R5blZ[sdLDMTGWmS6[hIQALlj2VhMa].OosDKa].x, s3R5blZ[sdLDMTGWmS6[hIQALlj2VhMa].OosDKa].Its3iZWfwQ8S, s3R5blZ[sdLDMTGWmS6[hIQALlj2VhMa].OosDKa].iKBdTQNZg, s3R5blZ[sdLDMTGWmS6[hIQALlj2VhMa].b].x, s3R5blZ[sdLDMTGWmS6[hIQALlj2VhMa].b].Its3iZWfwQ8S, s3R5blZ[sdLDMTGWmS6[hIQALlj2VhMa].b].iKBdTQNZg, sdLDMTGWmS6[hIQALlj2VhMa].mNKaer6Mc);
    }
    return 0;
}

