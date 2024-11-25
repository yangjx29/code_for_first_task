int main () {
    double  D1Ibw67v3e = 3.1415926;
    double  Ln9ev28, lckHwU0C63Ze, tiaV5G, VTQfEgo0z, LZdUoE1Jv, M8PDLtT, JGXls73ZN, bJ9AgENxot, FFr6qp7ImuE;
    scanf ("%lf", &Ln9ev28);
    scanf ("%lf", &lckHwU0C63Ze);
    scanf ("%lf", &tiaV5G);
    scanf ("%lf", &VTQfEgo0z);
    scanf ("%lf", &M8PDLtT);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    M8PDLtT = M8PDLtT *D1Ibw67v3e / 360;
    LZdUoE1Jv = (Ln9ev28 +lckHwU0C63Ze + tiaV5G + VTQfEgo0z) / 2;
    JGXls73ZN = (LZdUoE1Jv -Ln9ev28) * (LZdUoE1Jv -lckHwU0C63Ze) * (LZdUoE1Jv -tiaV5G) * (LZdUoE1Jv -VTQfEgo0z);
    FFr6qp7ImuE = JGXls73ZN -Ln9ev28*lckHwU0C63Ze * tiaV5G * VTQfEgo0z *cos (M8PDLtT) * cos (M8PDLtT);
    if (0 > FFr6qp7ImuE) {
        printf ("Invalid input");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        bJ9AgENxot = sqrt (FFr6qp7ImuE);
        printf ("%.4lf", bJ9AgENxot);
    }
    return 0;
}

