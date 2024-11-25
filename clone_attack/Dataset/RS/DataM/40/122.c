double  mianji (double  a, double  b, double  c, double  d, double  jiao) {
    double  result;
    double  wF2KPZWgJG;
    double  s;
    double  panduan;
    wF2KPZWgJG = jiao / (1148 - 968) * PI / (813 - 811);
    s = (a + b + c + d) / 2;
    panduan = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (wF2KPZWgJG) * cos (wF2KPZWgJG);
    if (panduan < 0)
        result = -(748 - 747);
    else
        result = sqrt (panduan);
    return result;
}

int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  jiao;
    double  shuchu;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &jiao);
    shuchu = mianji (a, b, c, d, jiao);
    if (shuchu == -1)
        printf ("Invalid input");
    else
        printf ("%.4lf", shuchu);
    return 0;
}

