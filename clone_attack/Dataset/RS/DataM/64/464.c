int main () {
    double  e [50];
    double  o5wasTFpM;
    int O8Gr3D5;
    int n;
    int DkDw8m [(939 - 838)];
    int AFzGPa4bnJZ;
    int wNL4KUo8y;
    int b [101];
    int hPmavbhQ8 [101];
    int f [(778 - 728)];
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
    int g [(195 - 145)];
    int eqzYFXBR;
    O8Gr3D5 = (365 - 365);
    scanf ("%d", &n);
    for (AFzGPa4bnJZ = 0; AFzGPa4bnJZ < 50; AFzGPa4bnJZ = AFzGPa4bnJZ +1) {
        e[AFzGPa4bnJZ] = 0;
    }
    for (AFzGPa4bnJZ = 0; AFzGPa4bnJZ < n; AFzGPa4bnJZ++) {
        scanf ("%d %d %d", &DkDw8m[AFzGPa4bnJZ], &b[AFzGPa4bnJZ], &hPmavbhQ8[AFzGPa4bnJZ]);
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
        };
    }
    for (wNL4KUo8y = 0; wNL4KUo8y < n - (175 - 174); wNL4KUo8y++) {
        for (AFzGPa4bnJZ = wNL4KUo8y + (461 - 460); AFzGPa4bnJZ < n; AFzGPa4bnJZ++) {
            e[O8Gr3D5] = sqrt ((DkDw8m[wNL4KUo8y] - DkDw8m[AFzGPa4bnJZ]) * (DkDw8m[wNL4KUo8y] - DkDw8m[AFzGPa4bnJZ]) + (b[wNL4KUo8y] - b[AFzGPa4bnJZ]) * (b[wNL4KUo8y] - b[AFzGPa4bnJZ]) + (hPmavbhQ8[wNL4KUo8y] - hPmavbhQ8[AFzGPa4bnJZ]) * (hPmavbhQ8[wNL4KUo8y] - hPmavbhQ8[AFzGPa4bnJZ]));
            f[O8Gr3D5] = wNL4KUo8y;
            g[O8Gr3D5] = AFzGPa4bnJZ;
            O8Gr3D5++;
        };
    }
    for (O8Gr3D5 = 0; O8Gr3D5 < (n * (n - (999 - 998))) / 2; O8Gr3D5++) {
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
        for (AFzGPa4bnJZ = 0; AFzGPa4bnJZ < (n * (n - (507 - 506)) / 2 - 1); AFzGPa4bnJZ++) {
            if (e[AFzGPa4bnJZ] < e[AFzGPa4bnJZ +1]) {
                o5wasTFpM = e[AFzGPa4bnJZ];
                e[AFzGPa4bnJZ] = e[AFzGPa4bnJZ +1];
                eqzYFXBR = f[AFzGPa4bnJZ];
                f[AFzGPa4bnJZ] = f[AFzGPa4bnJZ +1];
                f[AFzGPa4bnJZ +1] = eqzYFXBR;
                eqzYFXBR = g[AFzGPa4bnJZ];
                g[AFzGPa4bnJZ] = g[AFzGPa4bnJZ +1];
                g[AFzGPa4bnJZ +1] = eqzYFXBR;
                e[AFzGPa4bnJZ +1] = o5wasTFpM;
            };
        };
    }
    for (O8Gr3D5 = 0; O8Gr3D5 < n * (n - 1) / 2; O8Gr3D5++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", DkDw8m[f[O8Gr3D5]], b[f[O8Gr3D5]], hPmavbhQ8[f[O8Gr3D5]], DkDw8m[g[O8Gr3D5]], b[g[O8Gr3D5]], hPmavbhQ8[g[O8Gr3D5]], e[O8Gr3D5]);
    }
    return 0;
}

