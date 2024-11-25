int main () {
    int NPKHo1pWX0w [300] [300];
    char wRI68q [300], s2 [300];
    int GhEyiAT;
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
    int cXrZSkgVzuv;
    int FPgCuaDfFB;
    int i;
    for (; !(EOF == scanf ("%s%s", wRI68q, s2));) {
        cXrZSkgVzuv = 0;
        GhEyiAT = strlen (wRI68q);
        FPgCuaDfFB = 0;
        for (i = 0; i < GhEyiAT; i++)
            if (cXrZSkgVzuv < wRI68q[i]) {
                cXrZSkgVzuv = wRI68q[i];
                FPgCuaDfFB = i;
            }
        for (i = 0; i < GhEyiAT; i++) {
            printf ("%c", wRI68q[i]);
            if (FPgCuaDfFB == i)
                printf ("%s", s2);
        };
    };
}

