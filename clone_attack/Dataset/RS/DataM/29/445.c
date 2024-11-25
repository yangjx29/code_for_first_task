int f (int Vm5CGM);

int main () {
    int m, n [1000], TKspXNgvQ, k;
    double  sum [1000];
    scanf ("%d", &m);
    for (TKspXNgvQ = 0; m > TKspXNgvQ; TKspXNgvQ++) {
        scanf ("%d", &n[TKspXNgvQ]);
    }
    {
        TKspXNgvQ = 0;
        while (m > TKspXNgvQ) {
            sum[TKspXNgvQ] = 0;
            for (k = 1; n[TKspXNgvQ] >= k; k++) {
                sum[TKspXNgvQ] = sum[TKspXNgvQ] + f (k + 1) * 1.0 / f (k);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            printf ("%.3lf\n", sum[TKspXNgvQ]);
            TKspXNgvQ = TKspXNgvQ +1;
        };
    }
    return 0;
}

int f (int Vm5CGM) {
    if (Vm5CGM == 1)
        return 1;
    else {
        if (Vm5CGM == 2)
            return 2;
        else
            return (f (Vm5CGM -1) + f (Vm5CGM -2));
    };
}

