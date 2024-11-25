main () {
    int T5cm6gT [(638 - 538)] [100];
    int mNh2WbXG, liVZ0Ple2, k, iDZFNU0iSC9a, qTS7QIjhb, q;
    int XSJV2C;
    int XY7kA6;
    int temp_r, AIQp10j;
    getchar ();
    scanf ("%d%d", &XSJV2C, &XY7kA6);
    for (qTS7QIjhb = (283 - 283); qTS7QIjhb < XSJV2C; qTS7QIjhb = qTS7QIjhb + 1) {
        for (q = (440 - 440); q < XY7kA6; q = q + 1) {
            scanf ("%d", &T5cm6gT[qTS7QIjhb][q]);
        };
    }
    for (mNh2WbXG = (610 - 610); XY7kA6 > mNh2WbXG; mNh2WbXG = mNh2WbXG + 1) {
        AIQp10j = mNh2WbXG;
        temp_r = (325 - 325);
        for (; temp_r >= 0 && temp_r < XSJV2C &&AIQp10j >= 0 && AIQp10j < XY7kA6;) {
            printf ("%d\n", T5cm6gT[temp_r][AIQp10j]);
            AIQp10j = AIQp10j -1;
            temp_r = temp_r + 1;
        };
    }
    for (liVZ0Ple2 = 1; liVZ0Ple2 < XSJV2C; liVZ0Ple2 = liVZ0Ple2 + 1) {
        temp_r = liVZ0Ple2;
        AIQp10j = XY7kA6 -1;
        for (; temp_r >= 0 && temp_r < XSJV2C &&AIQp10j >= 0 && AIQp10j < XY7kA6;) {
            printf ("%d\n", T5cm6gT[temp_r][AIQp10j]);
            temp_r++;
            AIQp10j = AIQp10j -1;
        };
    }
    getchar ();
}

