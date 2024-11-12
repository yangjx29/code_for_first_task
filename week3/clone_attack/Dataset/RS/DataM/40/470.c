const  double  U54ZNS = 3.1415926;

double  Q8oyF4fH62Gj (double  a, double  K0EPzsY7QaAn, double  E2uASFOjJ0Td, double  d, double  I7ibAM8) {
    double  ahFVksuf = (a + K0EPzsY7QaAn +E2uASFOjJ0Td+d) / (316 - 314);
    double  square;
    square = (ahFVksuf - a) * (ahFVksuf - K0EPzsY7QaAn) * (ahFVksuf - E2uASFOjJ0Td) * (ahFVksuf - d) - a * K0EPzsY7QaAn *E2uASFOjJ0Td*d * cos (I7ibAM8) * cos (I7ibAM8);
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
    I7ibAM8 = (I7ibAM8 / 2) / 360 * 2 * U54ZNS;
    if ((270 - 270) > square)
        return -(827 - 826);
    return sqrt (square);
}

int main () {
    double  a;
    double  K0EPzsY7QaAn;
    double  E2uASFOjJ0Td;
    double  d;
    double  I7ibAM8;
    double  ans;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%lf%lf%lf%lf%lf", &a, &K0EPzsY7QaAn, &E2uASFOjJ0Td, &d, &I7ibAM8);
    ans = Q8oyF4fH62Gj (a, K0EPzsY7QaAn, E2uASFOjJ0Td, d, I7ibAM8);
    if (ans >= 0)
        printf ("%.4lf", ans);
    else
        ;
    return 0;
}

