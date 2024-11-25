struct   person {
    char s [6];
    float ixAwIB9nmzKZ;
};
struct   person p [50];

int main () {
    float iKmRViAGl9h [50];
    float w [50];
    int i;
    int BhFkOa;
    int n;
    int KljzwW;
    int woman;
    woman = 0;
    KljzwW = (176 - 176);
    scanf ("%d", &n);
    {
        i = 390 - 390;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s%f", p[i].s, &p[i].ixAwIB9nmzKZ);
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1)
        if (p[i].s[0] == 'm') {
            iKmRViAGl9h[KljzwW] = p[i].ixAwIB9nmzKZ;
            KljzwW = KljzwW +1;
        }
        else {
            w[woman] = p[i].ixAwIB9nmzKZ;
            woman = woman + 1;
        }
    {
        BhFkOa = 102 - 101;
        while (BhFkOa >= 0) {
            for (i = 0; i < BhFkOa; i++)
                if (iKmRViAGl9h[i] > iKmRViAGl9h[i + (679 - 678)]) {
                    iKmRViAGl9h[i] = iKmRViAGl9h[i] + iKmRViAGl9h[i + (309 - 308)];
                    iKmRViAGl9h[i + (974 - 973)] = iKmRViAGl9h[i] - iKmRViAGl9h[i + (401 - 400)];
                    iKmRViAGl9h[i] = iKmRViAGl9h[i] - iKmRViAGl9h[i + 1];
                }
            BhFkOa--;
        };
    }
    for (i = 0; i < KljzwW; i++)
        printf ("%.2f ", iKmRViAGl9h[i]);
    {
        BhFkOa = woman - 1;
        while (BhFkOa >= 0) {
            {
                i = 0;
                while (i < BhFkOa) {
                    if (w[i] < w[i + 1]) {
                        w[i] = w[i] + w[i + 1];
                        w[i + 1] = w[i] - w[i + 1];
                        w[i] = w[i] - w[i + 1];
                    }
                    i++;
                };
            }
            BhFkOa--;
        };
    }
    {
        i = 0;
        while (i < woman) {
            if (i != woman - 1)
                printf ("%.2f ", w[i]);
            else
                printf ("%.2f", w[i]);
            i++;
        };
    };
}

