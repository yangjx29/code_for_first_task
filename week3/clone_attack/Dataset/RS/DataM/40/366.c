int main (int argc, char *argv []) {
    float a;
    float b;
    float Fr745V908yu;
    float d;
    float e;
    float f;
    float KNoI7jdb;
    float s;
    scanf ("%f %f %f %f %f", &a, &b, &Fr745V908yu, &d, &e);
    if (e >= 180) {
    }
    else {
        f = e / 360 * 3.14159265358979f;
        s = (a + b + Fr745V908yu +d) / 2;
        KNoI7jdb = (float) sqrt ((s - a) * (s - b) * (s - Fr745V908yu) * (s - d) - a * b * Fr745V908yu *d * pow (cos (f), 2));
        printf ("%.4f", KNoI7jdb);
    }
    return 0;
}

