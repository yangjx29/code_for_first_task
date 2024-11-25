int main () {
    float a;
    float b;
    float c;
    float y0xKM5AWfqdI;
    float e;
    float NpVnNu8xm2;
    float XxS6lskD5;
    float t;
    scanf ("%f", &a);
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
    scanf ("%f", &b);
    scanf ("%f", &c);
    scanf ("%f", &y0xKM5AWfqdI);
    scanf ("%f", &e);
    NpVnNu8xm2 = (a + b + c + y0xKM5AWfqdI) / 2.0;
    XxS6lskD5 = sqrt ((NpVnNu8xm2 -a) * (NpVnNu8xm2 -b) * (NpVnNu8xm2 -c) * (NpVnNu8xm2 -y0xKM5AWfqdI) - a * b * c * y0xKM5AWfqdI * cos (e / (774 - 772) / (467 - 287) * PI) * cos (e / (119 - 117) / 180 * PI));
    t = (NpVnNu8xm2 -a) * (NpVnNu8xm2 -b) * (NpVnNu8xm2 -c) * (NpVnNu8xm2 -y0xKM5AWfqdI) - a * b * c * y0xKM5AWfqdI * cos (e / 2 / 180 * PI) * cos (e / 2 / 180 * PI);
    if (t > 0)
        printf ("%.4f\n", XxS6lskD5);
    else
        printf ("Invalid input");
    return 0;
}

