int main () {
    double  Ov5Nspzr;
    int k;
    k = 0;
    int id [105] [2];
    double  ORjP9zcZAE2p [105];
    double  I5mIFk7;
    double  distance [15] [15] = {0};
    int xGpwH9quKlI [11] [3];
    int Q3mcjwR0sgVJ;
    scanf ("%d", &Q3mcjwR0sgVJ);
    for (int i = 0;
    i < Q3mcjwR0sgVJ; i++) {
        for (int qYMmeCdS8 = 0;
        qYMmeCdS8 < 3; qYMmeCdS8++) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d", &xGpwH9quKlI[i][qYMmeCdS8]);
        }
    }
    for (int i = 0;
    i < Q3mcjwR0sgVJ; i++) {
        for (int k = 1;
        i + k < Q3mcjwR0sgVJ; k++) {
            I5mIFk7 = sqrt ((xGpwH9quKlI[i][0] - xGpwH9quKlI[i + k][0]) * (xGpwH9quKlI[i][0] - xGpwH9quKlI[i + k][0]) + (xGpwH9quKlI[i][1] - xGpwH9quKlI[i + k][1]) * (xGpwH9quKlI[i][1] - xGpwH9quKlI[i + k][1]) + (xGpwH9quKlI[i][2] - xGpwH9quKlI[i + k][2]) * (xGpwH9quKlI[i][2] - xGpwH9quKlI[i + k][2]));
            distance[i][i + k] = I5mIFk7;
        }
    }
    for (int i = 0;
    i < Q3mcjwR0sgVJ; i++) {
        for (int qYMmeCdS8 = 0;
        qYMmeCdS8 < Q3mcjwR0sgVJ; qYMmeCdS8++) {
            if (distance[i][qYMmeCdS8] == 0) {
                continue;
            }
            id[k][0] = i;
            id[k][1] = qYMmeCdS8;
            ORjP9zcZAE2p[k] = distance[i][qYMmeCdS8];
            k++;
        }
    }
    scanf ("%d", &Q3mcjwR0sgVJ);
    for (int oq0F9CuxaRk = 1;
    oq0F9CuxaRk < k; oq0F9CuxaRk++) {
        for (int i = k - 1;
        i >= oq0F9CuxaRk; i--) {
            if (ORjP9zcZAE2p[i] > ORjP9zcZAE2p[i - 1]) {
                Ov5Nspzr = id[i][0];
                id[i][0] = id[i - 1][0];
                id[i - 1][0] = Ov5Nspzr;
                Ov5Nspzr = id[i][1];
                id[i][1] = id[i - 1][1];
                id[i - 1][1] = Ov5Nspzr;
                Ov5Nspzr = ORjP9zcZAE2p[i];
                ORjP9zcZAE2p[i] = ORjP9zcZAE2p[i - 1];
                ORjP9zcZAE2p[i - 1] = Ov5Nspzr;
            }
        }
    }
    for (int i = 0;
    i < k; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xGpwH9quKlI[id[i][0]][0], xGpwH9quKlI[id[i][0]][1], xGpwH9quKlI[id[i][0]][2], xGpwH9quKlI[id[i][1]][0], xGpwH9quKlI[id[i][1]][1], xGpwH9quKlI[id[i][1]][2], ORjP9zcZAE2p[i]);
    }
    return 0;
}

