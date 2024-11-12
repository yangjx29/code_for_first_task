int main (int CZisTSHa32h1, char *a6dYXI31klLi []) {
    int K6WmxqS4c [1000];
    int qZfVqQJk [1000];
    int WrRlSe6CIyU;
    int uWy30MZd4lv;
    int wa0KZN;
    WrRlSe6CIyU = 0;
    scanf ("%d", &uWy30MZd4lv);
    for (wa0KZN = 0; wa0KZN < uWy30MZd4lv; wa0KZN++) {
        scanf ("%d", &(K6WmxqS4c[wa0KZN]));
    }
    {
        wa0KZN = 0;
        while (wa0KZN < uWy30MZd4lv) {
            if (!(0 == K6WmxqS4c[wa0KZN] % 2)) {
                qZfVqQJk[WrRlSe6CIyU] = K6WmxqS4c[wa0KZN];
                WrRlSe6CIyU = WrRlSe6CIyU +1;
            }
            wa0KZN++;
        };
    }
    for (int mUrZeLGz = 1;
    mUrZeLGz <= WrRlSe6CIyU; mUrZeLGz = mUrZeLGz + 1) {
        int wa0KZN;
        wa0KZN = 0;
        while (wa0KZN < WrRlSe6CIyU -mUrZeLGz) {
            if (qZfVqQJk[wa0KZN] > qZfVqQJk[wa0KZN + 1]) {
                int WD4gds = qZfVqQJk[wa0KZN + 1];
                qZfVqQJk[wa0KZN + 1] = qZfVqQJk[wa0KZN];
                qZfVqQJk[wa0KZN] = WD4gds;
            }
            wa0KZN++;
        };
    }
    {
        wa0KZN = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wa0KZN < WrRlSe6CIyU) {
            if (wa0KZN == 0) {
                printf ("%d", qZfVqQJk[wa0KZN]);
            }
            else
                printf (",%d", qZfVqQJk[wa0KZN]);
            wa0KZN++;
        };
    }
    return 0;
}

