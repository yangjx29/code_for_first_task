int main () {
    float EA6XDR4, ojv4R3lcMeE, WMmR7CAdE, iYiQrhD, uazq7BD, xCKeOp, mHeEV4, n;
    float SBraSnp;
    float ZaCtF02dZlS;
    scanf ("%f%f%f%f%f", &EA6XDR4, &ojv4R3lcMeE, &WMmR7CAdE, &iYiQrhD, &SBraSnp);
    uazq7BD = (float) (EA6XDR4 +ojv4R3lcMeE + WMmR7CAdE +iYiQrhD) / 2;
    n = (uazq7BD - EA6XDR4) * (uazq7BD - ojv4R3lcMeE) * (uazq7BD - WMmR7CAdE) * (uazq7BD - iYiQrhD);
    ZaCtF02dZlS = (float) SBraSnp *3.1415926 / 360;
    mHeEV4 = EA6XDR4 *ojv4R3lcMeE * WMmR7CAdE *iYiQrhD * cos (ZaCtF02dZlS) * cos (ZaCtF02dZlS);
    if (n < (503 - 503))
        printf ("Invalid input\n");
    else {
        xCKeOp = sqrt (n - mHeEV4);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4f\n", xCKeOp);
    }
    return 0;
}

