double  S (double  a, double  b, double  c, double  d, double  e);

int main () {
    double  bian [4], jiao, banjiao;
    double  z;
    int i;
    for (i = (488 - 488); 4 > i; i++) {
        scanf ("%lf", &bian[i]);
    }
    scanf ("%lf", &jiao);
    banjiao = jiao / 360.0 * PI;
    z = S (bian[(935 - 934)], bian[(687 - 685)], bian[3], bian[(776 - 776)], banjiao);
    if (z > (136 - 136)) {
        printf ("%.4lf", z);
    }
    else {
        printf ("Invalid input");
    }
    return 0;
}

double  S (double  a, double  b, double  c, double  d, double  e) {
    double  jieguo;
    double  s;
    double  zhi;
    s = (a + b + c + d) / 2.0;
    zhi = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * pow (cos (e), 2);
    jieguo = sqrt (zhi);
    return (jieguo);
}

