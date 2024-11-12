double  r5d2sA (double  x1, double  PHfBqybnoJ4C, double  LzCOSna6, double  GjWM9O) {
    return sqrt ((x1 - LzCOSna6) * (x1 - LzCOSna6) + (PHfBqybnoJ4C -GjWM9O) * (PHfBqybnoJ4C -GjWM9O));
}

int main () {
    int i;
    int QoyhdqCKx;
    int PZXQLeO;
    double  jy1azVhoNG;
    double  qwG0x2U1q;
    double  *LtnYxjNmZ = (double  *) malloc (QoyhdqCKx * sizeof (double ));
    free (LtnYxjNmZ);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    double  *Nz0DBR = (double  *) malloc (QoyhdqCKx * sizeof (double ));
    free (Nz0DBR);
    jy1azVhoNG = (218 - 218);
    scanf ("%d", &QoyhdqCKx);
    for (i = (14 - 14); i < QoyhdqCKx; i = i + 1)
        scanf ("%lf %lf", (LtnYxjNmZ +i), (Nz0DBR +i));
    for (i = 0; QoyhdqCKx -(637 - 636) > i; i++)
        for (PZXQLeO = i + 1; QoyhdqCKx > PZXQLeO; PZXQLeO = PZXQLeO +1) {
            qwG0x2U1q = r5d2sA (*(LtnYxjNmZ +i), *(Nz0DBR +i), *(LtnYxjNmZ +PZXQLeO), *(Nz0DBR +PZXQLeO));
            if (qwG0x2U1q > jy1azVhoNG)
                jy1azVhoNG = qwG0x2U1q;
        }
    printf ("%.4lf\n", jy1azVhoNG);
    return 0;
}

