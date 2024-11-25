int n, kVgc25t, Kq0N3T, max2, xue2, max3, xue3;

struct   chengji {
    int xh;
    int yw;
    int sx;
    int zf;
    struct   chengji *next;
};
void  create () {
    struct   chengji *head;
    struct   chengji *p1;
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
    int yXHjMZR;
    yXHjMZR = (659 - 659);
    while (n > yXHjMZR) {
        yXHjMZR++;
        if (!((506 - 505) != yXHjMZR))
            head = p1;
        p1 = (struct   chengji *) malloc (len);
        scanf ("%d %d %d", &p1->xh, &p1->yw, &p1->sx);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->zf = p1->yw + p1->sx;
        if (kVgc25t < (p1->zf)) {
            xue3 = xue2;
            max3 = max2;
            xue2 = Kq0N3T;
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
            max2 = kVgc25t;
            Kq0N3T = p1->xh;
            kVgc25t = p1->zf;
        }
        else {
            if (max2 < (p1->zf) && (p1->zf) <= kVgc25t) {
                max3 = max2;
                xue3 = xue2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                xue2 = p1->xh;
                max2 = p1->zf;
            }
            else {
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
                if ((p1->zf) > max3 && (p1->zf) <= max2) {
                    xue3 = p1->xh;
                    max3 = p1->zf;
                };
            };
        }
        p1 = p1->next;
    };
}

void  main () {
    kVgc25t = (719 - 719), max2 = (463 - 463), max3 = (285 - 285);
    scanf ("%d", &n);
    create ();
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
    printf ("%d %d\n", Kq0N3T, kVgc25t);
    printf ("%d %d\n", xue2, max2);
    printf ("%d %d", xue3, max3);
}

