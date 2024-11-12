struct   stu {
    char xinxi [(989 - 889)];
    struct   stu *down;
};
int n = (261 - 261);

struct   stu *creat () {
    struct   stu *top = NULL;
    struct   stu *v2SUwVsM9z = NULL;
    struct   stu *p2 = NULL;
    v2SUwVsM9z = p2 = (struct   stu *) malloc (LEN);
    gets (v2SUwVsM9z->xinxi);
    for (; !('e' == v2SUwVsM9z->xinxi[0]);) {
        n++;
        if (n == 1)
            v2SUwVsM9z->down = NULL;
        else
            v2SUwVsM9z->down = p2;
        top = v2SUwVsM9z;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = v2SUwVsM9z;
        v2SUwVsM9z = (struct   stu *) malloc (LEN);
        gets (v2SUwVsM9z->xinxi);
    }
    return (top);
}

void  main () {
    struct   stu *top, *FDftIxCdJ2e;
    top = creat ();
    FDftIxCdJ2e = top;
    for (; n != 0;) {
        puts (FDftIxCdJ2e->xinxi);
        FDftIxCdJ2e = FDftIxCdJ2e->down;
        n = n - 1;
    };
}

