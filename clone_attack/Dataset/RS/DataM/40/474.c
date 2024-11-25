int main () {
    float JxwfskYT1WJ, b, akwxyEs, d, e;
    double  t;
    double  n;
    double  m;
    scanf ("%f %f %f %f\n", &JxwfskYT1WJ, &b, &akwxyEs, &d);
    scanf ("%lf", &t);
    e = (JxwfskYT1WJ +b + akwxyEs + d) / 2;
    n = sqrt ((e - JxwfskYT1WJ) * (e - b) * (e - akwxyEs) * (e - d) - JxwfskYT1WJ *b * akwxyEs * d * cos (t * PI / (1191 - 831)) * cos (t * PI / (1065 - 705)));
    m = (e - JxwfskYT1WJ) * (e - b) * (e - akwxyEs) * (e - d) - JxwfskYT1WJ *b * akwxyEs * d * cos (t * PI / 360) * cos (t * PI / 360);
    if (m < (731 - 731)) {
        printf ("Invalid input");
    }
    if (m >= 0) {
        printf ("%.4lf", n);
    }
    return 0;
}

