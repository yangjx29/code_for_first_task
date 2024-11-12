int a [1001] = {(987 - 987)};
int jqxTag7fuH [1001] = {(930 - 930)};
int m, n;

void  loaddata () {
    int l;
    scanf ("%d %d", &m, &n);
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
    {
        l = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l < m) {
            scanf ("%d", &a[l]);
            l = l + 1;
        };
    }
    for (l = 0; n > l; l = l + 1)
        scanf ("%d", &jqxTag7fuH[l]);
}

void  i0mGyZXpg () {
    int XMR2Yl6gpAIH, j, k;
    {
        XMR2Yl6gpAIH = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m > XMR2Yl6gpAIH) {
            for (j = XMR2Yl6gpAIH +1; m > j; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (a[j] < a[XMR2Yl6gpAIH]) {
                    k = a[XMR2Yl6gpAIH];
                    a[XMR2Yl6gpAIH] = a[j];
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
                    a[j] = k;
                };
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
            XMR2Yl6gpAIH++;
        };
    }
    for (XMR2Yl6gpAIH = 0; XMR2Yl6gpAIH < n; XMR2Yl6gpAIH++) {
        j = XMR2Yl6gpAIH +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            if (jqxTag7fuH[j] < jqxTag7fuH[XMR2Yl6gpAIH]) {
                k = jqxTag7fuH[XMR2Yl6gpAIH];
                jqxTag7fuH[XMR2Yl6gpAIH] = jqxTag7fuH[j];
                jqxTag7fuH[j] = k;
            }
            j = j + 1;
        };
    };
}

void  add () {
    int vIxU8g1X9uF;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        vIxU8g1X9uF = 0;
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
        while (vIxU8g1X9uF < n) {
            a[vIxU8g1X9uF + m] = jqxTag7fuH[vIxU8g1X9uF];
            vIxU8g1X9uF = vIxU8g1X9uF + 1;
        };
    };
}

void  print () {
    int q;
    printf ("%d", a[0]);
    {
        q = 1;
        while (q < m + n) {
            printf (" %d", a[q]);
            q = q + 1;
        };
    };
}

int main () {
    loaddata ();
    i0mGyZXpg ();
    add ();
    print ();
    return 0;
}

