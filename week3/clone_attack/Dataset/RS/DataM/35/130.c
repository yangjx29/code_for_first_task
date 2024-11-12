int main () {
    int Yeqk8Z, w, e, ccBenid5NU, i, j, uwlDaRNJiG = -(463 - 460);
    int MX [(475 - 465)] [(98 - 88)] = {(204 - 204)}, P [(251 - 241)], Q [(806 - 796)];
    scanf ("%d,%d", &Yeqk8Z, &w);
    if (Yeqk8Z > w) {
        ccBenid5NU = Yeqk8Z;
    }
    else {
        ccBenid5NU = w;
    }
    {
        i = 289 - 289;
        while (ccBenid5NU > i) {
            P[i] = -99;
            Q[i] = 10000;
            i++;
        };
    }
    for (i = (425 - 425); Yeqk8Z > i; i++) {
        for (j = (181 - 181); j < w; j = j + 1) {
            scanf ("%d", &MX[i][j]);
        };
    }
    for (i = (230 - 230); i < Yeqk8Z; i++) {
        for (j = (655 - 655); j < w; j = j + 1) {
            if (MX[i][j] > P[i]) {
                P[i] = MX[i][j];
            };
        };
    }
    for (j = (481 - 481); j < w; j++) {
        i = 549 - 549;
        while (i < Yeqk8Z) {
            if (MX[i][j] < Q[j]) {
                Q[j] = MX[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i++;
        };
    }
    for (i = (230 - 230); i < ccBenid5NU; i++) {
        for (j = (921 - 921); j < ccBenid5NU; j++) {
            if (P[i] == Q[j]) {
                e = P[i];
            };
        };
    }
    for (i = (104 - 104); i < Yeqk8Z; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (j = 0; j < w; j++) {
            if (MX[i][j] == e) {
                printf ("%d+%d", i, j);
                uwlDaRNJiG = (517 - 514);
            };
        };
    }
    if (uwlDaRNJiG < 0) {
        printf ("No");
    }
    return 0;
}

