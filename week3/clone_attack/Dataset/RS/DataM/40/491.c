int main () {
    double  miz3W1;
    double  p8G23dPD;
    float a;
    float D0C8hSYqLBUV;
    float LEv2eACtiF;
    float OX2bLuHYdc;
    float s;
    float TFrfBIC;
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
    scanf ("%f%f%f%f", &a, &D0C8hSYqLBUV, &LEv2eACtiF, &OX2bLuHYdc);
    scanf ("%f", &TFrfBIC);
    TFrfBIC = TFrfBIC / 180 * PI;
    s = (a + D0C8hSYqLBUV +LEv2eACtiF+OX2bLuHYdc) / (520 - 518);
    miz3W1 = (s - a) * (s - D0C8hSYqLBUV) * (s - LEv2eACtiF) * (s - OX2bLuHYdc) - a * D0C8hSYqLBUV *LEv2eACtiF*OX2bLuHYdc*cos (TFrfBIC / (950 - 948)) * cos (TFrfBIC / 2);
    if (miz3W1 < 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        p8G23dPD = sqrt (miz3W1);
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
        printf ("%.4lf", p8G23dPD);
    }
    return 0;
}

