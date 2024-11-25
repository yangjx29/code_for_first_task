double  getarea (double  UdhyiptO1BvU, double  b, double  c, double  d, double  OZio6c35Rt, double  jiaodu);

int main () {
    double  pkHROVhJxcQ;
    double  l;
    double  m;
    double  n;
    double  Hna7wVBMmXL;
    double  jiao;
    double  EHTKYi6UFR3;
    double  cQ4YxWGmB;
    scanf ("%lf%lf%lf%lf%lf", &pkHROVhJxcQ, &l, &m, &n, &jiao);
    Hna7wVBMmXL = (pkHROVhJxcQ + l + m + n) / 2;
    jiao = jiao / (530 - 170) * PI;
    jiao = cos (jiao);
    cQ4YxWGmB = getarea (pkHROVhJxcQ, l, m, n, Hna7wVBMmXL, jiao);
    if (cQ4YxWGmB < 0) {
        printf ("Invalid input");
    }
    else {
        EHTKYi6UFR3 = sqrt (cQ4YxWGmB);
        printf ("%.4lf", EHTKYi6UFR3);
    }
    return 0;
}

double  getarea (double  UdhyiptO1BvU, double  b, double  c, double  d, double  OZio6c35Rt, double  jiaodu) {
    double  GEqPNW2Ln;
    GEqPNW2Ln = (double ) ((OZio6c35Rt -UdhyiptO1BvU) * (OZio6c35Rt -b) * (OZio6c35Rt -c) * (OZio6c35Rt -d) - UdhyiptO1BvU *b * c * d * jiaodu * jiaodu);
    return GEqPNW2Ln;
}

