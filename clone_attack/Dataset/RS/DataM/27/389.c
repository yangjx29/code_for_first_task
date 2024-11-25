int main (int wjJX1ybY8L6, char *Q9uoZ1Yy6wIc []) {
    float aOZpbKw [100];
    float hhOa43Sum6N [100];
    float p3toJsXUB4F [100];
    int CfVXWlD;
    int xl6qKS;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &CfVXWlD);
    {
        xl6qKS = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xl6qKS < CfVXWlD) {
            scanf ("%f%f%f", &aOZpbKw[xl6qKS], &hhOa43Sum6N[xl6qKS], &p3toJsXUB4F[xl6qKS]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            xl6qKS++;
        };
    }
    {
        xl6qKS = 0;
        while (xl6qKS < CfVXWlD) {
            if (aOZpbKw[xl6qKS] != 0) {
                double  IjqfxTIREbm;
                double  dU31iRCDf;
                double  CfVXWlD;
                double  XDUQx8KE6A;
                double  SctgaCS4ReK;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
                IjqfxTIREbm = hhOa43Sum6N[xl6qKS] * hhOa43Sum6N[xl6qKS] - 4 * aOZpbKw[xl6qKS] * p3toJsXUB4F[xl6qKS];
                dU31iRCDf = -(hhOa43Sum6N[xl6qKS] / (2 * aOZpbKw[xl6qKS]));
                CfVXWlD = sqrt (fabs (IjqfxTIREbm)) / (2 * aOZpbKw[xl6qKS]);
                if (IjqfxTIREbm == 0) {
                    printf ("x1=x2=%.5f\n", dU31iRCDf);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else if (IjqfxTIREbm > 0) {
                    XDUQx8KE6A = dU31iRCDf + CfVXWlD;
                    SctgaCS4ReK = dU31iRCDf - CfVXWlD;
                    printf ("x1=%.5f;x2=%.5f\n", XDUQx8KE6A, SctgaCS4ReK);
                }
                else {
                    printf ("x1=%.5f+%.5fi;", dU31iRCDf, CfVXWlD);
                    printf ("x2=%.5f-%.5fi\n", dU31iRCDf, CfVXWlD);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xl6qKS++;
        };
    }
    return 0;
}

