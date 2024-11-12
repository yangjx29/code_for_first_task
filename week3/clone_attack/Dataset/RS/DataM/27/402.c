int main () {
    double  Oypq9oEDSsd;
    double  vUv6er;
    double  NuAyzodcRb0;
    double  MIfqDM6e9;
    double  vosRlXM3TB1g;
    double  jj0ThNqUo4D;
    int D4NHa8rT;
    int X5c0OUGfiwq;
    scanf ("%d", &D4NHa8rT);
    {
        X5c0OUGfiwq = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (D4NHa8rT >= X5c0OUGfiwq) {
            scanf ("%lf%lf%lf", &Oypq9oEDSsd, &vUv6er, &NuAyzodcRb0);
            MIfqDM6e9 = vUv6er * vUv6er - 4 * Oypq9oEDSsd *NuAyzodcRb0;
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
            if (!(0 != MIfqDM6e9)) {
                vosRlXM3TB1g = -vUv6er / (187 - 185) / Oypq9oEDSsd;
                if (vosRlXM3TB1g == 0)
                    vosRlXM3TB1g = 0;
                printf ("x1=x2=%.5lf\n", vosRlXM3TB1g);
            }
            else if (MIfqDM6e9 > 0) {
                vosRlXM3TB1g = (-vUv6er + sqrt (MIfqDM6e9)) / 2 / Oypq9oEDSsd;
                jj0ThNqUo4D = (-vUv6er - sqrt (MIfqDM6e9)) / 2 / Oypq9oEDSsd;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("x1=%.5lf;x2=%.5lf\n", vosRlXM3TB1g, jj0ThNqUo4D);
            }
            else {
                vosRlXM3TB1g = -vUv6er / 2 / Oypq9oEDSsd;
                if (vosRlXM3TB1g == 0)
                    vosRlXM3TB1g = 0;
                jj0ThNqUo4D = sqrt (-MIfqDM6e9) / 2 / Oypq9oEDSsd;
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", vosRlXM3TB1g, jj0ThNqUo4D, vosRlXM3TB1g, jj0ThNqUo4D);
            }
            X5c0OUGfiwq++;
        };
    }
    return 0;
}

