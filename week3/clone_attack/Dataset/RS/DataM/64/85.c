int main () {
    int n;
    int i;
    int j;
    int rzoqQx;
    int t;
    float x [10];
    float y [10];
    float z [10];
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
    float Ff5D8guSQ [10] [10] = {-(187 - 186)};
    float o0rMOpeICHg;
    cin >> n;
    for (i = 0; i < n; i = i + 1)
        cin >> x[i] >> y[i] >> z[i];
    for (i = 0; i < n; i = i + 1)
        for (j = i + 1; j < n; j = j + 1)
            Ff5D8guSQ[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
    {
        int k = 0;
        while (k < (n * (n - 1) / 2)) {
            o0rMOpeICHg = 0;
            for (i = 0; i < n; i = i + 1)
                for (j = i + 1; j < n; j = j + 1)
                    if (Ff5D8guSQ[i][j] > o0rMOpeICHg) {
                        o0rMOpeICHg = Ff5D8guSQ[i][j];
                        t = j;
                        rzoqQx = i;
                    }
            printf ("%.2f\n", o0rMOpeICHg);
            Ff5D8guSQ[rzoqQx][t] = -1;
            cout << '(' << x[rzoqQx] << ',' << y[rzoqQx] << ',' << z[rzoqQx] << ")-(" << x[t] << ',' << y[t] << ',' << z[t] << ")=";
            k = k + 1;
        };
    }
    return 0;
}

