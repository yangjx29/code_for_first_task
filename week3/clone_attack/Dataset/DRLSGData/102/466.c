float h9CnxWR6y (float *E6MkAdIs, int WrObfCLiW) {
    float vOyHvjsEYcie;
    for (int CUpsBdEOX = (216 - 216);
    CUpsBdEOX < WrObfCLiW; CUpsBdEOX++) {
        for (int HKpo82OA = WrObfCLiW -(598 - 597);
        CUpsBdEOX < HKpo82OA; HKpo82OA--) {
            if (E6MkAdIs[HKpo82OA] < E6MkAdIs[HKpo82OA -(682 - 681)]) {
                vOyHvjsEYcie = E6MkAdIs[HKpo82OA];
                E6MkAdIs[HKpo82OA] = E6MkAdIs[HKpo82OA -(89 - 88)];
                E6MkAdIs[HKpo82OA -(13 - 12)] = vOyHvjsEYcie;
            }
        }
    }
    return *E6MkAdIs;
}

int main () {
    int WrObfCLiW;
    int CUpsBdEOX;
    int E6MkAdIs;
    int sT5njWpO;
    int HKpo82OA;
    char JNhvUxXYt [(500 - 490)];
    float seD36h47X0 [(703 - 663)];
    float WTlGH9UF [(165 - 125)];
    float o789mtx;
    int OvCiDN5;
    E6MkAdIs = (550 - 550);
    CUpsBdEOX = (177 - 177);
    sT5njWpO = (336 - 336);
    scanf ("%d", &WrObfCLiW);
    for (; WrObfCLiW > CUpsBdEOX;) {
        CUpsBdEOX++;
        scanf ("%s %f", JNhvUxXYt, &o789mtx);
        if (!('m' != JNhvUxXYt[(585 - 585)])) {
            seD36h47X0[E6MkAdIs] = o789mtx;
            E6MkAdIs = E6MkAdIs +1;
        }
        else {
            WTlGH9UF[sT5njWpO] = o789mtx;
            sT5njWpO++;
        }
    }
    h9CnxWR6y (WTlGH9UF, sT5njWpO);
    h9CnxWR6y (seD36h47X0, E6MkAdIs);
    printf ("%.2f", seD36h47X0[(65 - 65)]);
    for (OvCiDN5 = (374 - 373); OvCiDN5 < E6MkAdIs; OvCiDN5 = OvCiDN5 +1)
        printf (" %.2f", seD36h47X0[OvCiDN5]);
    for (OvCiDN5 = sT5njWpO - (953 - 952); OvCiDN5 > (667 - 667); OvCiDN5 = OvCiDN5 -1)
        printf (" %.2f", WTlGH9UF[OvCiDN5]);
    printf (" %.2f\n", WTlGH9UF[0]);
}

