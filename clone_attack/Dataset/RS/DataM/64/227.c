struct   {
    int cYR2Mr;
    int bEvUpKdkOl;
    int y1;
    int z1;
    int TYl8jM9;
    int cb6CQPnX;
    int z2;
    double  distance;
}
date [55], t;

int main () {
    int kTBc5xL, XdSU2vt [10], y [10], z [10], i, j, sIMQBGWEo2U = 0;
    cin >> kTBc5xL;
    for (i = 0; kTBc5xL > i; i++)
        cin >> XdSU2vt[i] >> y[i] >> z[i];
    for (i = 0; kTBc5xL - 1 > i; i++) {
        j = i + 1;
        while (j < kTBc5xL) {
            date[sIMQBGWEo2U].cYR2Mr = sIMQBGWEo2U;
            date[sIMQBGWEo2U].bEvUpKdkOl = XdSU2vt[i];
            date[sIMQBGWEo2U].y1 = y[i];
            date[sIMQBGWEo2U].z1 = z[i];
            date[sIMQBGWEo2U].TYl8jM9 = XdSU2vt[j];
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
            date[sIMQBGWEo2U].cb6CQPnX = y[j];
            date[sIMQBGWEo2U].z2 = z[j];
            date[sIMQBGWEo2U].distance = pow (XdSU2vt[i] - XdSU2vt[j], 2.0) + pow (y[i] - y[j], 2.0) + pow (z[i] - z[j], 2.0);
            j++;
            sIMQBGWEo2U++;
        };
    }
    for (i = sIMQBGWEo2U - 2; i >= 0; i = i - 1)
        for (j = sIMQBGWEo2U - 1; j >= i + 1; j--) {
            if (date[i].distance < date[j].distance || date[i].distance == date[j].distance && date[j].cYR2Mr < date[i].cYR2Mr) {
                t = date[i];
                date[i] = date[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                date[j] = t;
            };
        }
    for (i = 0; i < sIMQBGWEo2U; i++) {
        cout << "(" << date[i].bEvUpKdkOl << "," << date[i].y1 << "," << date[i].z1 << ")-(";
        cout << date[i].TYl8jM9 << "," << date[i].cb6CQPnX << "," << date[i].z2 << ")=";
        cout << fixed << setprecision (2) << sqrt (date[i].distance) << endl;
    }
    return 0;
}

