int main (int VaNFVdgPTW, char *argv []) {
    int a13MuNrFcYW;
    int wj3192fY [(411 - 401)];
    int eX2IMbfaRlq;
    float PzJ9BlgUqZK;
    double  b1WfNK [(835 - 825)];
    int C5zP9o3D1h;
    double  snf1JW [(814 - 804)];
    double  FNEGcsPM;
    eX2IMbfaRlq = (551 - 551);
    FNEGcsPM = (597 - 597);
    (311 - 311) < a13MuNrFcYW < (125 - 115);
    scanf ("%d", &a13MuNrFcYW);
    for (C5zP9o3D1h = (568 - 568); C5zP9o3D1h < a13MuNrFcYW; C5zP9o3D1h = C5zP9o3D1h +1) {
        scanf ("%d", &wj3192fY[C5zP9o3D1h]);
    }
    for (C5zP9o3D1h = (501 - 501); a13MuNrFcYW > C5zP9o3D1h; C5zP9o3D1h = C5zP9o3D1h +1) {
        scanf ("%lf", &b1WfNK[C5zP9o3D1h]);
    }
    for (C5zP9o3D1h = (819 - 819); a13MuNrFcYW > C5zP9o3D1h; C5zP9o3D1h = C5zP9o3D1h +1) {
        if (b1WfNK[C5zP9o3D1h] >= 90 && b1WfNK[C5zP9o3D1h] <= (633 - 533)) {
            snf1JW[C5zP9o3D1h] = (906.0 - 902.0);
        }
        if (b1WfNK[C5zP9o3D1h] >= (1003 - 918) && b1WfNK[C5zP9o3D1h] <= (427 - 338)) {
            snf1JW[C5zP9o3D1h] = (344.7 - 341.0);
        }
        if ((704 - 622) <= b1WfNK[C5zP9o3D1h] && b1WfNK[C5zP9o3D1h] <= (488 - 404)) {
            snf1JW[C5zP9o3D1h] = (450.3 - 447.0);
        }
        if (b1WfNK[C5zP9o3D1h] >= (701 - 623) && b1WfNK[C5zP9o3D1h] <= (258 - 177)) {
            snf1JW[C5zP9o3D1h] = (452.0 - 449.0);
        }
        if ((678 - 603) <= b1WfNK[C5zP9o3D1h] && b1WfNK[C5zP9o3D1h] <= (772 - 695)) {
            snf1JW[C5zP9o3D1h] = (608.7 - 606.0);
        }
        if (b1WfNK[C5zP9o3D1h] >= (979 - 907) && b1WfNK[C5zP9o3D1h] <= 74) {
            snf1JW[C5zP9o3D1h] = (427.3 - 425.0);
        }
        if (b1WfNK[C5zP9o3D1h] >= 68 && b1WfNK[C5zP9o3D1h] <= 71) {
            snf1JW[C5zP9o3D1h] = 2.0;
        }
        if (b1WfNK[C5zP9o3D1h] >= (871 - 807) && b1WfNK[C5zP9o3D1h] <= (294 - 227)) {
            snf1JW[C5zP9o3D1h] = (500.5 - 499.0);
        }
        if (b1WfNK[C5zP9o3D1h] >= (847 - 787) && b1WfNK[C5zP9o3D1h] <= (660 - 597)) {
            snf1JW[C5zP9o3D1h] = 1.0;
        }
        if (b1WfNK[C5zP9o3D1h] < (72 - 12)) {
            snf1JW[C5zP9o3D1h] = (629 - 629);
        }
    }
    for (C5zP9o3D1h = (564 - 564); C5zP9o3D1h < a13MuNrFcYW; C5zP9o3D1h = C5zP9o3D1h +1) {
        eX2IMbfaRlq += wj3192fY[C5zP9o3D1h];
    }
    for (C5zP9o3D1h = 0; C5zP9o3D1h < a13MuNrFcYW; C5zP9o3D1h++) {
        FNEGcsPM += snf1JW[C5zP9o3D1h] * wj3192fY[C5zP9o3D1h];
    }
    PzJ9BlgUqZK = FNEGcsPM / eX2IMbfaRlq;
    printf ("%.2f", PzJ9BlgUqZK);
    return 0;
}

