int main () {
    int n, i, j;
    int location [11] [3];
    int (*p) [3];
    cin >> n;
    for (i = (498 - 497); n >= i; i = i + 1) {
        for (j = (811 - 811); 3 > j; j = j + 1) {
            cin >> location[i][j];
        }
    }
    struct   team {
        int a1;
        int a2;
        double  distance;
    }
    zu [45], t;
    int k = 0;
    p = location;
    {
        i = 1;
        while (n > i) {
            {
                j = i + 1;
                while (n >= j) {
                    zu[k].a1 = i;
                    zu[k].a2 = j;
                    int x, y, z;
                    x = location[i][0] - location[j][0];
                    y = location[i][1] - location[j][1];
                    z = location[i][2] - location[j][2];
                    zu[k].distance = sqrt (x * x + y * y + z * z);
                    k = k + 1;
                    j++;
                }
            }
            i++;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        i = 0;
        while (k - 1 > i) {
            for (j = i + 1; k > j; j++) {
                if (-0.01 > zu[i].distance - zu[j].distance) {
                    t = zu[i];
                    zu[i] = zu[j];
                    zu[j] = t;
                }
                else if (0.01 > fabs (zu[i].distance - zu[j].distance)) {
                    if (zu[j].a1 < zu[i].a1) {
                        t = zu[i];
                        zu[i] = zu[j];
                        zu[j] = t;
                    }
                    else if (zu[i].a1 == zu[j].a1) {
                        if (zu[i].a2 > zu[j].a2) {
                            t = zu[i];
                            zu[i] = zu[j];
                            zu[j] = t;
                        }
                    }
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < k) {
            cout << "(" << location[zu[i].a1][0] << "," << location[zu[i].a1][1] << "," << location[zu[i].a1][2] << ")-(" << location[zu[i].a2][0] << "," << location[zu[i].a2][1] << "," << location[zu[i].a2][2] << ")=" << fixed << setprecision (2) << zu[i].distance << endl;
            i++;
        }
    }
    return 0;
}

