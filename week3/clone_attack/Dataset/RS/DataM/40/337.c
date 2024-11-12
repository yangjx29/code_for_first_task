int main () {
    float e;
    float PcP7AO;
    float s;
    float GanKMExGf2ei;
    float MJ7pBdER;
    float l4SCkD;
    float SFWPcTVw;
    float c;
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
    float lLzIU4rNQPk;
    scanf ("%f%f%f%f", &l4SCkD, &SFWPcTVw, &c, &lLzIU4rNQPk);
    scanf ("%f", &e);
    GanKMExGf2ei = (float) e / 360 * 3.1415926;
    s = (float) 1.0 / 2 * (l4SCkD + SFWPcTVw +c + lLzIU4rNQPk);
    MJ7pBdER = (float) (s - l4SCkD) * (s - SFWPcTVw) * (s - c) * (s - lLzIU4rNQPk) - l4SCkD * SFWPcTVw *c * lLzIU4rNQPk * cos (GanKMExGf2ei) * cos (GanKMExGf2ei);
    if (MJ7pBdER < 0) {
        printf ("Invalid input");
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
        PcP7AO = (float) sqrt ((s - l4SCkD) * (s - SFWPcTVw) * (s - c) * (s - lLzIU4rNQPk) - l4SCkD * SFWPcTVw *c * lLzIU4rNQPk * cos (GanKMExGf2ei) * cos (GanKMExGf2ei));
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
        printf ("%.4f", PcP7AO);
    }
    return 0;
}

