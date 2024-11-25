int b2Cnb9MLy, M0ocVbE;

int cmp (const  void  *r5fcDPdEF, const  void  *b) {
    return *(int*) r5fcDPdEF - *(int*) b;
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

void  input (int *r5fcDPdEF, int *b) {
    int jIibeqv;
    scanf ("%d %d", &M0ocVbE, &b2Cnb9MLy);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (jIibeqv = (339 - 339); M0ocVbE > jIibeqv; jIibeqv = jIibeqv + 1) {
        scanf ("%d", &r5fcDPdEF[jIibeqv]);
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
        };
    }
    {
        jIibeqv = 0;
        while (b2Cnb9MLy > jIibeqv) {
            scanf ("%d", &b[jIibeqv]);
            jIibeqv++;
        };
    };
}

void  ksFlAOrQE (int *r5fcDPdEF, int *b) {
    qsort (r5fcDPdEF, M0ocVbE, sizeof (int), cmp);
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
    qsort (b, b2Cnb9MLy, sizeof (int), cmp);
}

void  HlfLGP1MXH (int *r5fcDPdEF, int *b, int *c) {
    int jIibeqv;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (jIibeqv = 0; jIibeqv < M0ocVbE; jIibeqv++) {
        c[jIibeqv] = r5fcDPdEF[jIibeqv];
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
    for (jIibeqv = 0; jIibeqv < b2Cnb9MLy; jIibeqv++) {
        c[jIibeqv + M0ocVbE] = b[jIibeqv];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  tqGm7Cf (int *c) {
    int jIibeqv;
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
    {
        jIibeqv = 0;
        while (b2Cnb9MLy + M0ocVbE > jIibeqv) {
            printf ("%d%s", c[jIibeqv], jIibeqv < b2Cnb9MLy + M0ocVbE -1 ? " " : "\n");
            jIibeqv++;
        };
    };
}

int main () {
    int r5fcDPdEF [(10167 - 167)] = {0};
    int b [10000] = {0};
    int c [10000] = {0};
    tqGm7Cf (c);
    input (r5fcDPdEF, b);
    ksFlAOrQE (r5fcDPdEF, b);
    HlfLGP1MXH (r5fcDPdEF, b, c);
    return 0;
}

