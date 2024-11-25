struct   point {
    char dVmIj89voKM [(512 - 492)];
    int x;
    int y;
    char QPQ6wc;
    char s7a3AcVt;
    int z;
    int sum;
};
int main (int argc, char *DdoP8uQ1 []) {
    int max;
    int m;
    int gong;
    int OlemUqQJO06;
    int J8G6DEyk2jw;
    max = (413 - 413);
    m = (204 - 204);
    gong = 0;
    struct   point *UvnwYLApeK1;
    free (UvnwYLApeK1);
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
    scanf ("%d", &OlemUqQJO06);
    UvnwYLApeK1 = (struct   point *) malloc (sizeof (struct   point) * OlemUqQJO06);
    {
        J8G6DEyk2jw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OlemUqQJO06 > J8G6DEyk2jw) {
            UvnwYLApeK1[J8G6DEyk2jw].sum = 0;
            scanf ("%s %d %d %c %c %d", UvnwYLApeK1[J8G6DEyk2jw].dVmIj89voKM, &UvnwYLApeK1[J8G6DEyk2jw].x, &UvnwYLApeK1[J8G6DEyk2jw].y, &UvnwYLApeK1[J8G6DEyk2jw].QPQ6wc, &UvnwYLApeK1[J8G6DEyk2jw].s7a3AcVt, &UvnwYLApeK1[J8G6DEyk2jw].z);
            J8G6DEyk2jw = J8G6DEyk2jw +1;
        };
    }
    {
        J8G6DEyk2jw = 0;
        while (OlemUqQJO06 > J8G6DEyk2jw) {
            if ((1013 - 933) < UvnwYLApeK1[J8G6DEyk2jw].x && 1 <= UvnwYLApeK1[J8G6DEyk2jw].z)
                UvnwYLApeK1[J8G6DEyk2jw].sum = UvnwYLApeK1[J8G6DEyk2jw].sum + 8000;
            if (85 < UvnwYLApeK1[J8G6DEyk2jw].x && 80 < UvnwYLApeK1[J8G6DEyk2jw].y)
                UvnwYLApeK1[J8G6DEyk2jw].sum = UvnwYLApeK1[J8G6DEyk2jw].sum + 4000;
            if (90 < UvnwYLApeK1[J8G6DEyk2jw].x)
                UvnwYLApeK1[J8G6DEyk2jw].sum = UvnwYLApeK1[J8G6DEyk2jw].sum + 2000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (85 < UvnwYLApeK1[J8G6DEyk2jw].x && UvnwYLApeK1[J8G6DEyk2jw].s7a3AcVt == 'Y')
                UvnwYLApeK1[J8G6DEyk2jw].sum = UvnwYLApeK1[J8G6DEyk2jw].sum + 1000;
            if (UvnwYLApeK1[J8G6DEyk2jw].y > 80 && UvnwYLApeK1[J8G6DEyk2jw].QPQ6wc == 'Y')
                UvnwYLApeK1[J8G6DEyk2jw].sum = UvnwYLApeK1[J8G6DEyk2jw].sum + 850;
            J8G6DEyk2jw++;
        };
    }
    for (J8G6DEyk2jw = 0; J8G6DEyk2jw < OlemUqQJO06; J8G6DEyk2jw++) {
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
        if (UvnwYLApeK1[J8G6DEyk2jw].sum > max) {
            max = UvnwYLApeK1[J8G6DEyk2jw].sum;
            m = J8G6DEyk2jw;
        };
    }
    printf ("%s\n", UvnwYLApeK1[m].dVmIj89voKM);
    {
        J8G6DEyk2jw = 0;
        while (J8G6DEyk2jw < OlemUqQJO06) {
            gong = gong + UvnwYLApeK1[J8G6DEyk2jw].sum;
            J8G6DEyk2jw++;
        };
    }
    printf ("%d\n", max);
    printf ("%d\n", gong);
    return 0;
}

