int main () {
    int k;
    int ijgZXT;
    int BjcNBMH9zOr;
    int j;
    double  *s;
    free (s);
    scanf ("%d", &k);
    s = (double  *) malloc (sizeof (double ) * k);
    for (BjcNBMH9zOr = 0; k > BjcNBMH9zOr; BjcNBMH9zOr++) {
        double  *mxUfHZ8DWVp;
        double  esoG0Nq = 0;
        double  InRGN0VS;
        InRGN0VS = 0;
        free (mxUfHZ8DWVp);
        scanf ("%d", &ijgZXT);
        mxUfHZ8DWVp = (double  *) malloc (sizeof (double ) * ijgZXT);
        for (j = 0; j < ijgZXT; j++) {
            scanf ("%lf", &mxUfHZ8DWVp[j]);
            esoG0Nq = esoG0Nq + mxUfHZ8DWVp[j];
        }
        esoG0Nq = esoG0Nq / ijgZXT;
        for (j = 0; j < ijgZXT; j++) {
            InRGN0VS = InRGN0VS +(mxUfHZ8DWVp[j] - esoG0Nq) * (mxUfHZ8DWVp[j] - esoG0Nq);
        }
        s[BjcNBMH9zOr] = (sqrt) (InRGN0VS / ijgZXT);
    }
    {
        BjcNBMH9zOr = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (BjcNBMH9zOr < k) {
            printf ("%.5lf\n", s[BjcNBMH9zOr]);
            BjcNBMH9zOr++;
        };
    }
    return 0;
}

