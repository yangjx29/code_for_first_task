int main () {
    int i;
    int lQHnOtz;
    int AFrAQ8ysi;
    int UIUsHx;
    int TmR9MdaJkP;
    int kGLjXf [100];
    int s [100];
    int oLYxEQH4C [100];
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
    i = 1;
    lQHnOtz = 2;
    scanf ("%d", &UIUsHx);
    s[0] = 1;
    for (int IuRFxB6X8Dp = 1;
    IuRFxB6X8Dp <= 90; IuRFxB6X8Dp = IuRFxB6X8Dp +1) {
        s[IuRFxB6X8Dp] = i;
        TmR9MdaJkP = lQHnOtz;
        lQHnOtz = i + lQHnOtz;
        i = TmR9MdaJkP;
    }
    for (int r = 0;
    r <= UIUsHx -1; r = r + 1) {
        scanf ("%d", &kGLjXf[r]);
        oLYxEQH4C[r] = s[kGLjXf[r] - 1];
    }
    for (int y = 0;
    y <= UIUsHx -1; y = y + 1) {
        printf ("%d\n", oLYxEQH4C[y]);
    }
    return 0;
}

