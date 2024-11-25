int main () {
    double  *Q0x61Y4y2m;
    double  *J4DOMNUG;
    free (J4DOMNUG);
    free (Q0x61Y4y2m);
    double  qkjvgqtIcVo;
    double  egUwP5cf;
    qkjvgqtIcVo = 0;
    egUwP5cf = 0;
    int n;
    int uZegIjU;
    int I8v7XmoREywY;
    scanf ("%d", &n);
    J4DOMNUG = (double  *) malloc (sizeof (double ) * n);
    Q0x61Y4y2m = (double  *) malloc (sizeof (double ) * n);
    {
        uZegIjU = 0;
        while (uZegIjU < n) {
            scanf ("%lf%lf", &J4DOMNUG[uZegIjU], &Q0x61Y4y2m[uZegIjU]);
            uZegIjU++;
        };
    }
    for (uZegIjU = 0; uZegIjU < n; uZegIjU = uZegIjU + 1) {
        for (I8v7XmoREywY = uZegIjU + 1; I8v7XmoREywY < n; I8v7XmoREywY++) {
            qkjvgqtIcVo = sqrt ((J4DOMNUG[uZegIjU] - J4DOMNUG[I8v7XmoREywY]) * (J4DOMNUG[uZegIjU] - J4DOMNUG[I8v7XmoREywY]) + (Q0x61Y4y2m[uZegIjU] - Q0x61Y4y2m[I8v7XmoREywY]) * (Q0x61Y4y2m[uZegIjU] - Q0x61Y4y2m[I8v7XmoREywY]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (qkjvgqtIcVo > egUwP5cf) {
                egUwP5cf = qkjvgqtIcVo;
            };
        };
    }
    printf ("%.4lf\n", egUwP5cf);
    return 0;
}

