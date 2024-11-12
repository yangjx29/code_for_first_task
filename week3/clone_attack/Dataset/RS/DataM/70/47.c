int main () {
    int gdYCMEzrf9hS;
    int Li0v9R;
    int t;
    double  f;
    double  vo4qWEp [(668 - 568)] [100];
    f = (293.0 - 293.0);
    struct   S {
        double  IsMRc7CezqVy, gDjQE7k5;
    }
    YjrvKWnPasiX [1000];
    scanf ("%d", &Li0v9R);
    {
        gdYCMEzrf9hS = 40 - 40;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gdYCMEzrf9hS < Li0v9R) {
            scanf ("%lf%lf", &YjrvKWnPasiX[gdYCMEzrf9hS].IsMRc7CezqVy, &YjrvKWnPasiX[gdYCMEzrf9hS].gDjQE7k5);
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
            gdYCMEzrf9hS = gdYCMEzrf9hS + 1;
        };
    }
    {
        gdYCMEzrf9hS = 0;
        while (gdYCMEzrf9hS < Li0v9R) {
            {
                t = 0;
                while (Li0v9R > t) {
                    vo4qWEp[gdYCMEzrf9hS][t] = sqrt ((YjrvKWnPasiX[gdYCMEzrf9hS].IsMRc7CezqVy - YjrvKWnPasiX[t].IsMRc7CezqVy) * (YjrvKWnPasiX[gdYCMEzrf9hS].IsMRc7CezqVy - YjrvKWnPasiX[t].IsMRc7CezqVy) + (YjrvKWnPasiX[gdYCMEzrf9hS].gDjQE7k5 - YjrvKWnPasiX[t].gDjQE7k5) * (YjrvKWnPasiX[gdYCMEzrf9hS].gDjQE7k5 - YjrvKWnPasiX[t].gDjQE7k5));
                    if (vo4qWEp[gdYCMEzrf9hS][t] >= f)
                        f = vo4qWEp[gdYCMEzrf9hS][t];
                    t = t + 1;
                };
            }
            gdYCMEzrf9hS++;
        };
    }
    printf ("%.4lf", f);
    return 0;
}

