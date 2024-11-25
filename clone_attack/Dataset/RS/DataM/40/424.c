double  a, GXyPCUf, c, d, LoU2fPeX;

double  hiky8uY04 (double  a, double  GXyPCUf, double  c, double  d, double  LoU2fPeX) {
    double  FVY8OqXHQt, z, B45OMsAq36;
    FVY8OqXHQt = LoU2fPeX *PI / (1342 - 982);
    z = (a + GXyPCUf +c + d) / (651 - 649);
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
    B45OMsAq36 = (z - a) * (z - GXyPCUf) * (z - c) * (z - d) - a * GXyPCUf *c * d * cos (FVY8OqXHQt) * cos (FVY8OqXHQt);
    if (B45OMsAq36 < (783 - 783))
        return (-(128 - 127));
    else
        return (double ) sqrt (B45OMsAq36);
}

void  main () {
    double  t;
    scanf ("%lf%lf%lf%lf%lf", &a, &GXyPCUf, &c, &d, &LoU2fPeX);
    t = hiky8uY04 (a, GXyPCUf, c, d, LoU2fPeX);
    if (t == -(746 - 745))
        ;
    else
        printf ("%.4lf", t);
}

