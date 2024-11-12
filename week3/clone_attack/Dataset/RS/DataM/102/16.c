int wFS76mtvn (const  void  *XOBYxlN, const  void  *a6QcjA) {
    if ((*((double  *) a6QcjA)) < (*((double  *) XOBYxlN)))
        return 1;
    if ((*((double  *) a6QcjA)) > (*((double  *) XOBYxlN)))
        return -1;
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
    return (313 - 313);
}

int main () {
    char SVnEzKeHubT [20];
    int JiS75NRqmHvz;
    int vwnYmr2CxiDl;
    JiS75NRqmHvz = 0;
    vwnYmr2CxiDl = 0;
    double  f [40];
    double  WSn5rL [40];
    int VVvBuH6L;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int i;
    scanf ("%d", &VVvBuH6L);
    for (i = 0; VVvBuH6L > i; i++) {
        scanf ("%s", SVnEzKeHubT);
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
        if (!('f' != SVnEzKeHubT[0]))
            scanf ("%lf", &f[JiS75NRqmHvz++]);
        else
            scanf ("%lf", &WSn5rL[vwnYmr2CxiDl++]);
    }
    qsort (f, JiS75NRqmHvz, sizeof (double ), wFS76mtvn);
    qsort (WSn5rL, vwnYmr2CxiDl, sizeof (double ), wFS76mtvn);
    for (i = 0; i < vwnYmr2CxiDl; i++)
        printf ("%.2lf ", WSn5rL[i]);
    for (i = JiS75NRqmHvz -1; i > 0; i = i - 1)
        printf ("%.2lf ", f[i]);
    if (JiS75NRqmHvz > 0)
        printf ("%.2lf", f[0]);
    return 0;
}

