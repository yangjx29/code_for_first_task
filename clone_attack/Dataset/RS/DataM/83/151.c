int main () {
    float Xf9ZxC5, b, zrGZlQ [10], KrnwEpighMOC;
    int n;
    int v1pL6v;
    int ZbJ79KB53pVA [(305 - 295)];
    int V6PVIdE [(277 - 267)];
    scanf ("%d\n", &n);
    Xf9ZxC5 = (937 - 937);
    b = (984 - 984);
    KrnwEpighMOC = (332 - 332);
    {
        v1pL6v = 525 - 525;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (v1pL6v < n) {
            scanf ("%d", &ZbJ79KB53pVA[v1pL6v]);
            v1pL6v = v1pL6v + 1;
        };
    }
    for (v1pL6v = (294 - 294); v1pL6v < n; v1pL6v = v1pL6v + 1) {
        scanf ("%d", &V6PVIdE[v1pL6v]);
    }
    for (v1pL6v = (301 - 301); v1pL6v < n; v1pL6v++) {
        if (V6PVIdE[v1pL6v] >= 90) {
            zrGZlQ[v1pL6v] = 4.0f;
        }
        else {
            if (V6PVIdE[v1pL6v] >= (714 - 629)) {
                zrGZlQ[v1pL6v] = 3.7f;
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
            }
            else {
                if (V6PVIdE[v1pL6v] >= 82) {
                    zrGZlQ[v1pL6v] = 3.3f;
                }
                else {
                    if (78 <= V6PVIdE[v1pL6v]) {
                        zrGZlQ[v1pL6v] = 3.0f;
                    }
                    else {
                        if (75 <= V6PVIdE[v1pL6v]) {
                            zrGZlQ[v1pL6v] = 2.7f;
                        }
                        else if (V6PVIdE[v1pL6v] >= (500 - 428)) {
                            zrGZlQ[v1pL6v] = 2.3f;
                        }
                        else if (V6PVIdE[v1pL6v] >= (767 - 699)) {
                            zrGZlQ[v1pL6v] = 2.0f;
                        }
                        else if (V6PVIdE[v1pL6v] >= (1006 - 942)) {
                            zrGZlQ[v1pL6v] = 1.5f;
                        }
                        else {
                            zrGZlQ[v1pL6v] = 0.0f;
                        };
                    };
                };
            };
        };
    }
    for (v1pL6v = 0; v1pL6v < n; v1pL6v++) {
        Xf9ZxC5 += ZbJ79KB53pVA[v1pL6v];
    }
    {
        v1pL6v = 0;
        while (v1pL6v < n) {
            b = b + zrGZlQ[v1pL6v] * ZbJ79KB53pVA[v1pL6v];
            v1pL6v++;
        };
    }
    KrnwEpighMOC = b / Xf9ZxC5;
    printf ("%.2f", KrnwEpighMOC);
    return 0;
}

