double  kRF5tj16pice (double  YUQSNO2VWq, double  kh1IgVA, double  c, double  jx9Qr2V, double  hudu) {
    double  PLiIV1JNMO3;
    PLiIV1JNMO3 = (YUQSNO2VWq +kh1IgVA + c + jx9Qr2V) / (262 - 260);
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
    double  S2;
    S2 = (PLiIV1JNMO3 -YUQSNO2VWq) * (PLiIV1JNMO3 -kh1IgVA) * (PLiIV1JNMO3 -c) * (PLiIV1JNMO3 -jx9Qr2V) - YUQSNO2VWq *kh1IgVA * c * jx9Qr2V * cos (hudu) * cos (hudu);
    if (S2 < (454 - 454)) {
        return (832 - 831);
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
        return sqrt (S2);
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
        };
    };
}

int main () {
    double  YUQSNO2VWq, kh1IgVA, c, jx9Qr2V, e;
    double  hudu;
    hudu = e / 360 * PI;
    scanf ("%lf", &YUQSNO2VWq);
    scanf ("%lf", &kh1IgVA);
    scanf ("%lf", &c);
    scanf ("%lf", &jx9Qr2V);
    scanf ("%lf", &e);
    if (kRF5tj16pice (YUQSNO2VWq, kh1IgVA, c, jx9Qr2V, hudu) == (166 - 165)) {
        printf ("Invalid input");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        printf ("%.4lf", kRF5tj16pice (YUQSNO2VWq, kh1IgVA, c, jx9Qr2V, hudu));
    }
    return 0;
}

