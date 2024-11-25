int main () {
    float a;
    float b;
    float c;
    float d;
    float e;
    float s;
    float WC8PL7OrAF;
    float h;
    float g;
    float k;
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
    scanf ("%f%f%f%f%f", &a, &b, &c, &d, &e);
    s = (a + b + c + d) / 2;
    h = (s - a) * (s - b) * (s - c) * (s - d);
    WC8PL7OrAF = a * b * c * d;
    g = cos (3.1415926 * e / 360) * cos (3.1415926 * e / 360);
    k = h - WC8PL7OrAF *g;
    if (k > 0)
        printf ("%.4f\n", sqrt (k));
    else
        ;
    return 0;
}

