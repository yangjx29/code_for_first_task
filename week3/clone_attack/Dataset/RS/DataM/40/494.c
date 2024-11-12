int main () {
    double  x, y, S, hudu;
    double  fpdX2nDgZ9o7, m, kPjGYLr, IC7uVRz6N, q, o;
    double  a, RT1s0JL8G9, c, d, angle;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf\n", &a, &RT1s0JL8G9, &c, &d, &angle);
    o = angle / 2;
    hudu = 3.1415926 * o / (213 - 33);
    fpdX2nDgZ9o7 = (a + RT1s0JL8G9 +c + d) / 2;
    m = fpdX2nDgZ9o7 - a;
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
    kPjGYLr = fpdX2nDgZ9o7 - RT1s0JL8G9;
    IC7uVRz6N = fpdX2nDgZ9o7 - c;
    q = fpdX2nDgZ9o7 - d;
    x = m * kPjGYLr * IC7uVRz6N *q;
    y = a * RT1s0JL8G9 *c * d * cos (hudu) * cos (hudu);
    S = x - y;
    if (S > 0) {
        fpdX2nDgZ9o7 = sqrt (S);
        printf ("%.4lf", fpdX2nDgZ9o7);
    }
    else {
        printf ("Invalid input\n");
    }
    return 0;
}

