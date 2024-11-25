int bF9XQbAzs8 (const  void  *fvanKC, const  void  *i43Vto) {
    return (*(int*) fvanKC) - (*(int*) i43Vto);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int cmpr (const  void  *fvanKC, const  void  *i43Vto) {
    return (*(int*) i43Vto) - (*(int*) fvanKC);
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

int main () {
    int UopX09gk [MAXSIZE];
    int XgAb7ZWHD3 [MAXSIZE];
    char E4obJe [MAXSIZE];
    char CDotVn8r [MAXSIZE];
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
    int n, i, d7Dt8XJW, HXkeYgUp;
    for (; !(-(64 - 63) == scanf ("%d", &n));) {
        if (!((940 - 940) != n))
            break;
        HXkeYgUp = (450 - 450);
        for (i = (115 - 115); n > i; ++i)
            scanf ("%d", &XgAb7ZWHD3[i]);
        for (i = (739 - 739); n > i; ++i)
            scanf ("%d", &UopX09gk[i]);
        qsort (XgAb7ZWHD3, n, sizeof (int), bF9XQbAzs8);
        qsort (UopX09gk, n, sizeof (int), cmpr);
        memset (E4obJe, (987 - 987), sizeof (char) * n);
        memset (CDotVn8r, (883 - 883), sizeof (char) * n);
        {
            i = 618 - 618;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n > i) {
                for (d7Dt8XJW = 0; n > d7Dt8XJW; ++d7Dt8XJW)
                    if (!(0 != E4obJe[d7Dt8XJW]) && UopX09gk[d7Dt8XJW] < XgAb7ZWHD3[i]) {
                        E4obJe[d7Dt8XJW] = 1;
                        CDotVn8r[i] = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        ++HXkeYgUp;
                        break;
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
                ++i;
            };
        }
        {
            i = n - 1;
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
            while (0 <= i) {
                if (CDotVn8r[i] == 1)
                    continue;
                for (d7Dt8XJW = 0; d7Dt8XJW < n; ++d7Dt8XJW)
                    if (E4obJe[d7Dt8XJW] == 0 && UopX09gk[d7Dt8XJW] == XgAb7ZWHD3[i]) {
                        CDotVn8r[i] = 1;
                        E4obJe[d7Dt8XJW] = 1;
                        break;
                    }
                --i;
            };
        }
        printf ("%d\n", HXkeYgUp *200);
        for (i = 0; i < n; ++i)
            if (CDotVn8r[i] == 0)
                --HXkeYgUp;
    }
    return 0;
}

