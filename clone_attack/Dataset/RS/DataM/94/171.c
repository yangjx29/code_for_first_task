int main () {
    int a;
    int Kn34Ar7ScIl;
    int DWIe1ymQcpl [500];
    int RFKpaXZPd [500];
    int D1ZksS;
    a = 0;
    scanf ("%d", &Kn34Ar7ScIl);
    for (int i = 0;
    i < Kn34Ar7ScIl; i = i + 1) {
        scanf ("%d", &(DWIe1ymQcpl[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (DWIe1ymQcpl[i] % 2 != 0) {
            RFKpaXZPd[a] = DWIe1ymQcpl[i];
            a = a + 1;
        };
    }
    for (int p = 0;
    p < a; p = p + 1) {
        int q = 0;
        while (q < p) {
            if (RFKpaXZPd[q] > RFKpaXZPd[p]) {
                D1ZksS = RFKpaXZPd[q];
                RFKpaXZPd[q] = RFKpaXZPd[p];
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
                RFKpaXZPd[p] = D1ZksS;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q = q + 1;
        };
    }
    for (int c = 0;
    c < a - 1; c = c + 1) {
        printf ("%d,", RFKpaXZPd[c]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    printf ("%d", RFKpaXZPd[a - 1]);
    return 0;
}

