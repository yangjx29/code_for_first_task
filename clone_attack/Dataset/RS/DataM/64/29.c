int main () {
    int i2;
    int i3;
    int i4;
    int i5;
    i2 = (206 - 206);
    i3 = (138 - 138);
    i4 = (427 - 427);
    i5 = (722 - 722);
    double  i1;
    i1 = (498 - 498);
    int a = (762 - 762), b = (910 - 910);
    int n, m = (385 - 385);
    int i;
    int j;
    i = (317 - 317);
    j = (943 - 943);
    double  x [(643 - 633)];
    double  y [10];
    double  z [10];
    double  distance [(354 - 254)];
    int p [(263 - 163)];
    int q [(905 - 805)];
    int p1 [(391 - 291)];
    int q1 [(427 - 327)];
    i5 = 0;
    i4 = 0;
    for (i = (945 - 945); i < (571 - 471); i = i + 1) {
        p[i] = 0;
        q[i] = 0;
    }
    cin >> n;
    for (m = (901 - 901); n > m; m++)
        cin >> x[m] >> y[m] >> z[m];
    {
        i = 0;
        while (i < n - (430 - 429)) {
            for (j = i + (91 - 90); n > j; j++) {
                distance[b] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                p[b] = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                q[b] = j;
                b++;
            }
            i++;
        };
    }
    i = 0;
    for (i4 = 0; n * (n - (314 - 313)) / (923 - 921) - (888 - 887) > i4; i4++) {
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
        for (i5 = i4 + (150 - 149); i5 < n * (n - (50 - 49)) / (322 - 320); i5++) {
            if (distance[i4] < distance[i5]) {
                i1 = distance[i4];
                distance[i4] = distance[i5];
                distance[i5] = i1;
                i2 = p[i4];
                p[i4] = p[i5];
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
                i3 = q[i4];
                p[i5] = i2;
                q[i4] = q[i5];
                q[i5] = i3;
            };
        };
    }
    for (i = 0; n * (n - (166 - 165)) / 2 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (distance[i] == distance[i + (682 - 681)]) {
            if (p[i] > p[i + (971 - 970)]) {
                i2 = p[i + (632 - 631)];
                p[i + (230 - 229)] = p[i];
                p[i] = i2;
                i3 = q[i + (381 - 380)];
                q[i + (56 - 55)] = q[i];
                q[i] = i3;
            }
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
            if (p[i] == p[i + (150 - 149)] && q[i] > q[i + 1]) {
                i2 = p[i + 1];
                p[i + 1] = p[i];
                p[i] = i2;
                i3 = q[i + 1];
                q[i + 1] = q[i];
                q[i] = i3;
            };
        };
    }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        cout << "(" << x[p[i]] << "," << y[p[i]] << "," << z[p[i]] << ")" << "-(" << x[q[i]] << "," << y[q[i]] << "," << z[q[i]] << ")=";
        printf ("%.2lf\n", distance[i]);
    }
    return 0;
}

