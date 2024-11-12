void  main () {
    int t4BRMU [10] [21] = {0};
    int uMApaxt, n4UA1R2Y, num, zrxOT4ALsaB [10] = {0};
    scanf ("%d", &num);
    for (uMApaxt = 1; num >= uMApaxt; uMApaxt = uMApaxt + 1) {
        for (n4UA1R2Y = 0; t4BRMU[uMApaxt][0] >= n4UA1R2Y; n4UA1R2Y++)
            scanf ("%d", &t4BRMU[uMApaxt][n4UA1R2Y]);
    }
    for (uMApaxt = 1; num >= uMApaxt; uMApaxt = uMApaxt + 1) {
        if (!(0 != t4BRMU[uMApaxt][0]))
            zrxOT4ALsaB[uMApaxt] = time;
        else if (!(1 != t4BRMU[uMApaxt][0])) {
            if (time <= t4BRMU[uMApaxt][1])
                zrxOT4ALsaB[uMApaxt] = time;
            else if (time > t4BRMU[uMApaxt][1] && time - 3 <= t4BRMU[uMApaxt][1])
                zrxOT4ALsaB[uMApaxt] = t4BRMU[uMApaxt][1];
            else
                zrxOT4ALsaB[uMApaxt] = time - 3;
        }
    }
    for (uMApaxt = 1; uMApaxt <= num; uMApaxt = uMApaxt + 1) {
        for (n4UA1R2Y = t4BRMU[uMApaxt][0]; n4UA1R2Y > 1; n4UA1R2Y = n4UA1R2Y - 1) {
            if (((t4BRMU[uMApaxt][n4UA1R2Y] + 3 * (n4UA1R2Y - 1)) > time) || (t4BRMU[uMApaxt][n4UA1R2Y] == 0))
                continue;
            else if ((t4BRMU[uMApaxt][n4UA1R2Y] + 3 * (n4UA1R2Y - 1) > time - 3) && (t4BRMU[uMApaxt][n4UA1R2Y] + 3 * (n4UA1R2Y - 1) <= time)) {
                zrxOT4ALsaB[uMApaxt] = t4BRMU[uMApaxt][n4UA1R2Y];
                break;
            }
            else {
                zrxOT4ALsaB[uMApaxt] = (time - (t4BRMU[uMApaxt][n4UA1R2Y] + 3 * n4UA1R2Y) + t4BRMU[uMApaxt][n4UA1R2Y]);
                break;
            }
        }
    }
    for (uMApaxt = 1; uMApaxt <= num; uMApaxt++)
        printf ("%d\n", zrxOT4ALsaB[uMApaxt]);
}

