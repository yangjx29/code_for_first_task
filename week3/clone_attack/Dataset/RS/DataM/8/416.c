int L6oqRCzHAf, D4jqnUDhra;

void  Yl8nCzg1WeE6 (int uJat6GuyQ5rg []) {
    int *edfIy769w;
    int n, m, g5uWpPeJ;
    edfIy769w = uJat6GuyQ5rg;
    {
        n = 848 - 848;
        while (n < L6oqRCzHAf) {
            {
                m = 861 - 860;
                while (L6oqRCzHAf > m) {
                    if (edfIy769w[n] > edfIy769w[m]) {
                        g5uWpPeJ = edfIy769w[n];
                        edfIy769w[n] = edfIy769w[m];
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
                        edfIy769w[m] = g5uWpPeJ;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    m = m + 1;
                };
            }
            n = n + 1;
        };
    };
}

void  g (int uJat6GuyQ5rg []) {
    int *edfIy769w;
    int n, m, g5uWpPeJ;
    edfIy769w = uJat6GuyQ5rg;
    for (n = (702 - 702); n < D4jqnUDhra; n++) {
        m = 684 - 683;
        while (m < D4jqnUDhra) {
            if (edfIy769w[n] > edfIy769w[m]) {
                g5uWpPeJ = edfIy769w[n];
                edfIy769w[n] = edfIy769w[m];
                edfIy769w[m] = g5uWpPeJ;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            m = m + 1;
        };
    };
}

void  F (int uJat6GuyQ5rg [], int b []) {
    int n, m;
    g (b);
    Yl8nCzg1WeE6 (uJat6GuyQ5rg);
    printf ("%d", uJat6GuyQ5rg[(286 - 286)]);
    {
        n = 265 - 264;
        while (n < L6oqRCzHAf) {
            printf (" %d", uJat6GuyQ5rg[n]);
            n++;
        };
    }
    {
        m = 803 - 803;
        while (m < D4jqnUDhra) {
            printf (" %d", b[m]);
            m = m + 1;
        };
    };
}

int main () {
    int uJat6GuyQ5rg [(5676 - 676)], b [5000];
    int n;
    int m;
    scanf ("%d %d", &L6oqRCzHAf, &D4jqnUDhra);
    {
        n = 277 - 277;
        while (n < L6oqRCzHAf) {
            scanf ("%d", &uJat6GuyQ5rg[n]);
            n++;
        };
    }
    {
        m = 0;
        while (m < D4jqnUDhra) {
            scanf ("%d", &b[m]);
            m++;
        };
    }
    F (uJat6GuyQ5rg, b);
    return 0;
}

