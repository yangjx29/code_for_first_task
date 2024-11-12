int main () {
    int txpJ9ztUVB, gObHjPXNi5;
    double  tJucCoZr786 [100];
    double  zgk2fC, vmw3dhUa5q, E8f0dL;
    scanf ("%d", &gObHjPXNi5);
    {
        txpJ9ztUVB = 0;
        while (gObHjPXNi5 > txpJ9ztUVB) {
            scanf ("%lf %lf", &zgk2fC, &vmw3dhUa5q);
            tJucCoZr786[txpJ9ztUVB] = vmw3dhUa5q / zgk2fC;
            txpJ9ztUVB = txpJ9ztUVB + 1;
            E8f0dL = tJucCoZr786[0];
        };
    }
    {
        txpJ9ztUVB = 1;
        while (txpJ9ztUVB < gObHjPXNi5) {
            if ((tJucCoZr786[txpJ9ztUVB] - E8f0dL) > 0.05) {
                printf ("better\n");
            }
            if (0.05 < (E8f0dL -tJucCoZr786[txpJ9ztUVB])) {
                printf ("worse\n");
            }
            else if ((tJucCoZr786[txpJ9ztUVB] - E8f0dL <= 0.05) && (E8f0dL -tJucCoZr786[txpJ9ztUVB] <= 0.05)) {
                printf ("same\n");
            }
            txpJ9ztUVB++;
        };
    }
    return 0;
}

