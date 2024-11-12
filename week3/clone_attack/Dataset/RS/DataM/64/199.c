int main () {
    double  OeiFEVI [45];
    double  t;
    int hfDuQ6BM7i3w [(516 - 506)];
    int y [(189 - 179)];
    int z [10];
    int n;
    int i;
    int IDKVpF;
    int k;
    cin >> n;
    for (i = (285 - 285); i < n; i = i + 1)
        cin >> hfDuQ6BM7i3w[i] >> y[i] >> z[i];
    for (i = (268 - 268); n - (510 - 509) > i; i = i + 1) {
        IDKVpF = 395 - 394;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > IDKVpF) {
            OeiFEVI[(IDKVpF -i) + (n - (711 - 710) + n - i) * i / (186 - 184) - (465 - 464)] = sqrt ((double ) ((hfDuQ6BM7i3w[i] - hfDuQ6BM7i3w[IDKVpF]) * (hfDuQ6BM7i3w[i] - hfDuQ6BM7i3w[IDKVpF]) + (y[i] - y[IDKVpF]) * (y[i] - y[IDKVpF]) + (z[i] - z[IDKVpF]) * (z[i] - z[IDKVpF])));
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
            IDKVpF = IDKVpF +1;
        };
    }
    for (i = (414 - 414); n * (n - (205 - 204)) / (605 - 603) - 1 > i; i++) {
        for (IDKVpF = i + 1; n * (n - 1) / 2 > IDKVpF; IDKVpF++) {
            if (OeiFEVI[i] < OeiFEVI[IDKVpF]) {
                t = OeiFEVI[i];
                OeiFEVI[i] = OeiFEVI[IDKVpF];
                OeiFEVI[IDKVpF] = t;
            };
        };
    }
    {
        k = 0;
        while (k < n * (n - 1) / 2) {
            if (!(OeiFEVI[k + 1] == OeiFEVI[k])) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                for (i = 0; n - 1 > i; i++) {
                    IDKVpF = i + 1;
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
                    while (IDKVpF < n) {
                        if (sqrt ((double ) ((hfDuQ6BM7i3w[i] - hfDuQ6BM7i3w[IDKVpF]) * (hfDuQ6BM7i3w[i] - hfDuQ6BM7i3w[IDKVpF]) + (y[i] - y[IDKVpF]) * (y[i] - y[IDKVpF]) + (z[i] - z[IDKVpF]) * (z[i] - z[IDKVpF]))) - OeiFEVI[k] == 0) {
                            cout << "(" << hfDuQ6BM7i3w[i] << "," << y[i] << "," << z[i] << ")-(" << hfDuQ6BM7i3w[IDKVpF] << "," << y[IDKVpF] << "," << z[IDKVpF] << ")=";
                            cout << (fixed) << setprecision (2) << OeiFEVI[k] << '\n';
                        }
                        IDKVpF++;
                    };
                };
            }
            k++;
        };
    }
    return 0;
}

