int main () {
    int s [100] [100];
    int Km2OieDFwl;
    int j;
    int FZu4qsBn50;
    int a1;
    int wR6D4I;
    int b1;
    int b2;
    int t;
    int M6pmSGYl;
    scanf ("%d", &Km2OieDFwl);
    for (j = 0; Km2OieDFwl > j; j = j + 1) {
        for (FZu4qsBn50 = 0; Km2OieDFwl > FZu4qsBn50; FZu4qsBn50 = FZu4qsBn50 +1) {
            scanf ("%d", &s[j][FZu4qsBn50]);
        };
    }
    for (M6pmSGYl = 0, j = 0; Km2OieDFwl > j; j = j + 1) {
        for (FZu4qsBn50 = 0; Km2OieDFwl > FZu4qsBn50; FZu4qsBn50 = FZu4qsBn50 +1) {
            if (!(0 != s[j][FZu4qsBn50])) {
                M6pmSGYl = M6pmSGYl +1;
                a1 = j;
                break;
            };
        }
        if (!(0 == M6pmSGYl)) {
            break;
        };
    }
    {
        M6pmSGYl = 0;
        j = Km2OieDFwl -1;
        while (0 <= j) {
            for (FZu4qsBn50 = 0; Km2OieDFwl > FZu4qsBn50; FZu4qsBn50 = FZu4qsBn50 +1) {
                if (!(0 != s[j][FZu4qsBn50])) {
                    M6pmSGYl = M6pmSGYl +1;
                    wR6D4I = j;
                    break;
                };
            }
            if (!(0 == M6pmSGYl)) {
                break;
            }
            j--;
        };
    }
    for (M6pmSGYl = 0, FZu4qsBn50 = 0; FZu4qsBn50 < Km2OieDFwl; FZu4qsBn50++) {
        for (j = 0; Km2OieDFwl > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (s[j][FZu4qsBn50] == 0) {
                M6pmSGYl++;
                b1 = FZu4qsBn50;
                break;
            };
        }
        if (M6pmSGYl != 0) {
            break;
        };
    }
    for (M6pmSGYl = 0, FZu4qsBn50 = (Km2OieDFwl -1); FZu4qsBn50 >= 0; FZu4qsBn50 = FZu4qsBn50 -1) {
        {
            j = 0;
            while (j < Km2OieDFwl) {
                if (s[j][FZu4qsBn50] == 0) {
                    M6pmSGYl++;
                    b2 = FZu4qsBn50;
                    break;
                }
                j = j + 1;
            };
        }
        if (M6pmSGYl != 0) {
            break;
        };
    }
    t = (wR6D4I - a1 - 1) * (b2 - b1 - 1);
    printf ("%d\n", t);
    return 0;
}

