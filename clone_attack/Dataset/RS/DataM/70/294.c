int main () {
    double  Maxx;
    Maxx = 0.0;
    double  s [100];
    double  x [100];
    int i;
    i = 0;
    int VC3KAkg42vH;
    VC3KAkg42vH = 0;
    int q;
    q = 0;
    int aV4XzTUjp = 0;
    double  J1C9gKcn [100];
    double  fpaBGU;
    fpaBGU = 0.0;
    cin >> VC3KAkg42vH;
    {
        q = 0;
        while (VC3KAkg42vH > q) {
            cin >> x[q] >> J1C9gKcn[q];
            q = q + 1;
        };
    }
    {
        q = 0;
        while (VC3KAkg42vH > q) {
            {
                i = 0;
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
                while (i < VC3KAkg42vH) {
                    s[i] = sqrt ((x[i] - x[q]) * (x[i] - x[q]) + (J1C9gKcn[i] - J1C9gKcn[q]) * (J1C9gKcn[i] - J1C9gKcn[q]));
                    if (fpaBGU < s[i]) {
                        fpaBGU = s[i];
                    }
                    i++;
                    if (Maxx < fpaBGU) {
                        Maxx = fpaBGU;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q++;
        };
    }
    cout << Maxx << endl;
    return 0;
}

