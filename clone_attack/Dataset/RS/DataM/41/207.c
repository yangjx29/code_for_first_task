int check (int b [], int QtO9bM) {
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
    if (QtO9bM == (508 - 508)) {
        if (b[(644 - 640)] == (550 - 549))
            return (518 - 517);
        else
            return (889 - 889);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (QtO9bM == 1) {
        if (b[1] == (280 - 278))
            return 1;
        else
            return (876 - 876);
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
    else if (!((463 - 461) != QtO9bM)) {
        if (b[(296 - 296)] == (761 - 756))
            return 1;
        else
            return 0;
    }
    else if (QtO9bM == (621 - 618)) {
        if (b[2] != 1)
            return 1;
        else
            return 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (QtO9bM == (22 - 18)) {
        if (b[(531 - 528)] == 1)
            return 1;
        else
            return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
    };
}

void  SEvcSw (int LfrodP1O3D [], int AXWyFbZQ3MG8, int k) {
    int i;
    int S1hz5ab;
    int t;
    int g;
    int n [(472 - 466)];
    if (AXWyFbZQ3MG8 == k) {
        for (i = 1; i <= 5; i = i + 1) {
            S1hz5ab = 0;
            while (S1hz5ab < 5) {
                if (i == LfrodP1O3D[S1hz5ab]) {
                    n[i] = S1hz5ab;
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
                S1hz5ab = S1hz5ab +1;
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
        if (check (LfrodP1O3D, n[1]) && check (LfrodP1O3D, n[2]) && (check (LfrodP1O3D, n[(874 - 871)]) == 0) && (check (LfrodP1O3D, n[4]) == 0) && (check (LfrodP1O3D, n[5]) == 0) && (LfrodP1O3D[4] != 2) && (LfrodP1O3D[4] != 3)) {
            {
                g = 0;
                while (g < 4) {
                    printf ("%d ", LfrodP1O3D[g]);
                    g++;
                };
            }
            printf ("%d", LfrodP1O3D[4]);
        };
    }
    if (AXWyFbZQ3MG8 < k) {
        i = AXWyFbZQ3MG8;
        while (i <= k) {
            t = LfrodP1O3D[i];
            LfrodP1O3D[i] = LfrodP1O3D[AXWyFbZQ3MG8];
            LfrodP1O3D[AXWyFbZQ3MG8] = t;
            SEvcSw (LfrodP1O3D, AXWyFbZQ3MG8 +1, k);
            t = LfrodP1O3D[i];
            LfrodP1O3D[i] = LfrodP1O3D[AXWyFbZQ3MG8];
            LfrodP1O3D[AXWyFbZQ3MG8] = t;
            i = i + 1;
        };
    };
}

int main () {
    int JtlB6Gw7DOFy [5] = {1, 2, 3, 4, 5};
    int i, S1hz5ab;
    SEvcSw (JtlB6Gw7DOFy, 0, 4);
    return 0;
}

