int main () {
    int NxR9DS1g, eRXq7Yo8kB, k, OYIHG7E9B [(983 - 883)];
    double  sum [(212 - 112)] = {(443 - 443)}, eQE9Wwd [100] = {(85 - 85)}, sAGeN3kb [100] = {(272 - 272)}, cd3ElcSMPWyn [100] [100] = {(180 - 180)}, n5VpDXr4TK [100] = {(998 - 998)};
    scanf ("%d", &k);
    for (NxR9DS1g = (734 - 734); k > NxR9DS1g; NxR9DS1g = NxR9DS1g +1) {
        scanf ("%d", &OYIHG7E9B[NxR9DS1g]);
        for (eRXq7Yo8kB = (196 - 196); OYIHG7E9B[NxR9DS1g] > eRXq7Yo8kB; eRXq7Yo8kB = eRXq7Yo8kB + 1)
            scanf ("%lf", &cd3ElcSMPWyn[NxR9DS1g][eRXq7Yo8kB]);
    }
    for (NxR9DS1g = 0; k > NxR9DS1g; NxR9DS1g = NxR9DS1g +1) {
        for (eRXq7Yo8kB = 0; eRXq7Yo8kB < OYIHG7E9B[NxR9DS1g]; eRXq7Yo8kB = eRXq7Yo8kB + 1) {
            sum[NxR9DS1g] = sum[NxR9DS1g] + cd3ElcSMPWyn[NxR9DS1g][eRXq7Yo8kB];
        }
        n5VpDXr4TK[NxR9DS1g] = sum[NxR9DS1g] / OYIHG7E9B[NxR9DS1g];
    }
    for (NxR9DS1g = 0; k > NxR9DS1g; NxR9DS1g++) {
        for (eRXq7Yo8kB = 0; eRXq7Yo8kB < OYIHG7E9B[NxR9DS1g]; eRXq7Yo8kB++) {
            eQE9Wwd[NxR9DS1g] += (cd3ElcSMPWyn[NxR9DS1g][eRXq7Yo8kB] - n5VpDXr4TK[NxR9DS1g]) * (cd3ElcSMPWyn[NxR9DS1g][eRXq7Yo8kB] - n5VpDXr4TK[NxR9DS1g]);
        }
        sAGeN3kb[NxR9DS1g] = sqrt (eQE9Wwd[NxR9DS1g] / OYIHG7E9B[NxR9DS1g]);
    }
    for (NxR9DS1g = 0; k > NxR9DS1g; NxR9DS1g++) {
        printf ("%.5lf\n", sAGeN3kb[NxR9DS1g]);
    }
    return 0;
}

