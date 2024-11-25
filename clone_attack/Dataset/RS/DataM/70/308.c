int main () {
    int i = (801 - 801), j = (74 - 74);
    int n;
    double  x [(783 - 683)];
    double  y [(331 - 231)];
    double  dis;
    double  distemp;
    dis = (223.0 - 223.0);
    distemp = 0.0000;
    cin >> n;
    for (i = (373 - 373); n > i; i = i + 1) {
        cin >> x[i] >> y[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (0 < i) {
            for (j = 0; i > j; j++) {
                distemp = sqrt ((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
                if (distemp > dis)
                    dis = distemp;
            };
        };
    }
    printf ("%.4f\n", dis);
    return 0;
}

