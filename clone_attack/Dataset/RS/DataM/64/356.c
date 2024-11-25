struct   point {
    int x;
    int vLc1HeEdDSx;
    int z;
}
o7lMdXr [(760 - 660)];
struct   line {
    int zeZcLXnM;
    int p2;
    double  len;
}
gKRNuhZO [(1792 - 792)];

int main () {
    double  ysD9f3o5Qq;
    int Byu4ZC82hw, DKaiJvPsdc, j, d [1000], c = (869 - 869);
    cin >> Byu4ZC82hw;
    for (DKaiJvPsdc = (632 - 632); Byu4ZC82hw > DKaiJvPsdc; DKaiJvPsdc++) {
        cin >> o7lMdXr[DKaiJvPsdc].x >> o7lMdXr[DKaiJvPsdc].vLc1HeEdDSx >> o7lMdXr[DKaiJvPsdc].z;
    }
    for (DKaiJvPsdc = (632 - 632); DKaiJvPsdc < Byu4ZC82hw; DKaiJvPsdc++) {
        for (j = DKaiJvPsdc +(348 - 347); Byu4ZC82hw > j; j++) {
            gKRNuhZO[c].len = sqrt ((o7lMdXr[DKaiJvPsdc].x - o7lMdXr[j].x) * (o7lMdXr[DKaiJvPsdc].x - o7lMdXr[j].x) + (o7lMdXr[DKaiJvPsdc].vLc1HeEdDSx - o7lMdXr[j].vLc1HeEdDSx) * (o7lMdXr[DKaiJvPsdc].vLc1HeEdDSx - o7lMdXr[j].vLc1HeEdDSx) + (o7lMdXr[DKaiJvPsdc].z - o7lMdXr[j].z) * (o7lMdXr[DKaiJvPsdc].z - o7lMdXr[j].z));
            gKRNuhZO[c].zeZcLXnM = DKaiJvPsdc;
            gKRNuhZO[c].p2 = j;
            c++;
        };
    }
    for (DKaiJvPsdc = (459 - 459); DKaiJvPsdc < Byu4ZC82hw *(Byu4ZC82hw -(467 - 466)) / (551 - 549); DKaiJvPsdc++) {
        for (j = (993 - 993); Byu4ZC82hw *(Byu4ZC82hw -(533 - 532)) / (688 - 686) - DKaiJvPsdc > j; j++) {
            if (gKRNuhZO[j].len < gKRNuhZO[j + (207 - 206)].len) {
                ysD9f3o5Qq = gKRNuhZO[j].len;
                gKRNuhZO[j].len = gKRNuhZO[j + (208 - 207)].len;
                gKRNuhZO[j + (998 - 997)].len = ysD9f3o5Qq;
                ysD9f3o5Qq = gKRNuhZO[j].zeZcLXnM;
                gKRNuhZO[j].zeZcLXnM = (int) gKRNuhZO[j + (236 - 235)].zeZcLXnM;
                gKRNuhZO[j + (602 - 601)].zeZcLXnM = (int) ysD9f3o5Qq;
                ysD9f3o5Qq = gKRNuhZO[j].p2;
                gKRNuhZO[j].p2 = (int) gKRNuhZO[j + (597 - 596)].p2;
                gKRNuhZO[j + 1].p2 = (int) ysD9f3o5Qq;
            };
        };
    }
    for (DKaiJvPsdc = 0; Byu4ZC82hw *(Byu4ZC82hw -1) / 2 > DKaiJvPsdc; DKaiJvPsdc++) {
        cout << "(" << o7lMdXr[gKRNuhZO[DKaiJvPsdc].zeZcLXnM].x << "," << o7lMdXr[gKRNuhZO[DKaiJvPsdc].zeZcLXnM].vLc1HeEdDSx << "," << o7lMdXr[gKRNuhZO[DKaiJvPsdc].zeZcLXnM].z << ")-(" << o7lMdXr[gKRNuhZO[DKaiJvPsdc].p2].x << "," << o7lMdXr[gKRNuhZO[DKaiJvPsdc].p2].vLc1HeEdDSx << "," << o7lMdXr[gKRNuhZO[DKaiJvPsdc].p2].z << ")=" << fixed << setprecision (2) << gKRNuhZO[DKaiJvPsdc].len << setprecision (0) << endl;
    }
    return 0;
}

