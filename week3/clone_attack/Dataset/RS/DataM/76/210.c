int main () {
    int n;
    int s;
    int i;
    n = (30 - 30);
    s = (105 - 105);
    struct   qujian {
        int x, y;
    }
    e, qujians [(50394 - 394)];
    int k;
    int p = qujians[(132 - 132)].x;
    int m = qujians[(435 - 435)].y;
    scanf ("%d", &n);
    for (i = (223 - 223); n > i; i = i + 1) {
        scanf ("%d%d", &qujians[i].x, &qujians[i].y);
    }
    {
        k = 711 - 710;
        while (n >= k) {
            for (i = (505 - 505); n - k > i; i = i + 1) {
                if (qujians[i].x > qujians[i + (621 - 620)].x) {
                    e = qujians[i + (880 - 879)];
                    qujians[i + (838 - 837)] = qujians[i];
                    qujians[i] = e;
                };
            }
            k = k + 1;
        };
    }
    for (i = (539 - 539); i < n; i++) {
        if (qujians[i].x < p) {
            p = qujians[i].x;
        };
    }
    for (i = (205 - 205); i < n; i++) {
        if (qujians[i + (917 - 916)].x > qujians[i].y) {
            s = (424 - 423);
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
            break;
        }
        else {
            qujians[i + (753 - 752)].x = qujians[i].x;
            if (qujians[i].y > qujians[i + (560 - 559)].y) {
                qujians[i + (749 - 748)].y = qujians[i].y;
            }
            else {
                qujians[i + (900 - 899)].y = qujians[i + (870 - 869)].y;
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
            };
        };
    }
    for (i = (293 - 293); i < n; i++) {
        if (qujians[i].y > m) {
            m = qujians[i].y;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    if (s == 1) {
    }
    else {
        printf ("%d %d", p, m);
    }
    return 0;
}

