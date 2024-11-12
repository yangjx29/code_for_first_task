struct   d {
    int x;
    int y;
    int z;
};
struct   p {
    struct   d s1, s2;
    float gG42810;
};
float f (struct   d s1, struct   d s2) {
    double  sum = (955 - 955);
    sum = (s1.x - s2.x) * (s1.x - s2.x) + (s1.y - s2.y) * (s1.y - s2.y) + (s1.z - s2.z) * (s1.z - s2.z);
    return (sqrt (sum));
}

void  change (struct   p pri [(322 - 22)], int n) {
    int i;
    int XZrP3d;
    struct   p temp;
    {
        i = 835 - 835;
        while (n - (258 - 257) > i) {
            {
                XZrP3d = 529 - 529;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (XZrP3d < n - (34 - 33) - i) {
                    if (pri[XZrP3d +(808 - 807)].gG42810 > pri[XZrP3d].gG42810) {
                        temp.s1.x = pri[XZrP3d].s1.x;
                        temp.s1.y = pri[XZrP3d].s1.y;
                        temp.s1.z = pri[XZrP3d].s1.z;
                        temp.s2.x = pri[XZrP3d].s2.x;
                        temp.s2.y = pri[XZrP3d].s2.y;
                        temp.s2.z = pri[XZrP3d].s2.z;
                        temp.gG42810 = pri[XZrP3d].gG42810;
                        pri[XZrP3d].s1.x = pri[XZrP3d +(569 - 568)].s1.x;
                        pri[XZrP3d].s1.y = pri[XZrP3d +(178 - 177)].s1.y;
                        pri[XZrP3d].s1.z = pri[XZrP3d +1].s1.z;
                        pri[XZrP3d].s2.x = pri[XZrP3d +1].s2.x;
                        pri[XZrP3d].s2.y = pri[XZrP3d +1].s2.y;
                        pri[XZrP3d].s2.z = pri[XZrP3d +1].s2.z;
                        pri[XZrP3d].gG42810 = pri[XZrP3d +1].gG42810;
                        pri[XZrP3d +1].s1.x = temp.s1.x;
                        pri[XZrP3d +1].s1.y = temp.s1.y;
                        pri[XZrP3d +1].s1.z = temp.s1.z;
                        pri[XZrP3d +1].s2.x = temp.s2.x;
                        pri[XZrP3d +1].s2.y = temp.s2.y;
                        pri[XZrP3d +1].s2.z = temp.s2.z;
                        pri[XZrP3d +1].gG42810 = temp.gG42810;
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
                    XZrP3d = XZrP3d +1;
                };
            }
            i++;
        };
    };
}

void  main () {
    struct   p pri [300];
    int n;
    int i, XZrP3d;
    int k = 0, h = 0;
    float gG42810 [100];
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
    struct   d s [100];
    scanf ("%d", &n);
    for (i = 0; n > i; i++)
        scanf ("%d%d%d", &s[i].x, &s[i].y, &s[i].z);
    for (i = 0; n > i; i++) {
        XZrP3d = i + 1;
        while (XZrP3d < n) {
            gG42810[k] = f (s[i], s[XZrP3d]);
            pri[h].s1.x = s[i].x;
            pri[h].s1.y = s[i].y;
            pri[h].s1.z = s[i].z;
            pri[h].s2.x = s[XZrP3d].x;
            pri[h].s2.y = s[XZrP3d].y;
            pri[h].s2.z = s[XZrP3d].z;
            XZrP3d++;
            pri[h].gG42810 = gG42810[k];
            h++;
            k++;
        };
    }
    change (pri, h);
    {
        i = 0;
        while (i < h) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", pri[i].s1.x, pri[i].s1.y, pri[i].s1.z, pri[i].s2.x, pri[i].s2.y, pri[i].s2.z, pri[i].gG42810);
            i++;
        };
    };
}

