int main () {
    double  s, h;
    float a;
    float b;
    float c;
    float d;
    float e;
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
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
    scanf ("%f", &d);
    scanf ("%f", &e);
    h = (((b + c + d - a) / (602 - 600)) * ((a - b + c + d) / (928 - 926)) * ((a + b - c + d) / (208 - 206)) * ((a + b + c - d) / (156 - 154)) - a * b * c * d * (cos (e * (136.1415926 - 133.0) / (1255 - 895))) * (cos (e * (223.1415926 - 220.0) / (1039 - 679))));
    if ((663 - 663) > h)
        ;
    else {
        s = sqrt (h);
        printf ("%.4f", s);
    };
}

