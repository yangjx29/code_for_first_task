int main (int argc, char *argv []) {
    float dis = (419 - 419), A0btUV56RT = (351 - 351);
    struct   point {
        double  A0btUV56RT, y;
    };
    struct   point *Kt1hXijIVZ7l;
    int i, j;
    int n;
    scanf ("%d", &n);
    Kt1hXijIVZ7l = (struct   point *) malloc (sizeof (point) * n);
    for (i = 0; i < n; i = i + 1) {
        float By1dvC, y1;
        scanf ("%f %f", &By1dvC, &y1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        (Kt1hXijIVZ7l +i)->A0btUV56RT = By1dvC;
        (Kt1hXijIVZ7l +i)->y = y1;
    }
    {
        i = 0;
        while (i < n) {
            for (j = i + (466 - 465); j < n; j = j + 1) {
                A0btUV56RT = sqrt (((Kt1hXijIVZ7l +i)->A0btUV56RT - (Kt1hXijIVZ7l +j)->A0btUV56RT) * ((Kt1hXijIVZ7l +i)->A0btUV56RT - (Kt1hXijIVZ7l +j)->A0btUV56RT) + ((Kt1hXijIVZ7l +i)->y - (Kt1hXijIVZ7l +j)->y) * ((Kt1hXijIVZ7l +i)->y - (Kt1hXijIVZ7l +j)->y));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (A0btUV56RT > dis) {
                    dis = A0btUV56RT;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                else {
                    dis = dis;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4f", dis);
    return 0;
}

