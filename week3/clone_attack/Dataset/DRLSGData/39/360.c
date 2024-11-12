struct   file {
    char OVRFXi [50];
    int dsOYZHqN;
    int HsTpxP;
    char XnNWY2;
    char dGovZqpSghr;
    int F1ZDAgMK;
    int jEqSUtZ9;
};
int yHhQA8NbC (int dsOYZHqN, int F1ZDAgMK) {
    if (80 < dsOYZHqN && F1ZDAgMK >= 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int RdaCIfy (int dsOYZHqN, int HsTpxP) {
    if (85 < dsOYZHqN && HsTpxP > 80) {
        return 1;
    }
    else {
        return 0;
    }
}

int ljwO4KU (int dsOYZHqN) {
    if (90 < dsOYZHqN) {
        return 1;
    }
    else {
        return 0;
    }
}

int JrXT4zlQ (int dsOYZHqN, char dGovZqpSghr) {
    if (dsOYZHqN > 85 && dGovZqpSghr == 'Y') {
        return 1;
    }
    else {
        return 0;
    }
}

int ErJGBpc0bN (int HsTpxP, char XnNWY2) {
    if (HsTpxP > 80 && XnNWY2 == 'Y') {
        return 1;
    }
    else {
        return 0;
    }
}

void  main () {
    int i, rYXlLWMg, EKr6U48 = 0, iKX6pe3V = 0, PgFVWDQry6;
    struct   file Q1Y4DjJrhBR5 [110];
    scanf ("%d", &rYXlLWMg);
    {
        i = 1;
        while (i <= 110) {
            Q1Y4DjJrhBR5[i - 1].jEqSUtZ9 = 0;
            i++;
        }
    }
    for (i = 1; i <= rYXlLWMg; i++) {
        scanf ("%s %d %d %c %c %d", &Q1Y4DjJrhBR5[i].OVRFXi, &Q1Y4DjJrhBR5[i].dsOYZHqN, &Q1Y4DjJrhBR5[i].HsTpxP, &Q1Y4DjJrhBR5[i].XnNWY2, &Q1Y4DjJrhBR5[i].dGovZqpSghr, &Q1Y4DjJrhBR5[i].F1ZDAgMK);
        if (yHhQA8NbC (Q1Y4DjJrhBR5[i].dsOYZHqN, Q1Y4DjJrhBR5[i].F1ZDAgMK)) {
            Q1Y4DjJrhBR5[i].jEqSUtZ9 += 8000;
        }
        if (RdaCIfy (Q1Y4DjJrhBR5[i].dsOYZHqN, Q1Y4DjJrhBR5[i].HsTpxP)) {
            Q1Y4DjJrhBR5[i].jEqSUtZ9 += 4000;
        }
        if (ljwO4KU (Q1Y4DjJrhBR5[i].dsOYZHqN)) {
            Q1Y4DjJrhBR5[i].jEqSUtZ9 += 2000;
        }
        if (JrXT4zlQ (Q1Y4DjJrhBR5[i].dsOYZHqN, Q1Y4DjJrhBR5[i].dGovZqpSghr)) {
            Q1Y4DjJrhBR5[i].jEqSUtZ9 += 1000;
        }
        if (ErJGBpc0bN (Q1Y4DjJrhBR5[i].HsTpxP, Q1Y4DjJrhBR5[i].XnNWY2)) {
            Q1Y4DjJrhBR5[i].jEqSUtZ9 += 850;
        }
        EKr6U48 += Q1Y4DjJrhBR5[i].jEqSUtZ9;
    }
    {
        i = 1;
        while (i <= rYXlLWMg) {
            if (Q1Y4DjJrhBR5[i].jEqSUtZ9 > iKX6pe3V) {
                iKX6pe3V = Q1Y4DjJrhBR5[i].jEqSUtZ9;
                PgFVWDQry6 = i;
            }
            i++;
        }
    }
    printf ("%s\n%d\n%d", Q1Y4DjJrhBR5[PgFVWDQry6].OVRFXi, iKX6pe3V, EKr6U48);
}

