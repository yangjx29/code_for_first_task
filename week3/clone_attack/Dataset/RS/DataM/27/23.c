void  main () {
    int JMrR1U;
    int APJFoaRkEA1H;
    double  cAj4U1XIGBQ7, EsNLmH3rl, oqVC6aTS, eMd1hKZ2qaYr;
    double  SlZqPzGw [(33280 - 512)], kfGAH1lRU5 [32768], Slcn9br5X [32768], Ym6XM7CU [32768], XzEh8LkCpMUt [32768], p5fGtyZY [32768];
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
    JMrR1U = 1;
    scanf ("%d", &APJFoaRkEA1H);
    while (APJFoaRkEA1H >= JMrR1U) {
        scanf ("%lf %lf %lf", &SlZqPzGw[JMrR1U], &kfGAH1lRU5[JMrR1U], &Slcn9br5X[JMrR1U]);
        cAj4U1XIGBQ7 = kfGAH1lRU5[JMrR1U] * kfGAH1lRU5[JMrR1U] - 4 * SlZqPzGw[JMrR1U] * Slcn9br5X[JMrR1U];
        EsNLmH3rl = -cAj4U1XIGBQ7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((925 - 925) < cAj4U1XIGBQ7) {
            Ym6XM7CU[JMrR1U] = -kfGAH1lRU5[JMrR1U] / ((1000 - 998) * SlZqPzGw[JMrR1U]);
            XzEh8LkCpMUt[JMrR1U] = sqrt (cAj4U1XIGBQ7) / (2 * SlZqPzGw[JMrR1U]);
            p5fGtyZY[JMrR1U] = (950 - 950);
        }
        else if ((131 - 131) > cAj4U1XIGBQ7) {
            Ym6XM7CU[JMrR1U] = -kfGAH1lRU5[JMrR1U] / (2 * SlZqPzGw[JMrR1U]);
            XzEh8LkCpMUt[JMrR1U] = sqrt (EsNLmH3rl) / (2 * SlZqPzGw[JMrR1U]);
            p5fGtyZY[JMrR1U] = 1;
        }
        else {
            Ym6XM7CU[JMrR1U] = -kfGAH1lRU5[JMrR1U] / (2 * SlZqPzGw[JMrR1U]);
            XzEh8LkCpMUt[JMrR1U] = (659 - 659);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p5fGtyZY[JMrR1U] = 2;
        }
        JMrR1U = JMrR1U +1;
    }
    JMrR1U = 1;
    for (; APJFoaRkEA1H >= JMrR1U;) {
        oqVC6aTS = Ym6XM7CU[JMrR1U] + XzEh8LkCpMUt[JMrR1U];
        eMd1hKZ2qaYr = Ym6XM7CU[JMrR1U] - XzEh8LkCpMUt[JMrR1U];
        if (1e-6 > fabs (oqVC6aTS))
            oqVC6aTS = 0;
        if (1e-6 > fabs (eMd1hKZ2qaYr))
            eMd1hKZ2qaYr = 0;
        if (1e-6 > fabs (Ym6XM7CU[JMrR1U]))
            Ym6XM7CU[JMrR1U] = 0;
        if (1e-6 > fabs (XzEh8LkCpMUt[JMrR1U]))
            XzEh8LkCpMUt[JMrR1U] = 0;
        if (p5fGtyZY[JMrR1U] == 0)
            printf ("x1=%.5f;x2=%.5f\n", oqVC6aTS, eMd1hKZ2qaYr);
        if (p5fGtyZY[JMrR1U] == 1)
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", Ym6XM7CU[JMrR1U], XzEh8LkCpMUt[JMrR1U], Ym6XM7CU[JMrR1U], XzEh8LkCpMUt[JMrR1U]);
        if (p5fGtyZY[JMrR1U] == 2)
            printf ("x1=x2=%.5f\n", oqVC6aTS);
        JMrR1U = JMrR1U +1;
    };
}

