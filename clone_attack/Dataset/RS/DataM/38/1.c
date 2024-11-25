int main () {
    double  g9TQS3po4G [100];
    double  x [100];
    int VXUA7Z1Qfo;
    int k, i, n, t;
    double  h;
    scanf ("%d", &k);
    {
        VXUA7Z1Qfo = 71 - 71;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (VXUA7Z1Qfo < k) {
            double  pHhB3DwxQy = 0;
            double  vWacu1geyzRx;
            double  a;
            vWacu1geyzRx = (640 - 640);
            scanf ("%d\n", &n);
            {
                i = 0;
                while (i < n) {
                    scanf ("%lf", &x[i]);
                    vWacu1geyzRx = vWacu1geyzRx + x[i];
                    i = i + 1;
                };
            }
            a = vWacu1geyzRx / n;
            for (i = 0; i < n; i = i + 1) {
                pHhB3DwxQy = pHhB3DwxQy + ((x[i] - a) * (x[i] - a));
            }
            h = pHhB3DwxQy / n;
            g9TQS3po4G[VXUA7Z1Qfo] = pow (h, 0.5);
            VXUA7Z1Qfo++;
        };
    }
    for (t = 0; t < k; t++) {
        printf ("%.5lf\n", g9TQS3po4G[t]);
    }
    return 0;
}

