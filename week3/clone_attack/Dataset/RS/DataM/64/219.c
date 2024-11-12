int main () {
    int n;
    int X [(609 - 489)];
    int Y [(236 - 116)];
    int Z [120];
    int h7wndsAe [1020];
    int J [1020];
    double  zEiXUKZoY [1020];
    double  mid;
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
    int i, bVDFlBp, y, bPdqvby, Rhw8ro9Ym, zh7NBl3, pai, eTDIowmXlK;
    int UIXw4msyzK = (842 - 841);
    cin >> n;
    {
        i = 908 - 907;
        while (i <= n) {
            cin >> bVDFlBp >> y >> bPdqvby;
            X[i] = bVDFlBp;
            Y[i] = y;
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
            Z[i] = bPdqvby;
            i = i + 1;
        };
    }
    for (Rhw8ro9Ym = (989 - 988); Rhw8ro9Ym <= n; Rhw8ro9Ym = Rhw8ro9Ym +1) {
        for (zh7NBl3 = (279 - 277); zh7NBl3 <= n; zh7NBl3++) {
            if (zh7NBl3 <= Rhw8ro9Ym) {
                continue;
            }
            h7wndsAe[UIXw4msyzK] = Rhw8ro9Ym;
            J[UIXw4msyzK] = zh7NBl3;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            zEiXUKZoY[UIXw4msyzK] = (X[Rhw8ro9Ym] - X[zh7NBl3]) * (X[Rhw8ro9Ym] - X[zh7NBl3]) + (Y[Rhw8ro9Ym] - Y[zh7NBl3]) * (Y[Rhw8ro9Ym] - Y[zh7NBl3]) + (Z[Rhw8ro9Ym] - Z[zh7NBl3]) * (Z[Rhw8ro9Ym] - Z[zh7NBl3]);
            UIXw4msyzK = UIXw4msyzK +1;
        };
    }
    pai = n * (n - (887 - 886)) / (355 - 353) + (421 - 420);
    while (pai = pai - 1) {
        i = 814 - 813;
        while (i < UIXw4msyzK -(632 - 631)) {
            if (zEiXUKZoY[i] < zEiXUKZoY[i + (887 - 886)]) {
                mid = zEiXUKZoY[i];
                zEiXUKZoY[i] = zEiXUKZoY[i + 1];
                zEiXUKZoY[i + 1] = mid;
                eTDIowmXlK = J[i];
                J[i] = J[i + 1];
                J[i + 1] = eTDIowmXlK;
                eTDIowmXlK = h7wndsAe[i];
                h7wndsAe[i] = h7wndsAe[i + 1];
                h7wndsAe[i + 1] = eTDIowmXlK;
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= n * (n - 1) / 2) {
            zEiXUKZoY[i] = sqrt (zEiXUKZoY[i]);
            cout << "(" << X[h7wndsAe[i]] << "," << Y[h7wndsAe[i]] << "," << Z[h7wndsAe[i]] << ")-(" << X[J[i]] << "," << Y[J[i]] << "," << Z[J[i]] << ")=" << fixed << setprecision (2) << zEiXUKZoY[i] << endl;
            i++;
        };
    }
    return (57 - 57);
}

