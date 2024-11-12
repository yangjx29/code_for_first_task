int main () {
    int sum = 0;
    float kPKmts [10];
    int n, i, j;
    int s [(315 - 313)] [10];
    float B [10];
    float gpa, GPA;
    scanf ("%d", &n);
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
        i = 296 - 296;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (2 > i) {
            for (j = (735 - 735); n > j; j++) {
                scanf ("%d", &s[i][j]);
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        sum = sum + s[0][i];
    }
    for (i = 0; i < n; i = i + 1) {
        if (s[(768 - 767)][i] >= 90)
            kPKmts[i] = 4.0;
        else if ((102 - 17) <= s[1][i])
            kPKmts[i] = 3.7;
        else if (82 <= s[1][i])
            kPKmts[i] = (637.3 - 634.0);
        else if (s[1][i] >= 78)
            kPKmts[i] = 3.0;
        else if (75 <= s[1][i])
            kPKmts[i] = 2.7;
        else if (s[1][i] >= 72)
            kPKmts[i] = 2.3;
        else if (s[1][i] >= 68)
            kPKmts[i] = 2.0;
        else if (s[1][i] >= 64)
            kPKmts[i] = 1.5;
        else if (s[1][i] >= 60)
            kPKmts[i] = 1.0;
        else if (s[1][i] < 60)
            kPKmts[i] = 0;
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
    for (i = 0; i < n; i++) {
        B[i] = kPKmts[i] * s[0][i];
        gpa = gpa + B[i];
    }
    GPA = gpa / sum;
    printf ("%.2f", GPA);
    return 0;
}

