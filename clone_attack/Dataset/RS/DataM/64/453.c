int main () {
    int xyL9Uqa;
    float x [xyL9Uqa], y [xyL9Uqa], z [xyL9Uqa], MbNIDmz [(xyL9Uqa - (742 - 741)) * xyL9Uqa / 2], va;
    cin >> xyL9Uqa;
    for (int i = (494 - 494);
    i < xyL9Uqa; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    {
        int i = 0, k = 0;
        while (i < xyL9Uqa - 1) {
            {
                int j = i + 1;
                while (j < xyL9Uqa) {
                    MbNIDmz[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                    j = j + 1;
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
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < (xyL9Uqa - 1) * xyL9Uqa / 2 - 1) {
            {
                int j = 0;
                while (j < (xyL9Uqa - 1) * xyL9Uqa / 2 - 1 - i) {
                    if (MbNIDmz[j] <= MbNIDmz[j + 1]) {
                        va = MbNIDmz[j];
                        MbNIDmz[j] = MbNIDmz[j + 1];
                        MbNIDmz[j + 1] = va;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < (xyL9Uqa - 1) * xyL9Uqa / 2) {
            if ((MbNIDmz[i] == MbNIDmz[i + 1]) && (i != (xyL9Uqa - 1) * xyL9Uqa / 2 - 1))
                continue;
            else {
                for (int j = 0;
                j < xyL9Uqa - 1; j++) {
                    int k = j + 1;
                    while (k < xyL9Uqa) {
                        if (MbNIDmz[i] == sqrt ((x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]) + (z[j] - z[k]) * (z[j] - z[k]))) {
                            if (i == 0)
                                printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f", x[j], y[j], z[j], x[k], y[k], z[k], MbNIDmz[i]);
                            else
                                printf ("\n(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f", x[j], y[j], z[j], x[k], y[k], z[k], MbNIDmz[i]);
                        }
                        k = k + 1;
                    };
                };
            }
            i++;
        };
    }
    return 0;
}

