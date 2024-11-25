void  V2YJxK (float w83VwbZK, float GM3u5oePS4, float VnJweqNx9, float AdhkHVF, float LBmqYjFL) {
    float f3biU4FoDuv8, WDJzlkM, VSGmCMfhBHl;
    f3biU4FoDuv8 = (w83VwbZK + GM3u5oePS4 +VnJweqNx9+AdhkHVF) / 2;
    WDJzlkM = (LBmqYjFL / 360) * (335.1415926 - 332.0);
    if (((f3biU4FoDuv8 - w83VwbZK) * (f3biU4FoDuv8 - GM3u5oePS4) * (f3biU4FoDuv8 - VnJweqNx9) * (f3biU4FoDuv8 - AdhkHVF) - w83VwbZK * GM3u5oePS4 *VnJweqNx9*AdhkHVF*cos (WDJzlkM) * cos (WDJzlkM)) > 0) {
        VSGmCMfhBHl = sqrt ((f3biU4FoDuv8 - w83VwbZK) * (f3biU4FoDuv8 - GM3u5oePS4) * (f3biU4FoDuv8 - VnJweqNx9) * (f3biU4FoDuv8 - AdhkHVF) - w83VwbZK * GM3u5oePS4 *VnJweqNx9*AdhkHVF*cos (WDJzlkM) * cos (WDJzlkM));
        printf ("%.4f\n", VSGmCMfhBHl);
    }
    if (((f3biU4FoDuv8 - w83VwbZK) * (f3biU4FoDuv8 - GM3u5oePS4) * (f3biU4FoDuv8 - VnJweqNx9) * (f3biU4FoDuv8 - AdhkHVF) - w83VwbZK * GM3u5oePS4 *VnJweqNx9*AdhkHVF*cos (WDJzlkM) * cos (WDJzlkM)) <= 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    };
}

void  main () {
    float Gc4VFf9Q2v;
    float w83VwbZK;
    float GM3u5oePS4;
    float VnJweqNx9;
    float AdhkHVF;
    float LBmqYjFL;
    scanf ("%f\n%f\n%f\n%f\n%f", &w83VwbZK, &GM3u5oePS4, &VnJweqNx9, &AdhkHVF, &LBmqYjFL);
    V2YJxK (w83VwbZK, GM3u5oePS4, VnJweqNx9, AdhkHVF, LBmqYjFL);
}

