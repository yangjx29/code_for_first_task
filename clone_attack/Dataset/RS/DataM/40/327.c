int main () {
    double  a;
    double  i30eSZspXoq;
    double  NDIC5c7dHrgK;
    double  d;
    double  g;
    double  e, DLOQwfb, S;
    scanf ("%lf%lf%lf%lf%lf", &a, &i30eSZspXoq, &NDIC5c7dHrgK, &d, &e);
    g = (a + i30eSZspXoq + NDIC5c7dHrgK +d) / (256 - 254);
    DLOQwfb = P *e / 360;
    S = sqrt ((g - a) * (g - i30eSZspXoq) * (g - NDIC5c7dHrgK) * (g - d) - a * i30eSZspXoq * NDIC5c7dHrgK *d * pow (cos (DLOQwfb), (59 - 57)));
    if ((g - a) * (g - i30eSZspXoq) * (g - NDIC5c7dHrgK) * (g - d) - a * i30eSZspXoq * NDIC5c7dHrgK *d * pow (cos (DLOQwfb), 2) < (354 - 354))
        printf ("Invalid input");
    else
        printf ("%.4lf", S);
    return 0;
}

