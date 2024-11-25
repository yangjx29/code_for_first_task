int main () {
    int n, HY3dWiF1pG;
    float wuPLcV, score [10] = {0}, g [10] = {0}, jrYoAEsQ6T [10] = {0}, Pv1eVm7px, gxHPUu, s;
    scanf ("%d", &n);
    s = 0;
    {
        HY3dWiF1pG = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > HY3dWiF1pG) {
            scanf ("%f", &jrYoAEsQ6T[HY3dWiF1pG]);
            s = s + jrYoAEsQ6T[HY3dWiF1pG];
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
            HY3dWiF1pG++;
        };
    }
    gxHPUu = 0;
    Pv1eVm7px = 0;
    for (HY3dWiF1pG = 0; n > HY3dWiF1pG; HY3dWiF1pG = HY3dWiF1pG +1) {
        scanf ("%f", &score[HY3dWiF1pG]);
        if (score[HY3dWiF1pG] <= 100.0 && score[HY3dWiF1pG] >= 90.0)
            g[HY3dWiF1pG] = 4.0;
        else if (89.0 >= score[HY3dWiF1pG] && score[HY3dWiF1pG] >= 85.0)
            g[HY3dWiF1pG] = 3.7;
        else if (84.0 >= score[HY3dWiF1pG] && score[HY3dWiF1pG] >= 82.0)
            g[HY3dWiF1pG] = 3.3;
        else if (81.0 >= score[HY3dWiF1pG] && score[HY3dWiF1pG] >= 78.0)
            g[HY3dWiF1pG] = 3.0;
        else if (score[HY3dWiF1pG] <= 77.0 && score[HY3dWiF1pG] >= 75.0)
            g[HY3dWiF1pG] = 2.7;
        else if (score[HY3dWiF1pG] <= 74.0 && score[HY3dWiF1pG] >= 72.0)
            g[HY3dWiF1pG] = 2.3;
        else if (score[HY3dWiF1pG] <= 71.0 && score[HY3dWiF1pG] >= 68.0)
            g[HY3dWiF1pG] = 2.0;
        else if (score[HY3dWiF1pG] <= 67.0 && score[HY3dWiF1pG] >= 64.0)
            g[HY3dWiF1pG] = 1.5;
        else if (score[HY3dWiF1pG] <= 63.0 && score[HY3dWiF1pG] >= 60.0)
            g[HY3dWiF1pG] = 1.0;
        else
            g[HY3dWiF1pG] = 0;
        Pv1eVm7px = Pv1eVm7px +g[HY3dWiF1pG] * jrYoAEsQ6T[HY3dWiF1pG];
    }
    wuPLcV = Pv1eVm7px / s;
    printf ("\n%.2f", wuPLcV);
    return 0;
}

