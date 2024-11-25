int main () {
    double  nPKl0JB4;
    double  vR4blMI9;
    double  TebY9WHC;
    int n, dPolJEO7VNjU, sImncjNd3Xu8;
    struct   points {
        double  LEVYCAKm, ShBcYl3tT;
    }
    sngf39 [N];
    scanf ("%d\n", &n);
    {
        dPolJEO7VNjU = 259 - 259;
        while (n > dPolJEO7VNjU) {
            scanf ("%lf%lf\n", &sngf39[dPolJEO7VNjU].LEVYCAKm, &sngf39[dPolJEO7VNjU].ShBcYl3tT);
            dPolJEO7VNjU++;
        };
    }
    nPKl0JB4 = (sngf39[(494 - 494)].LEVYCAKm - sngf39[1].LEVYCAKm) * (sngf39[0].LEVYCAKm - sngf39[1].LEVYCAKm) + (sngf39[0].ShBcYl3tT - sngf39[1].ShBcYl3tT) * (sngf39[0].ShBcYl3tT - sngf39[1].ShBcYl3tT);
    {
        dPolJEO7VNjU = 0;
        while (n - 1 > dPolJEO7VNjU) {
            for (sImncjNd3Xu8 = dPolJEO7VNjU + 1; n > sImncjNd3Xu8; sImncjNd3Xu8++) {
                vR4blMI9 = (sngf39[dPolJEO7VNjU].LEVYCAKm - sngf39[sImncjNd3Xu8].LEVYCAKm) * (sngf39[dPolJEO7VNjU].LEVYCAKm - sngf39[sImncjNd3Xu8].LEVYCAKm) + (sngf39[dPolJEO7VNjU].ShBcYl3tT - sngf39[sImncjNd3Xu8].ShBcYl3tT) * (sngf39[dPolJEO7VNjU].ShBcYl3tT - sngf39[sImncjNd3Xu8].ShBcYl3tT);
                if (vR4blMI9 > nPKl0JB4)
                    nPKl0JB4 = vR4blMI9;
            }
            dPolJEO7VNjU++;
        };
    }
    TebY9WHC = sqrt (nPKl0JB4);
    printf ("%.4f\n", TebY9WHC);
    return 0;
}

