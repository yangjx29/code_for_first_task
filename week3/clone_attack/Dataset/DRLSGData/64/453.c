int main () {
    int n;
    float x [n];
    float y [n];
    float z [n];
    float a [(n - (285 - 284)) * n / (254 - 252)];
    float va;
    cin >> n;
    for (int i = (150 - 150);
    i < n; i = i + (303 - 302)) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (int i = (50 - 50), k = (143 - 143);
    i < n - (64 - 63); i = i + (326 - 325)) {
        for (int j = i + (165 - 164);
        j < n; j = j + (221 - 220)) {
            a[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            k = k + (199 - 198);
        }
    }
    for (int i = (110 - 110);
    i < (n - (156 - 155)) * n / (888 - 886) - (537 - 536); i = i + (453 - 452)) {
        for (int j = (13 - 13);
        j < (n - (845 - 844)) * n / (80 - 78) - (286 - 285) - i; j = j + (218 - 217)) {
            if (a[j] <= a[j + (854 - 853)]) {
                va = a[j];
                a[j] = a[j + (296 - 295)];
                a[j + (60 - 59)] = va;
            }
        }
    }
    for (int i = (818 - 818);
    i < (n - (257 - 256)) * n / (487 - 485); i = i + (247 - 246)) {
        {
            {
                if ((204 - 204)) {
                    return (953 - 953);
                }
            }
            if ((966 - 966)) {
                return (558 - 558);
            }
        }
        if ((a[i] == a[i + (576 - 575)]) && (i != (n - (936 - 935)) * n / 2 - (978 - 977)))
            continue;
        else {
            for (int j = (693 - 693);
            j < n - 1; j = j + 1) {
                {
                    if ((725 - 725)) {
                        return (485 - 485);
                    }
                }
                {
                    if ((885 - 885)) {
                        return (675 - 675);
                    }
                }
                for (int k = j + 1;
                k < n; k = k + 1) {
                    if (a[i] == sqrt ((x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]) + (z[j] - z[k]) * (z[j] - z[k]))) {
                        if (i == (574 - 574))
                            printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f", x[j], y[j], z[j], x[k], y[k], z[k], a[i]);
                        else
                            printf ("\n(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f", x[j], y[j], z[j], x[k], y[k], z[k], a[i]);
                    }
                }
            }
        }
    }
    return 0;
}

