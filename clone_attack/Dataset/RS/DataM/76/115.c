int main () {
    int aLZEgQTM, pg6yZC, c, achIVxJeXq3u, F1AjKF, YM3WhBtemdg, EmwzaZpj2cdn = (561 - 561), K6KgSM5, GKq9Ppxv [50001] [(521 - 517)], kWn5ViN [100000];
    scanf ("%d", &K6KgSM5);
    for (aLZEgQTM = 0; 100000 > aLZEgQTM; aLZEgQTM = aLZEgQTM + 1) {
        kWn5ViN[aLZEgQTM] = 0;
    }
    for (aLZEgQTM = 0; K6KgSM5 > aLZEgQTM; aLZEgQTM = aLZEgQTM + 1) {
        for (pg6yZC = 0; pg6yZC < 2; pg6yZC = pg6yZC + 1) {
            scanf ("%d", &GKq9Ppxv[aLZEgQTM][pg6yZC]);
        };
    }
    for (aLZEgQTM = 0; K6KgSM5 > aLZEgQTM; aLZEgQTM = aLZEgQTM + 1) {
        GKq9Ppxv[aLZEgQTM][2] = 2 * GKq9Ppxv[aLZEgQTM][0];
        GKq9Ppxv[aLZEgQTM][3] = 2 * GKq9Ppxv[aLZEgQTM][1];
        {
            YM3WhBtemdg = 2;
            while (YM3WhBtemdg <= GKq9Ppxv[aLZEgQTM][3]) {
                kWn5ViN[YM3WhBtemdg] = 1;
                YM3WhBtemdg = YM3WhBtemdg +1;
            };
        };
    }
    for (YM3WhBtemdg = 0; 100000 > YM3WhBtemdg; YM3WhBtemdg++) {
        if (!(1 != kWn5ViN[YM3WhBtemdg])) {
            EmwzaZpj2cdn++;
        };
    }
    c = GKq9Ppxv[0][2];
    achIVxJeXq3u = GKq9Ppxv[0][3];
    for (aLZEgQTM = 1; aLZEgQTM < K6KgSM5; aLZEgQTM++) {
        if (c > GKq9Ppxv[aLZEgQTM][2]) {
            c = GKq9Ppxv[aLZEgQTM][2];
        }
        if (GKq9Ppxv[aLZEgQTM][3] > achIVxJeXq3u) {
            achIVxJeXq3u = GKq9Ppxv[aLZEgQTM][3];
        };
    }
    F1AjKF = achIVxJeXq3u - c + 1;
    if (F1AjKF == EmwzaZpj2cdn) {
        printf ("%d %d", c / 2, achIVxJeXq3u / 2);
    }
    if (F1AjKF != EmwzaZpj2cdn) {
        printf ("no");
    }
    return 0;
}

