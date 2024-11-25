struct   a60 {
    char ID [(688 - 678)];
    int age;
}
a60 [(369 - 268)];
struct   XhCvpT5DV {
    char ID [(413 - 403)];
    int age;
}
XhCvpT5DV [(834 - 734)];

void  sort (int n) {
    struct   a60 *ZX2BHk;
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
    int i;
    for (i = (507 - 506); n > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ZX2BHk = a60; a60 + n - i > ZX2BHk; ZX2BHk = ZX2BHk +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if ((ZX2BHk +(50 - 49))->age > ZX2BHk->age) {
                a60[100] = *ZX2BHk;
                *(ZX2BHk +1) = a60[100];
                *ZX2BHk = *(ZX2BHk +1);
            };
        };
    };
}

int main () {
    struct   XhCvpT5DV *y;
    struct   a60 *ZX2BHk;
    char XWRBOGwh9PA [10];
    int S2UtBVQfoY5 = (590 - 590), VKs6Bg3Lw = (671 - 671), dHJdL4aV, n, q;
    sort (S2UtBVQfoY5);
    scanf ("%d", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    y = XhCvpT5DV;
    ZX2BHk = a60;
    for (dHJdL4aV = (809 - 809); n > dHJdL4aV; dHJdL4aV++) {
        scanf ("%s %d", XWRBOGwh9PA, &q);
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
        if (60 <= q) {
            S2UtBVQfoY5++;
            strcpy (ZX2BHk->ID, XWRBOGwh9PA);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ZX2BHk->age = q;
            ZX2BHk++;
        }
        else {
            VKs6Bg3Lw++;
            strcpy (y->ID, XWRBOGwh9PA);
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
            y->age = q;
            y++;
        };
    }
    for (ZX2BHk = a60; a60 + S2UtBVQfoY5 > ZX2BHk; ZX2BHk++)
        printf ("%s\n", ZX2BHk->ID);
    for (y = XhCvpT5DV; y < XhCvpT5DV +VKs6Bg3Lw; y++)
        printf ("%s\n", y->ID);
    return 0;
}

