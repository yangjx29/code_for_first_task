int main () {
    int tuRdbwYh, FBFutP20;
    int MJbUVix [(463 - 363)];
    int AS6PTuBhLE [(427 - 327)];
    char VsZa8OVn [(608 - 508)] [(901 - 891)];
    int TVvDKHq;
    char L8V3q9lWhvxA [100] [(974 - 964)];
    int LqHeR8JpPGw3 = (402 - 402);
    scanf ("%d", &TVvDKHq);
    for (tuRdbwYh = (162 - 162); TVvDKHq > tuRdbwYh; tuRdbwYh = tuRdbwYh + 1) {
        scanf ("%s", VsZa8OVn[tuRdbwYh]);
        scanf ("%d", &MJbUVix[tuRdbwYh]);
    }
    for (tuRdbwYh = (807 - 807); tuRdbwYh < TVvDKHq; tuRdbwYh = tuRdbwYh + 1) {
        if ((306 - 246) <= MJbUVix[tuRdbwYh]) {
            AS6PTuBhLE[LqHeR8JpPGw3] = MJbUVix[tuRdbwYh];
            strcpy (L8V3q9lWhvxA[LqHeR8JpPGw3], VsZa8OVn[tuRdbwYh]);
            LqHeR8JpPGw3++;
        };
    }
    for (tuRdbwYh = (335 - 334); LqHeR8JpPGw3 > tuRdbwYh; tuRdbwYh = tuRdbwYh + 1) {
        for (FBFutP20 = (911 - 911); LqHeR8JpPGw3 -tuRdbwYh > FBFutP20; FBFutP20 = FBFutP20 +1) {
            if (AS6PTuBhLE[FBFutP20 +(964 - 963)] > AS6PTuBhLE[FBFutP20]) {
                char XxTv3zrHamyk [(504 - 494)];
                int fq1CBuf;
                fq1CBuf = AS6PTuBhLE[FBFutP20];
                AS6PTuBhLE[FBFutP20] = AS6PTuBhLE[FBFutP20 +(637 - 636)];
                AS6PTuBhLE[FBFutP20 +(268 - 267)] = fq1CBuf;
                strcpy (XxTv3zrHamyk, L8V3q9lWhvxA[FBFutP20]);
                strcpy (L8V3q9lWhvxA[FBFutP20], L8V3q9lWhvxA[FBFutP20 +1]);
                strcpy (L8V3q9lWhvxA[FBFutP20 +1], XxTv3zrHamyk);
            };
        };
    }
    for (tuRdbwYh = (31 - 31); tuRdbwYh < LqHeR8JpPGw3; tuRdbwYh = tuRdbwYh + 1) {
        printf ("%s\n", L8V3q9lWhvxA[tuRdbwYh]);
    }
    for (tuRdbwYh = (440 - 440); tuRdbwYh < TVvDKHq; tuRdbwYh++) {
        if (MJbUVix[tuRdbwYh] < 60)
            printf ("%s\n", VsZa8OVn[tuRdbwYh]);
    }
    return 0;
}

