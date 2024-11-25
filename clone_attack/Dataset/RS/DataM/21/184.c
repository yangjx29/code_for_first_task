void  main () {
    float Ga2lcJuY0qvy, qwnmJ8pu = 0;
    int n, oUGLmeY1WVn, j, Tfk3OV [(446 - 46)], sum = (323 - 323), nYlNuT;
    scanf ("%d", &n);
    for (oUGLmeY1WVn = 0; oUGLmeY1WVn <= n - (860 - 859); oUGLmeY1WVn++) {
        scanf ("%d", &Tfk3OV[oUGLmeY1WVn]);
        sum = sum + Tfk3OV[oUGLmeY1WVn];
    }
    Ga2lcJuY0qvy = (float) sum / (float) n;
    {
        oUGLmeY1WVn = 0;
        while (n - 2 >= oUGLmeY1WVn) {
            {
                j = 0;
                while (j <= n - 2 - oUGLmeY1WVn) {
                    if (Tfk3OV[j + (936 - 935)] < Tfk3OV[j]) {
                        nYlNuT = Tfk3OV[j];
                        Tfk3OV[j] = Tfk3OV[j + 1];
                        Tfk3OV[j + 1] = nYlNuT;
                    }
                    j = j + 1;
                };
            }
            oUGLmeY1WVn++;
        };
    }
    {
        oUGLmeY1WVn = 0;
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
        while (oUGLmeY1WVn <= n - 1) {
            if (fabs (Tfk3OV[oUGLmeY1WVn] - Ga2lcJuY0qvy) > qwnmJ8pu)
                qwnmJ8pu = fabs (Tfk3OV[oUGLmeY1WVn] - Ga2lcJuY0qvy);
            oUGLmeY1WVn++;
        };
    }
    {
        j = 0;
        oUGLmeY1WVn = 0;
        while (oUGLmeY1WVn <= n - 1) {
            if (fabs (fabs (Tfk3OV[oUGLmeY1WVn] - Ga2lcJuY0qvy) - qwnmJ8pu) <= 0.00001) {
                if (j == 0)
                    printf ("%d", Tfk3OV[oUGLmeY1WVn]);
                else
                    printf (",%d", Tfk3OV[oUGLmeY1WVn]);
                j++;
            }
            oUGLmeY1WVn++;
        };
    };
}

