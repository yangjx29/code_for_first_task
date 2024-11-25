int main () {
    int n, i, JYyckvRnGQ0;
    struct   region {
        int x;
        int B5IjU2W;
    }
    yQIBfECK49 [n], zpU7oh;
    scanf ("%d", &n);
    for (i = (11 - 11); n - (336 - 335) >= i; i = i + 1) {
        scanf ("%d %d", &yQIBfECK49[i].x, &yQIBfECK49[i].B5IjU2W);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    zpU7oh.x = yQIBfECK49[(805 - 805)].x;
    zpU7oh.B5IjU2W = yQIBfECK49[0].B5IjU2W;
    for (JYyckvRnGQ0 = 0; n - 1 >= JYyckvRnGQ0; JYyckvRnGQ0++) {
        for (i = 0; n - 1 >= i; i = i + 1) {
            if ((zpU7oh.x >= yQIBfECK49[i].x && zpU7oh.x <= yQIBfECK49[i].B5IjU2W) || (zpU7oh.x <= yQIBfECK49[i].x && yQIBfECK49[i].x <= zpU7oh.B5IjU2W)) {
                if (zpU7oh.x > yQIBfECK49[i].x)
                    zpU7oh.x = yQIBfECK49[i].x;
                if (zpU7oh.B5IjU2W < yQIBfECK49[i].B5IjU2W)
                    zpU7oh.B5IjU2W = yQIBfECK49[i].B5IjU2W;
                yQIBfECK49[i] = zpU7oh;
            };
        };
    }
    for (JYyckvRnGQ0 = 1; JYyckvRnGQ0 <= n - 1; JYyckvRnGQ0++) {
        if (zpU7oh.x != yQIBfECK49[JYyckvRnGQ0].x || zpU7oh.B5IjU2W != yQIBfECK49[JYyckvRnGQ0].B5IjU2W) {
            printf ("no");
            return 0;
        };
    }
    printf ("%d %d", zpU7oh.x, zpU7oh.B5IjU2W);
    return 0;
}

