int main (int r1N6XG, char *cVxIjQH8 []) {
    int LtSreV6hPqA2, e2j5mxyW8BeN;
    double  rrgHdCqP2Xl [10], j9ZRp0VYF6 = 0, P6BZx1a = 0, GuYodHj [10], sq7mVDM [10], cRlSr0hU5guM;
    scanf ("%d", &LtSreV6hPqA2);
    {
        e2j5mxyW8BeN = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LtSreV6hPqA2 > e2j5mxyW8BeN) {
            scanf ("%lf", &sq7mVDM[e2j5mxyW8BeN]);
            P6BZx1a += sq7mVDM[e2j5mxyW8BeN];
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
            e2j5mxyW8BeN = e2j5mxyW8BeN + 1;
        };
    }
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
    for (e2j5mxyW8BeN = 0; e2j5mxyW8BeN < LtSreV6hPqA2; e2j5mxyW8BeN++) {
        scanf ("%lf", &GuYodHj[e2j5mxyW8BeN]);
        if (GuYodHj[e2j5mxyW8BeN] >= 90 && GuYodHj[e2j5mxyW8BeN] <= 100)
            rrgHdCqP2Xl[e2j5mxyW8BeN] = 4.0 * sq7mVDM[e2j5mxyW8BeN];
        else {
            if (GuYodHj[e2j5mxyW8BeN] >= 85 && 89 >= GuYodHj[e2j5mxyW8BeN])
                rrgHdCqP2Xl[e2j5mxyW8BeN] = 3.7 * sq7mVDM[e2j5mxyW8BeN];
            else {
                if (GuYodHj[e2j5mxyW8BeN] >= 82 && GuYodHj[e2j5mxyW8BeN] <= 84)
                    rrgHdCqP2Xl[e2j5mxyW8BeN] = 3.3 * sq7mVDM[e2j5mxyW8BeN];
                else {
                    if (GuYodHj[e2j5mxyW8BeN] >= 78 && GuYodHj[e2j5mxyW8BeN] <= 81)
                        rrgHdCqP2Xl[e2j5mxyW8BeN] = 3.0 * sq7mVDM[e2j5mxyW8BeN];
                    else {
                        if (GuYodHj[e2j5mxyW8BeN] >= 75 && GuYodHj[e2j5mxyW8BeN] <= 77)
                            rrgHdCqP2Xl[e2j5mxyW8BeN] = 2.7 * sq7mVDM[e2j5mxyW8BeN];
                        else {
                            if (GuYodHj[e2j5mxyW8BeN] >= 72 && GuYodHj[e2j5mxyW8BeN] <= 74)
                                rrgHdCqP2Xl[e2j5mxyW8BeN] = 2.3 * sq7mVDM[e2j5mxyW8BeN];
                            else if (GuYodHj[e2j5mxyW8BeN] >= 68 && GuYodHj[e2j5mxyW8BeN] <= 71)
                                rrgHdCqP2Xl[e2j5mxyW8BeN] = 2.0 * sq7mVDM[e2j5mxyW8BeN];
                            else if (GuYodHj[e2j5mxyW8BeN] >= 64 && GuYodHj[e2j5mxyW8BeN] <= 67)
                                rrgHdCqP2Xl[e2j5mxyW8BeN] = 1.5 * sq7mVDM[e2j5mxyW8BeN];
                            else if (GuYodHj[e2j5mxyW8BeN] >= 60 && GuYodHj[e2j5mxyW8BeN] <= 63)
                                rrgHdCqP2Xl[e2j5mxyW8BeN] = 1.0 * sq7mVDM[e2j5mxyW8BeN];
                            else if (GuYodHj[e2j5mxyW8BeN] < 60)
                                rrgHdCqP2Xl[e2j5mxyW8BeN] = 0;
                        };
                    };
                };
            };
        }
        j9ZRp0VYF6 = j9ZRp0VYF6 + rrgHdCqP2Xl[e2j5mxyW8BeN];
    }
    cRlSr0hU5guM = j9ZRp0VYF6 / P6BZx1a;
    printf ("%.2lf", cRlSr0hU5guM);
    return 0;
}

