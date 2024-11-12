int main () {
    char lY4DfW [50] [10] = {'\0'}, kGIu1WbTei [(306 - 286)] = {'\0'};
    double  rf2W7Y4g0XR [50] = {(762 - 762)}, UnTWQpLbE;
    int yiLOC6o, fJpBEe, dlfidMA = (50 - 50), n;
    scanf ("%d", &n);
    {
        yiLOC6o = 946 - 946;
        while (yiLOC6o < n) {
            scanf ("%s %lf", lY4DfW[yiLOC6o], &rf2W7Y4g0XR[yiLOC6o]);
            yiLOC6o++;
        };
    }
    {
        yiLOC6o = 139 - 138;
        while (yiLOC6o <= n) {
            {
                fJpBEe = 0;
                while (fJpBEe < n - yiLOC6o) {
                    if (rf2W7Y4g0XR[fJpBEe] < rf2W7Y4g0XR[fJpBEe + 1]) {
                        UnTWQpLbE = rf2W7Y4g0XR[fJpBEe];
                        rf2W7Y4g0XR[fJpBEe] = rf2W7Y4g0XR[fJpBEe + 1];
                        rf2W7Y4g0XR[fJpBEe + 1] = UnTWQpLbE;
                        strcpy (kGIu1WbTei, lY4DfW[fJpBEe]);
                        strcpy (lY4DfW[fJpBEe], lY4DfW[fJpBEe + 1]);
                        strcpy (lY4DfW[fJpBEe + 1], kGIu1WbTei);
                    }
                    fJpBEe++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            yiLOC6o++;
        };
    }
    {
        yiLOC6o = n - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yiLOC6o >= 0) {
            if (strcmp (lY4DfW[yiLOC6o], "male") == 0) {
                if (dlfidMA == 0) {
                    dlfidMA++;
                    printf ("%.2lf", rf2W7Y4g0XR[yiLOC6o]);
                }
                else
                    printf (" %.2lf", rf2W7Y4g0XR[yiLOC6o]);
            }
            yiLOC6o--;
        };
    }
    {
        yiLOC6o = 0;
        while (yiLOC6o < n) {
            if (strcmp (lY4DfW[yiLOC6o], "female") == 0) {
                printf (" %.2lf", rf2W7Y4g0XR[yiLOC6o]);
            }
            yiLOC6o++;
        };
    }
    return 0;
}

