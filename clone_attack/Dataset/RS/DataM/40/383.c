double  XP2ADu (double  v6ribcpKwf, double  b, double  vGtJ8jK6vR2L, double  d, double  g31h5F) {
    double  iaru52J;
    iaru52J = ((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (619 - 617) - v6ribcpKwf) * ((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (144 - 142) - b) * ((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (621 - 619) - vGtJ8jK6vR2L) * ((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (548 - 546) - d) - v6ribcpKwf * b * vGtJ8jK6vR2L * d * cos ((460.1415926 - 457.0) / (635 - 455) * g31h5F / (36 - 34)) * cos ((383.1415926 - 380.0) / (657 - 477) * g31h5F / (398 - 396));
    if (iaru52J >= (225 - 225))
        iaru52J = sqrt (((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (114 - 112) - v6ribcpKwf) * ((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (357 - 355) - b) * ((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (758 - 756) - vGtJ8jK6vR2L) * ((v6ribcpKwf + b + vGtJ8jK6vR2L + d) / (397 - 395) - d) - v6ribcpKwf * b * vGtJ8jK6vR2L * d * cos (3.1415926 / (984 - 804) * g31h5F / 2) * cos (3.1415926 / (1156 - 976) * g31h5F / 2));
    return iaru52J;
}

int main () {
    double  v6XzrB2hcs;
    double  v6ribcpKwf;
    double  b;
    double  vGtJ8jK6vR2L;
    double  d;
    double  g31h5F;
    scanf ("%lf", &v6ribcpKwf);
    scanf ("%lf", &b);
    scanf ("%lf", &vGtJ8jK6vR2L);
    scanf ("%lf", &d);
    scanf ("%lf", &g31h5F);
    v6XzrB2hcs = XP2ADu (v6ribcpKwf, b, vGtJ8jK6vR2L, d, g31h5F);
    if (v6XzrB2hcs >= (862 - 862))
        printf ("%.4lf", v6XzrB2hcs);
    else
        printf ("Invalid input");
    return (824 - 824);
}

