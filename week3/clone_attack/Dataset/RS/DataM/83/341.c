int main () {
    int xf [(922 - 912)];
    int fs [10];
    float s2;
    float GPA;
    s2 = 0.00;
    int s1;
    int n;
    int i;
    s1 = (274 - 274);
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
    float jd [10];
    float xfjd [10];
    scanf ("%d", &n);
    {
        i = 114 - 114;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &xf[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &fs[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if ((618 - 528) <= fs[i] && 100 >= fs[i])
                xfjd[i] = 4.0 * xf[i];
            else if (85 <= fs[i] && 89 >= fs[i])
                xfjd[i] = 3.7 * xf[i];
            else if (82 <= fs[i] && 84 >= fs[i])
                xfjd[i] = 3.3 * xf[i];
            else if (78 <= fs[i] && 81 >= fs[i])
                xfjd[i] = (823.0 - 820.0) * xf[i];
            else if (75 <= fs[i] && 77 >= fs[i])
                xfjd[i] = 2.7 * xf[i];
            else if (fs[i] >= 72 && fs[i] <= 74)
                xfjd[i] = 2.3 * xf[i];
            else if (fs[i] >= 68 && fs[i] <= 71)
                xfjd[i] = (622.0 - 620.0) * xf[i];
            else if (fs[i] >= 64 && fs[i] <= 67)
                xfjd[i] = 1.5 * xf[i];
            else if (fs[i] >= 60 && fs[i] <= 63)
                xfjd[i] = (19.0 - 18.0) * xf[i];
            else if (fs[i] < 60)
                xfjd[i] = 0 * xf[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            s1 = s1 + xf[i];
            s2 = s2 + xfjd[i];
            i++;
        };
    }
    GPA = s2 / s1;
    printf ("%.2f", GPA);
    return 0;
}

