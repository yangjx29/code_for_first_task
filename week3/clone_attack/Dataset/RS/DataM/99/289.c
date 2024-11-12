void  main () {
    float mJiE7a9SI2X;
    float PlSVCO0EI5;
    float aScvNKje;
    float z6XcPE7OFG;
    float n;
    float m;
    float i;
    float Lzan3AKTQtw;
    float jmli1cITSr;
    float g;
    float iYa73zGkC;
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
    mJiE7a9SI2X = 0;
    PlSVCO0EI5 = 0;
    aScvNKje = 0;
    z6XcPE7OFG = 0;
    scanf ("%f", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i++;
            scanf ("%f", &m);
            if ((0 < m) && (m < 19))
                mJiE7a9SI2X = mJiE7a9SI2X + 1;
            if ((18 < m) && (36 > m))
                PlSVCO0EI5++;
            if ((m > 35) && (m < 61))
                aScvNKje = aScvNKje + 1;
            if (m > 60)
                z6XcPE7OFG = z6XcPE7OFG + 1;
        };
    }
    Lzan3AKTQtw = (float) (100 * mJiE7a9SI2X / n);
    jmli1cITSr = (float) (100 * PlSVCO0EI5 / n);
    g = (float) (100 * aScvNKje / n);
    iYa73zGkC = (float) (100 * z6XcPE7OFG / n);
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", Lzan3AKTQtw, jmli1cITSr, g, iYa73zGkC);
}

