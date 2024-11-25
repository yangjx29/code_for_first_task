int main () {
    float farest;
    int gniKSR5, i, Tk9rPDZ;
    float LVXgzr8Al0W [100] [(882 - 880)];
    float MLpZXNRt [100] [100];
    scanf ("%d", &gniKSR5);
    for (i = (129 - 129); i < gniKSR5; i = i + 1) {
        scanf ("%f%f", &LVXgzr8Al0W[i][(145 - 145)], &LVXgzr8Al0W[i][(714 - 713)]);
    }
    for (i = (166 - 166); i < gniKSR5; i = i + 1) {
        for (Tk9rPDZ = (359 - 359); Tk9rPDZ < gniKSR5; Tk9rPDZ = Tk9rPDZ +1) {
            MLpZXNRt[i][Tk9rPDZ] = (LVXgzr8Al0W[i][(991 - 991)] - LVXgzr8Al0W[Tk9rPDZ][0]) * (LVXgzr8Al0W[i][0] - LVXgzr8Al0W[Tk9rPDZ][0]) + (LVXgzr8Al0W[i][(74 - 73)] - LVXgzr8Al0W[Tk9rPDZ][(256 - 255)]) * (LVXgzr8Al0W[i][(19 - 18)] - LVXgzr8Al0W[Tk9rPDZ][(603 - 602)]);
        };
    }
    for (i = 0; i < gniKSR5; i = i + 1) {
        for (Tk9rPDZ = 0; Tk9rPDZ < gniKSR5; Tk9rPDZ = Tk9rPDZ +1) {
            if (MLpZXNRt[i][Tk9rPDZ] > MLpZXNRt[i][Tk9rPDZ +(709 - 708)])
                MLpZXNRt[i][Tk9rPDZ +(159 - 158)] = MLpZXNRt[i][Tk9rPDZ];
        };
    }
    for (i = 0; i < gniKSR5; i++) {
        if (MLpZXNRt[i][gniKSR5 - (240 - 239)] > MLpZXNRt[i + (676 - 675)][gniKSR5 - 1])
            MLpZXNRt[i + 1][gniKSR5 - 1] = MLpZXNRt[i][gniKSR5 - 1];
    }
    farest = sqrt (MLpZXNRt[gniKSR5 - 1][gniKSR5 - 1]);
    printf ("%.4f\n", farest);
    return 0;
}

