void  main () {
    int kqnZ5u623ES;
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
    scanf ("%d", &kqnZ5u623ES);
    for (; kqnZ5u623ES = kqnZ5u623ES - 1;) {
        int AjsJe6W;
        double  *IZdjgK;
        int bCGf0LO;
        double  Wpf9DYSQBLo;
        double  *R84tNvbx;
        double  YVc1xeolhgbv;
        YVc1xeolhgbv = 0;
        double  vWESM1Ylmx;
        vWESM1Ylmx = YVc1xeolhgbv / AjsJe6W;
        double  TDb2mJe0ZMS1;
        TDb2mJe0ZMS1 = 0;
        double  jSotGnZ;
        scanf ("%d", &AjsJe6W);
        IZdjgK = (float *) calloc (AjsJe6W, sizeof (float));
        {
            bCGf0LO = 0;
            while (AjsJe6W > bCGf0LO) {
                bCGf0LO = bCGf0LO + 1;
                scanf ("%lf", IZdjgK++);
            };
        }
        IZdjgK = IZdjgK -AjsJe6W;
        R84tNvbx = IZdjgK;
        {
            bCGf0LO = 0;
            while (bCGf0LO < AjsJe6W) {
                bCGf0LO = bCGf0LO + 1;
                YVc1xeolhgbv = YVc1xeolhgbv +(*R84tNvbx);
                R84tNvbx = R84tNvbx +1;
            };
        }
        R84tNvbx = IZdjgK;
        {
            bCGf0LO = 0;
            while (bCGf0LO < AjsJe6W) {
                R84tNvbx = R84tNvbx +1;
                bCGf0LO = bCGf0LO + 1;
                TDb2mJe0ZMS1 = TDb2mJe0ZMS1 +(*R84tNvbx-vWESM1Ylmx) * (*R84tNvbx-vWESM1Ylmx);
            };
        }
        jSotGnZ = sqrt (TDb2mJe0ZMS1 / AjsJe6W);
        printf ("%.5f\n", jSotGnZ);
    };
}

