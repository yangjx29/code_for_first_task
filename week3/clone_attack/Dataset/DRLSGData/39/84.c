int main () {
    struct   student {
        char g5izHY [20];
        int hlJa7qGhpIX;
        int NQRcGAkC5qd;
        char uSoVDHQ0RFxY;
        char f1WfHFl;
        int LzpbWL;
    };
    struct   student C0TDg9rkhLEj [(1029 - 929)];
    long  Ke3BC4Q, MuFNoenAMq [100], rn8usw6V4;
    int avG4RIMyH93l;
    int j40KHQXf;
    int QyHfLwj1;
    avG4RIMyH93l = (902 - 902);
    Ke3BC4Q = 0;
    scanf ("%d\n", &QyHfLwj1);
    for (j40KHQXf = 0; (QyHfLwj1 -(368 - 367)) >= j40KHQXf; j40KHQXf = j40KHQXf + (952 - 951)) {
        scanf ("%s", &C0TDg9rkhLEj[j40KHQXf].g5izHY);
        scanf ("%d%d %c %c%d", &C0TDg9rkhLEj[j40KHQXf].hlJa7qGhpIX, &C0TDg9rkhLEj[j40KHQXf].NQRcGAkC5qd, &C0TDg9rkhLEj[j40KHQXf].uSoVDHQ0RFxY, &C0TDg9rkhLEj[j40KHQXf].f1WfHFl, &C0TDg9rkhLEj[j40KHQXf].LzpbWL);
    }
    for (j40KHQXf = 0; (QyHfLwj1 -1) >= j40KHQXf; j40KHQXf = j40KHQXf + 1) {
        MuFNoenAMq[j40KHQXf] = 0;
        if (C0TDg9rkhLEj[j40KHQXf].hlJa7qGhpIX > (317 - 237) && C0TDg9rkhLEj[j40KHQXf].LzpbWL >= 1)
            MuFNoenAMq[j40KHQXf] = MuFNoenAMq[j40KHQXf] + (8714 - 714);
        if (C0TDg9rkhLEj[j40KHQXf].hlJa7qGhpIX > 85 && C0TDg9rkhLEj[j40KHQXf].NQRcGAkC5qd > (967 - 887))
            MuFNoenAMq[j40KHQXf] = MuFNoenAMq[j40KHQXf] + 4000;
        if (90 < C0TDg9rkhLEj[j40KHQXf].hlJa7qGhpIX)
            MuFNoenAMq[j40KHQXf] = MuFNoenAMq[j40KHQXf] + 2000;
        if (!('Y' != C0TDg9rkhLEj[j40KHQXf].f1WfHFl) && C0TDg9rkhLEj[j40KHQXf].hlJa7qGhpIX > 85)
            MuFNoenAMq[j40KHQXf] = MuFNoenAMq[j40KHQXf] + 1000;
        if (C0TDg9rkhLEj[j40KHQXf].uSoVDHQ0RFxY == 'Y' && C0TDg9rkhLEj[j40KHQXf].NQRcGAkC5qd > 80)
            MuFNoenAMq[j40KHQXf] = MuFNoenAMq[j40KHQXf] + (1407 - 557);
    }
    rn8usw6V4 = MuFNoenAMq[0];
    for (j40KHQXf = 0; j40KHQXf <= (QyHfLwj1 -1); j40KHQXf++) {
        Ke3BC4Q = Ke3BC4Q +MuFNoenAMq[j40KHQXf];
        if (rn8usw6V4 < MuFNoenAMq[j40KHQXf]) {
            rn8usw6V4 = MuFNoenAMq[j40KHQXf];
            avG4RIMyH93l = j40KHQXf;
        }
    }
    printf ("%s\n%d\n%ld", C0TDg9rkhLEj[avG4RIMyH93l].g5izHY, rn8usw6V4, Ke3BC4Q);
}

