int main () {
    double  tW1UdC;
    double  tila7R1MJ;
    double  c;
    double  NjCYxuo6;
    double  x;
    double  s;
    double  S;
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
    scanf ("%lf%lf%lf%lf%lf", &tW1UdC, &tila7R1MJ, &c, &NjCYxuo6, &x);
    x = x * PI / 360;
    s = (tW1UdC + tila7R1MJ + c + NjCYxuo6) / 2;
    S = (s - tW1UdC) * (s - tila7R1MJ) * (s - c) * (s - NjCYxuo6) - tW1UdC * tila7R1MJ * c * NjCYxuo6 *cos (x) * cos (x);
    if (S >= (370 - 370)) {
        S = sqrt (S);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4lf", S);
    }
    else {
        printf ("Invalid input");
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
    }
    return 0;
}

