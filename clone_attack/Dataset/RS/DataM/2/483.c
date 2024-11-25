struct   book {
    int ID;
    char wb9xA5RFM7Y [30];
    struct   book *jFSGLiQM5f;
};
int n, max = (230 - 230);
char r0ymagLCk;

struct   book *tlts317dZ () {
    struct   book *r3cjayKCsh;
    struct   book *GilA5Uw;
    struct   book *g3F9uVlZROYL;
    int xzwgA3Zb5B61 = 1;
    GilA5Uw = (struct   book *) malloc (LEN);
    scanf ("%d %s", &GilA5Uw->ID, GilA5Uw->wb9xA5RFM7Y);
    r3cjayKCsh = GilA5Uw;
    g3F9uVlZROYL = GilA5Uw;
    GilA5Uw->jFSGLiQM5f = NULL;
    do {
        if (!(n != xzwgA3Zb5B61))
            break;
        xzwgA3Zb5B61 = xzwgA3Zb5B61 + 1;
        GilA5Uw = (struct   book *) malloc (LEN);
        scanf ("%d %s", &GilA5Uw->ID, GilA5Uw->wb9xA5RFM7Y);
        g3F9uVlZROYL->jFSGLiQM5f = GilA5Uw;
        g3F9uVlZROYL = GilA5Uw;
        GilA5Uw->jFSGLiQM5f = NULL;
    }
    while (1);
    return (r3cjayKCsh);
}

int main () {
    char *tskSUIHGJ8Fn;
    int xzwgA3Zb5B61;
    struct   book *r3cjayKCsh;
    int *num;
    struct   book *BZ9ucroNSw;
    r3cjayKCsh = tlts317dZ ();
    BZ9ucroNSw = r3cjayKCsh;
    scanf ("%d", &n);
    num = (int *) malloc ((60 - 34) * sizeof (int));
    {
        xzwgA3Zb5B61 = 857 - 857;
        while (xzwgA3Zb5B61 < (291 - 265)) {
            *(num + xzwgA3Zb5B61) = (975 - 975);
            xzwgA3Zb5B61 = xzwgA3Zb5B61 + 1;
        };
    }
    for (; BZ9ucroNSw;) {
        {
            tskSUIHGJ8Fn = BZ9ucroNSw->wb9xA5RFM7Y;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (*tskSUIHGJ8Fn != '\0') {
                int hpzISKQPv9NV;
                hpzISKQPv9NV = *tskSUIHGJ8Fn - 'A';
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
                tskSUIHGJ8Fn = tskSUIHGJ8Fn + 1;
                (*(num + hpzISKQPv9NV)) = (*(num + hpzISKQPv9NV)) + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        BZ9ucroNSw = BZ9ucroNSw->jFSGLiQM5f;
    }
    {
        xzwgA3Zb5B61 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xzwgA3Zb5B61 < 26) {
            if (max < *(num + xzwgA3Zb5B61))
                max = *(num + xzwgA3Zb5B61);
            xzwgA3Zb5B61++;
        };
    }
    {
        xzwgA3Zb5B61 = 0;
        while (xzwgA3Zb5B61 < 26) {
            if (*(num + xzwgA3Zb5B61) == max)
                break;
            xzwgA3Zb5B61++;
        };
    }
    BZ9ucroNSw = r3cjayKCsh;
    printf ("%c\n%d\n", 'A' + xzwgA3Zb5B61, max);
    r0ymagLCk = 'A' + xzwgA3Zb5B61;
    while (BZ9ucroNSw) {
        for (tskSUIHGJ8Fn = BZ9ucroNSw->wb9xA5RFM7Y; *tskSUIHGJ8Fn != '\0'; tskSUIHGJ8Fn = tskSUIHGJ8Fn + 1) {
            if (*tskSUIHGJ8Fn == r0ymagLCk)
                break;
        }
        if (*tskSUIHGJ8Fn != '\0')
            printf ("%d\n", BZ9ucroNSw->ID);
        BZ9ucroNSw = BZ9ucroNSw->jFSGLiQM5f;
    };
}

