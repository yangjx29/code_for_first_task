int main () {
    int gHWCTOL8j7E;
    int JGbAgzO;
    int rH5ke8;
    int crSjiNYf;
    int ARrblYGMy;
    int e1eDNiloIVB9;
    e1eDNiloIVB9 = 1;
    int n0hNskQSqBnZ [1000] [1000];
    int n;
    scanf ("%d", &n);
    for (int OgVeax = 0;
    OgVeax < n; OgVeax = OgVeax +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int HJjq6XC = 0;
        HJjq6XC < n; HJjq6XC++) {
            scanf ("%d", &n0hNskQSqBnZ[OgVeax][HJjq6XC]);
            if (n0hNskQSqBnZ[OgVeax][HJjq6XC] == 0 && e1eDNiloIVB9 == 1) {
                e1eDNiloIVB9 = 2;
                gHWCTOL8j7E = OgVeax;
                JGbAgzO = HJjq6XC;
            }
            if (n0hNskQSqBnZ[OgVeax][HJjq6XC] == 0) {
                crSjiNYf = HJjq6XC;
                rH5ke8 = OgVeax;
            };
        };
    }
    ARrblYGMy = (rH5ke8 - gHWCTOL8j7E - 1) * (crSjiNYf - JGbAgzO -1);
    printf ("%d", ARrblYGMy);
    return 0;
}

