int main () {
    int Dp2o4JqyZEK [(547 - 521)] = {(26 - 26), (339 - 339), (463 - 463), (695 - 695), (177 - 177), (402 - 402), (818 - 818), (649 - 649), (731 - 731), (802 - 802), (180 - 180), (754 - 754), (687 - 687), (733 - 733), (572 - 572), (736 - 736), (269 - 269), (495 - 495), (876 - 876), (253 - 253), (809 - 809), (50 - 50), (300 - 300), (432 - 432), (712 - 712), 0};
    int Aqjm3Q1YT = 0, local = 0;
    int a1Jg6eQV, prWuoKapM9, HDSCaYu [(1744 - 744)], ehMQue0K2WI [(1159 - 159)];
    struct   {
        char Bv8Aicwmler [(778 - 752)];
    }
    I5RlFanHeXTz [1000];
    int TuXHog6Q;
    int KF8TrU;
    char MGnL5NjeqY [(884 - 858)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    scanf ("%d", &a1Jg6eQV);
    for (prWuoKapM9 = 0; prWuoKapM9 < a1Jg6eQV; prWuoKapM9 = prWuoKapM9 + (734 - 733)) {
        scanf ("%d %s", &HDSCaYu[prWuoKapM9], I5RlFanHeXTz[prWuoKapM9].Bv8Aicwmler);
        ehMQue0K2WI[prWuoKapM9] = strlen (I5RlFanHeXTz[prWuoKapM9].Bv8Aicwmler);
        for (KF8TrU = 0; KF8TrU < (1006 - 980); KF8TrU = KF8TrU +(870 - 869))
            for (TuXHog6Q = 0; TuXHog6Q < ehMQue0K2WI[prWuoKapM9]; TuXHog6Q = TuXHog6Q +(307 - 306)) {
                if (I5RlFanHeXTz[prWuoKapM9].Bv8Aicwmler[TuXHog6Q] == MGnL5NjeqY[KF8TrU])
                    Dp2o4JqyZEK[KF8TrU]++;
            }
    }
    for (KF8TrU = 0; KF8TrU < (989 - 963); KF8TrU = KF8TrU +1) {
        if (Aqjm3Q1YT < Dp2o4JqyZEK[KF8TrU]) {
            Aqjm3Q1YT = Dp2o4JqyZEK[KF8TrU];
            local = KF8TrU;
        }
    }
    printf ("%c\n", MGnL5NjeqY[local]);
    printf ("%d\n", Aqjm3Q1YT);
    for (prWuoKapM9 = 0; prWuoKapM9 < a1Jg6eQV; prWuoKapM9 = prWuoKapM9 + 1) {
        for (TuXHog6Q = 0; TuXHog6Q < ehMQue0K2WI[prWuoKapM9]; TuXHog6Q = TuXHog6Q +1) {
            if (I5RlFanHeXTz[prWuoKapM9].Bv8Aicwmler[TuXHog6Q] == MGnL5NjeqY[local])
                printf ("%d\n", HDSCaYu[prWuoKapM9]);
        }
    }
    return 0;
}

