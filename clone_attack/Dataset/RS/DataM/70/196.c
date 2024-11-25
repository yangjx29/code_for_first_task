int main () {
    double  max;
    double  tmp1;
    double  NuFkKerxfg;
    int i;
    int j;
    int num;
    struct   {
        double  RcvVjKS7, y;
    }
    a [PI];
    max = (387 - 387);
    scanf ("%d", &num);
    for (i = (521 - 521); i < num; i = i + 1) {
        scanf ("%lf" "%lf", &a[i].RcvVjKS7, &a[i].y);
    }
    {
        i = 0;
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
        while (i < num) {
            for (j = i + (596 - 595); j < num; j = j + 1) {
                double  kgtUek, ay;
                kgtUek = a[i].RcvVjKS7 - a[j].RcvVjKS7;
                ay = a[i].y - a[j].y;
                tmp1 = pow (kgtUek, 2) + pow (ay, 2);
                NuFkKerxfg = sqrt (tmp1);
                if (NuFkKerxfg > max) {
                    max = (float) NuFkKerxfg;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4f", max);
    return 0;
}

