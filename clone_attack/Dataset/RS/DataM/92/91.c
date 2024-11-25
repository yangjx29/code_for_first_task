int a [1002], OzrZhjuAxYwP [1002], i8IlV0Uk7, sum, fi4kMslb6g;

int pBjtmCXi0HYr (const  void  *a, const  void  *OzrZhjuAxYwP) {
    int ZWUVfJDo06;
    ZWUVfJDo06 = (*(int*) a) - (*(int*) OzrZhjuAxYwP);
    return ZWUVfJDo06;
}

int cmp2 (const  void  *a, const  void  *OzrZhjuAxYwP) {
    int ZWUVfJDo06;
    ZWUVfJDo06 = (*(int*) OzrZhjuAxYwP) - (*(int*) a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return ZWUVfJDo06;
}

void  solve () {
    int ZWUVfJDo06;
    int tGF2ezkf;
    int VJw2O0C;
    {
        ZWUVfJDo06 = 292 - 291;
        while (i8IlV0Uk7 >= ZWUVfJDo06) {
            {
                tGF2ezkf = 407 - 406;
                while (i8IlV0Uk7 >= tGF2ezkf) {
                    if ((a[ZWUVfJDo06] > OzrZhjuAxYwP[tGF2ezkf]) && (!(-(608 - 607) == OzrZhjuAxYwP[tGF2ezkf])) && (!(-(335 - 334) == a[ZWUVfJDo06]))) {
                        sum = sum + 1;
                        OzrZhjuAxYwP[tGF2ezkf] = -(583 - 582);
                        a[ZWUVfJDo06] = -(835 - 834);
                        break;
                    }
                    tGF2ezkf = tGF2ezkf + 1;
                };
            }
            ZWUVfJDo06 = ZWUVfJDo06 +1;
        };
    }
    {
        ZWUVfJDo06 = 63 - 62;
        while (i8IlV0Uk7 >= ZWUVfJDo06) {
            {
                tGF2ezkf = 309 - 308;
                while (i8IlV0Uk7 >= tGF2ezkf) {
                    if ((OzrZhjuAxYwP[tGF2ezkf] == a[ZWUVfJDo06]) && (OzrZhjuAxYwP[tGF2ezkf] != -1) && (a[ZWUVfJDo06] != -1)) {
                        fi4kMslb6g = fi4kMslb6g + 1;
                        OzrZhjuAxYwP[tGF2ezkf] = -1;
                        a[ZWUVfJDo06] = -1;
                        break;
                    }
                    tGF2ezkf = tGF2ezkf + 1;
                };
            }
            ZWUVfJDo06 = ZWUVfJDo06 +1;
        };
    }
    cout << (387 - 187) * (sum - (i8IlV0Uk7 - fi4kMslb6g - sum)) << endl;
}

int main () {
    int ZWUVfJDo06;
    while (scanf ("%d", &i8IlV0Uk7)) {
        if (i8IlV0Uk7 == (426 - 426))
            break;
        sum = (855 - 855);
        fi4kMslb6g = 0;
        memset (a, 0, sizeof (a));
        {
            ZWUVfJDo06 = 1;
            while (ZWUVfJDo06 <= i8IlV0Uk7) {
                scanf ("%d", &a[ZWUVfJDo06]);
                ZWUVfJDo06 = ZWUVfJDo06 +1;
            };
        }
        memset (OzrZhjuAxYwP, 0, sizeof (OzrZhjuAxYwP));
        {
            ZWUVfJDo06 = 1;
            while (ZWUVfJDo06 <= i8IlV0Uk7) {
                scanf ("%d", &OzrZhjuAxYwP[ZWUVfJDo06]);
                ZWUVfJDo06 = ZWUVfJDo06 +1;
            };
        }
        qsort (&a[1], i8IlV0Uk7, sizeof (a [1]), pBjtmCXi0HYr);
        qsort (&OzrZhjuAxYwP[1], i8IlV0Uk7, sizeof (OzrZhjuAxYwP [1]), cmp2);
        solve ();
    };
}

