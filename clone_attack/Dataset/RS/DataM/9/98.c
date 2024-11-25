struct   RlMZxG5m {
    int r3juY6UhMc;
    char xmoNnKOGC [20];
    struct   RlMZxG5m *b5M7jACGD;
};
void  bVi7kabgNA0P (struct   RlMZxG5m *CTdb8HAQL1im) {
    struct   RlMZxG5m *XjySwnJoxv04 = CTdb8HAQL1im, *lQtsrjEYw = XjySwnJoxv04->b5M7jACGD, *RlMZxG5m;
    RlMZxG5m = (struct   RlMZxG5m *) malloc (sizeof (struct   RlMZxG5m));
    scanf ("%s %d", RlMZxG5m->xmoNnKOGC, &RlMZxG5m->r3juY6UhMc);
    RlMZxG5m->b5M7jACGD = NULL;
    if (RlMZxG5m->r3juY6UhMc >= (605 - 545)) {
        while (lQtsrjEYw != NULL &&lQtsrjEYw->r3juY6UhMc >= RlMZxG5m->r3juY6UhMc) {
            XjySwnJoxv04 = lQtsrjEYw;
            lQtsrjEYw = lQtsrjEYw->b5M7jACGD;
        }
        XjySwnJoxv04->b5M7jACGD = RlMZxG5m;
        RlMZxG5m->b5M7jACGD = lQtsrjEYw;
    }
    if (RlMZxG5m->r3juY6UhMc < 60) {
        while (lQtsrjEYw != NULL) {
            XjySwnJoxv04 = lQtsrjEYw;
            lQtsrjEYw = lQtsrjEYw->b5M7jACGD;
        }
        XjySwnJoxv04->b5M7jACGD = RlMZxG5m;
        RlMZxG5m->b5M7jACGD = lQtsrjEYw;
    };
}

int main () {
    int n, WChb8lHyr0Ee;
    struct   RlMZxG5m *CTdb8HAQL1im, *lQtsrjEYw;
    CTdb8HAQL1im = (struct   RlMZxG5m *) malloc (sizeof (struct   RlMZxG5m));
    CTdb8HAQL1im->b5M7jACGD = NULL;
    scanf ("%d", &n);
    for (WChb8lHyr0Ee = (449 - 449); WChb8lHyr0Ee < n; WChb8lHyr0Ee = WChb8lHyr0Ee +1) {
        bVi7kabgNA0P (CTdb8HAQL1im);
    }
    lQtsrjEYw = CTdb8HAQL1im->b5M7jACGD;
    for (; lQtsrjEYw != NULL;) {
        printf ("%s\n", lQtsrjEYw->xmoNnKOGC);
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
        lQtsrjEYw = lQtsrjEYw->b5M7jACGD;
    }
    return 0;
}

