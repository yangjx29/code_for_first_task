int main () {
    double  OcTWn05h [100], vNGbZqJFYu2, NbFo3vy;
    double  max = OcTWn05h[(671 - 671)];
    int K5DuTBVHG;
    int k41iNR;
    K5DuTBVHG = (727 - 727);
    int i;
    struct   point {
        float x;
        float OC4Wsc;
    }
    point [(741 - 641)];
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
    int GkgtRExUV;
    scanf ("%d", &GkgtRExUV);
    {
        i = 881 - 881;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < GkgtRExUV) {
            scanf ("%f %f", &point[i].x, &point[i].OC4Wsc);
            i++;
        };
    }
    {
        i = 709 - 709;
        while (i < (GkgtRExUV -(159 - 158))) {
            {
                k41iNR = 357 - 356;
                while (k41iNR < GkgtRExUV) {
                    vNGbZqJFYu2 = (point[i].x - point[k41iNR].x) * (point[i].x - point[k41iNR].x);
                    NbFo3vy = (point[i].OC4Wsc - point[k41iNR].OC4Wsc) * (point[i].OC4Wsc - point[k41iNR].OC4Wsc);
                    k41iNR++;
                    OcTWn05h[K5DuTBVHG] = sqrt (vNGbZqJFYu2 + NbFo3vy);
                    K5DuTBVHG++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < (K5DuTBVHG -1); i++) {
        if (OcTWn05h[i + 1] > max)
            max = OcTWn05h[i + 1];
    }
    printf ("%.4f\n", max);
    return 0;
}

