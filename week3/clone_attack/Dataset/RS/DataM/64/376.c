int main () {
    double  d;
    double  jl [45];
    int jjf94RJ2M [10];
    int x [10];
    int z [10];
    int rBORoe9LYx, b, FNP0lLxtDV, KfD8w0pqObra, Um09iAdy4upa, XsbQA5wc8, srkTCI, FxQLcP1KzbvA = (524 - 524), bqzo25ce13;
    double  e;
    double  Q2S7DkY8JoEA [45];
    int RbQzBpdOEZnJ;
    RbQzBpdOEZnJ = 1;
    scanf ("%d", &KfD8w0pqObra);
    for (Um09iAdy4upa = 0; KfD8w0pqObra > Um09iAdy4upa; Um09iAdy4upa++) {
        scanf ("%d", &x[Um09iAdy4upa]);
        scanf ("%d", &jjf94RJ2M[Um09iAdy4upa]);
        scanf ("%d", &z[Um09iAdy4upa]);
    }
    for (Um09iAdy4upa = 0; KfD8w0pqObra > Um09iAdy4upa; Um09iAdy4upa++) {
        for (srkTCI = Um09iAdy4upa +1; KfD8w0pqObra > srkTCI; srkTCI++) {
            rBORoe9LYx = x[Um09iAdy4upa] - x[srkTCI];
            b = jjf94RJ2M[Um09iAdy4upa] - jjf94RJ2M[srkTCI];
            FNP0lLxtDV = z[Um09iAdy4upa] - z[srkTCI];
            jl[FxQLcP1KzbvA] = sqrt (1.0 * rBORoe9LYx * rBORoe9LYx + b * b + FNP0lLxtDV *FNP0lLxtDV);
            FxQLcP1KzbvA = FxQLcP1KzbvA +1;
        };
    }
    bqzo25ce13 = KfD8w0pqObra *(KfD8w0pqObra -1) / 2;
    for (Um09iAdy4upa = 1; bqzo25ce13 >= Um09iAdy4upa; Um09iAdy4upa++) {
        srkTCI = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (srkTCI < bqzo25ce13 - Um09iAdy4upa) {
            if (jl[srkTCI + 1] < jl[srkTCI]) {
                e = jl[srkTCI + 1];
                jl[srkTCI + 1] = jl[srkTCI];
                jl[srkTCI] = e;
            }
            srkTCI++;
        };
    }
    Q2S7DkY8JoEA[0] = jl[0];
    for (Um09iAdy4upa = 1; Um09iAdy4upa < bqzo25ce13; Um09iAdy4upa++) {
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
        if (jl[Um09iAdy4upa] == jl[Um09iAdy4upa -1]) {
            continue;
        }
        else {
            Q2S7DkY8JoEA[RbQzBpdOEZnJ] = jl[Um09iAdy4upa];
            RbQzBpdOEZnJ++;
        };
    }
    {
        XsbQA5wc8 = RbQzBpdOEZnJ -1;
        while (XsbQA5wc8 >= 0) {
            for (Um09iAdy4upa = 0; Um09iAdy4upa < KfD8w0pqObra; Um09iAdy4upa++) {
                srkTCI = Um09iAdy4upa +1;
                while (srkTCI < KfD8w0pqObra) {
                    rBORoe9LYx = x[Um09iAdy4upa] - x[srkTCI];
                    b = jjf94RJ2M[Um09iAdy4upa] - jjf94RJ2M[srkTCI];
                    FNP0lLxtDV = z[Um09iAdy4upa] - z[srkTCI];
                    d = sqrt (1.0 * rBORoe9LYx * rBORoe9LYx + b * b + FNP0lLxtDV *FNP0lLxtDV);
                    if (d == Q2S7DkY8JoEA[XsbQA5wc8]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[Um09iAdy4upa], jjf94RJ2M[Um09iAdy4upa], z[Um09iAdy4upa], x[srkTCI], jjf94RJ2M[srkTCI], z[srkTCI], d);
                    }
                    srkTCI++;
                };
            }
            XsbQA5wc8--;
        };
    }
    return 0;
}

