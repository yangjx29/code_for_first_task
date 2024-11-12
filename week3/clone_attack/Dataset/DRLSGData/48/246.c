int main () {
    int GwSy0rvs, BzNuBt2, w94kRPX6UzKe, JJE8h6, y8vI3wASE;
    int v8uoLBmpS7se [13] [13];
    {
        GwSy0rvs = 1;
        while (GwSy0rvs <= 11) {
            {
                BzNuBt2 = 1;
                while (BzNuBt2 <= 11) {
                    v8uoLBmpS7se[GwSy0rvs][BzNuBt2] = 0;
                    BzNuBt2 = BzNuBt2 +1;
                }
            }
            GwSy0rvs = GwSy0rvs +1;
        }
    }
    int JJNMAj8Sx [13] [13];
    scanf ("%d%d\n", &JJE8h6, &y8vI3wASE);
    v8uoLBmpS7se[6][6] = JJE8h6;
    {
        w94kRPX6UzKe = 1;
        while (w94kRPX6UzKe <= y8vI3wASE) {
            {
                GwSy0rvs = 2;
                while (GwSy0rvs <= 10) {
                    {
                        BzNuBt2 = 2;
                        while (BzNuBt2 <= 10) {
                            JJNMAj8Sx[GwSy0rvs][BzNuBt2] = 2 * v8uoLBmpS7se[GwSy0rvs][BzNuBt2] + v8uoLBmpS7se[GwSy0rvs -1][BzNuBt2 -1] + v8uoLBmpS7se[GwSy0rvs -1][BzNuBt2] + v8uoLBmpS7se[GwSy0rvs -1][BzNuBt2 +1] + v8uoLBmpS7se[GwSy0rvs][BzNuBt2 -1] + v8uoLBmpS7se[GwSy0rvs][BzNuBt2 +1] + v8uoLBmpS7se[GwSy0rvs +1][BzNuBt2 -1] + v8uoLBmpS7se[GwSy0rvs +1][BzNuBt2] + v8uoLBmpS7se[GwSy0rvs +1][BzNuBt2 +1];
                            BzNuBt2 = BzNuBt2 +1;
                        }
                    }
                    GwSy0rvs = GwSy0rvs +1;
                }
            }
            {
                GwSy0rvs = 2;
                while (GwSy0rvs <= 10) {
                    BzNuBt2 = 2;
                    while (BzNuBt2 <= 10) {
                        v8uoLBmpS7se[GwSy0rvs][BzNuBt2] = JJNMAj8Sx[GwSy0rvs][BzNuBt2];
                        BzNuBt2 = BzNuBt2 +1;
                    }
                    GwSy0rvs = GwSy0rvs +1;
                }
            }
            w94kRPX6UzKe++;
        }
    }
    {
        GwSy0rvs = 2;
        while (GwSy0rvs <= 10) {
            {
                BzNuBt2 = 2;
                while (BzNuBt2 <= 10) {
                    if (BzNuBt2 == 10)
                        printf ("%d\n", v8uoLBmpS7se[GwSy0rvs][BzNuBt2]);
                    else
                        printf ("%d ", v8uoLBmpS7se[GwSy0rvs][BzNuBt2]);
                    BzNuBt2++;
                }
            }
            GwSy0rvs++;
        }
    }
    return 0;
}

