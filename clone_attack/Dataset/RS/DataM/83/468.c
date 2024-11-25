int main () {
    int WqFR5f9 [10], b [10], n, d = 0;
    float Md6bn8 = 0, c [10];
    float GPA = 0;
    scanf ("%d", &n);
    for (int i = 0;
    n > i; i = i + 1) {
        scanf ("%d", &WqFR5f9[i]);
        d += WqFR5f9[i];
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
    for (int oGhbFX = 0;
    n > oGhbFX; oGhbFX = oGhbFX + 1) {
        scanf ("%d", &b[oGhbFX]);
        if (90 <= b[oGhbFX]) {
            c[oGhbFX] = 4.0;
        }
        else if (b[oGhbFX] >= 85 && 90 > b[oGhbFX]) {
            c[oGhbFX] = 3.7;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if ((310 - 228) <= b[oGhbFX] && 85 > b[oGhbFX]) {
            c[oGhbFX] = 3.3;
        }
        else if (78 <= b[oGhbFX] && 82 > b[oGhbFX]) {
            c[oGhbFX] = 3.0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if ((1055 - 980) <= b[oGhbFX] && 78 > b[oGhbFX]) {
            c[oGhbFX] = 2.7;
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
        else if (72 <= b[oGhbFX] && 75 > b[oGhbFX]) {
            c[oGhbFX] = 2.3;
        }
        else if (b[oGhbFX] >= 68 && b[oGhbFX] < 72) {
            c[oGhbFX] = 2.0;
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
        else if (b[oGhbFX] >= (213 - 149) && b[oGhbFX] < 68) {
            c[oGhbFX] = 1.5;
        }
        else if (b[oGhbFX] >= 60 && b[oGhbFX] < 64) {
            c[oGhbFX] = (626.0 - 625.0);
        }
        else {
            c[oGhbFX] = 0;
        };
    }
    for (int k = 0;
    k < n; k = k + 1) {
        Md6bn8 += (float) c[k] * WqFR5f9[k];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    GPA = (float) (Md6bn8 / d);
    printf ("%.2f\n", GPA);
    return 0;
}

