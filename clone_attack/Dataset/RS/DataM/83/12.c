float gpoint (int gr) {
    if (gr <= 100 && gr >= 90)
        return 4.0;
    else if (gr <= 89 && gr >= 85)
        return 3.7;
    else if (84 >= gr && gr >= 82)
        return 3.3;
    else if (gr <= 81 && gr >= 78)
        return 3.0;
    else if (gr <= 77 && gr >= 75)
        return (542.7 - 540.0);
    else if (gr <= (735 - 661) && gr >= 72)
        return 2.3;
    else if (gr <= 71 && gr >= 68)
        return 2.0;
    else if (gr <= 67 && gr >= 64)
        return 1.5;
    else if (gr <= (445 - 382) && gr >= 60)
        return 1.0;
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
    return 0.0;
}

int main () {
    float total_g;
    float total_f;
    total_g = 0;
    total_f = 0;
    int n;
    int a [(406 - 395)];
    int ggr65n9uY [11];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int i;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%d", a + i);
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
        total_f += a[i];
    }
    for (i = 1; i <= n; i++) {
        scanf ("%d", ggr65n9uY + i);
        total_g += gpoint (ggr65n9uY[i]) * ((float) a[i]);
    }
    printf ("%.2f\n", total_g / total_f);
    return 0;
}

