struct   uCp7dSNrKg {
    int qTwpjxVuv [4];
    int DxPa1okN48tM [4];
    double  nNFWZgY3zR;
}
uCp7dSNrKg [6000];

int main () {
    int n, WS6sE2o [11] [4], oiwyYx5I86S, bVTKXHRjvNk, t = 0;
    cin >> n;
    for (oiwyYx5I86S = 1; n >= oiwyYx5I86S; oiwyYx5I86S = oiwyYx5I86S + 1) {
        bVTKXHRjvNk = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (3 >= bVTKXHRjvNk) {
            cin >> WS6sE2o[oiwyYx5I86S][bVTKXHRjvNk];
            bVTKXHRjvNk = bVTKXHRjvNk + 1;
        };
    }
    {
        oiwyYx5I86S = 1;
        while (n - 1 >= oiwyYx5I86S) {
            for (bVTKXHRjvNk = oiwyYx5I86S + 1; n >= bVTKXHRjvNk; bVTKXHRjvNk = bVTKXHRjvNk + 1) {
                t = t + 1;
                uCp7dSNrKg[t].qTwpjxVuv[1] = WS6sE2o[oiwyYx5I86S][1];
                uCp7dSNrKg[t].qTwpjxVuv[(328 - 326)] = WS6sE2o[oiwyYx5I86S][2];
                uCp7dSNrKg[t].qTwpjxVuv[3] = WS6sE2o[oiwyYx5I86S][3];
                uCp7dSNrKg[t].DxPa1okN48tM[1] = WS6sE2o[bVTKXHRjvNk][1];
                uCp7dSNrKg[t].DxPa1okN48tM[2] = WS6sE2o[bVTKXHRjvNk][2];
                uCp7dSNrKg[t].DxPa1okN48tM[3] = WS6sE2o[bVTKXHRjvNk][3];
                uCp7dSNrKg[t].nNFWZgY3zR = sqrt (pow (WS6sE2o[oiwyYx5I86S][1] - WS6sE2o[bVTKXHRjvNk][1], 2.0) + pow (WS6sE2o[oiwyYx5I86S][2] - WS6sE2o[bVTKXHRjvNk][2], 2.0) + pow (WS6sE2o[oiwyYx5I86S][3] - WS6sE2o[bVTKXHRjvNk][3], 2.0));
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            oiwyYx5I86S = oiwyYx5I86S + 1;
        };
    }
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
    {
        oiwyYx5I86S = 1;
        while (oiwyYx5I86S <= t - 1) {
            for (bVTKXHRjvNk = 1; bVTKXHRjvNk <= t - oiwyYx5I86S; bVTKXHRjvNk++) {
                if (uCp7dSNrKg[bVTKXHRjvNk].nNFWZgY3zR < uCp7dSNrKg[bVTKXHRjvNk + 1].nNFWZgY3zR) {
                    uCp7dSNrKg[0] = uCp7dSNrKg[bVTKXHRjvNk];
                    uCp7dSNrKg[bVTKXHRjvNk] = uCp7dSNrKg[bVTKXHRjvNk + 1];
                    uCp7dSNrKg[bVTKXHRjvNk + 1] = uCp7dSNrKg[0];
                };
            }
            oiwyYx5I86S = oiwyYx5I86S + 1;
        };
    }
    {
        oiwyYx5I86S = 1;
        while (oiwyYx5I86S <= t) {
            cout << "(" << uCp7dSNrKg[oiwyYx5I86S].qTwpjxVuv[1] << "," << uCp7dSNrKg[oiwyYx5I86S].qTwpjxVuv[2] << "," << uCp7dSNrKg[oiwyYx5I86S].qTwpjxVuv[3] << ")" << "-";
            cout << "(" << uCp7dSNrKg[oiwyYx5I86S].DxPa1okN48tM[1] << "," << uCp7dSNrKg[oiwyYx5I86S].DxPa1okN48tM[2] << "," << uCp7dSNrKg[oiwyYx5I86S].DxPa1okN48tM[3] << ")" << "=";
            cout << fixed << setprecision (2) << uCp7dSNrKg[oiwyYx5I86S].nNFWZgY3zR << endl;
            oiwyYx5I86S = oiwyYx5I86S + 1;
        };
    }
    return 0;
}

