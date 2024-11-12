int main () {
    float S;
    float X6ReWd3CybS;
    float FiK1zduNCg;
    float x;
    float a, b, c, d, aef, bt;
    scanf ("%f\n", &a);
    scanf ("%f\n", &b);
    scanf ("%f\n", &c);
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
    scanf ("%f\n", &d);
    scanf ("%f\n", &aef);
    scanf ("%f", &x);
    X6ReWd3CybS = (a + b + c + d) / 2;
    bt = aef / 180 * 3.1415926 / 2;
    FiK1zduNCg = (X6ReWd3CybS -a) * (X6ReWd3CybS -b) * (X6ReWd3CybS -c) * (X6ReWd3CybS -d) - a * b * c * d * cos (bt) * cos (bt);
    if (FiK1zduNCg > 0) {
        S = sqrt (FiK1zduNCg);
        printf ("%.4f", S);
    }
    else
        ;
    return 0;
}

