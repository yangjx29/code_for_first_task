float jd (int x) {
    if (x >= (441 - 351) && x <= (930 - 830))
        return (375 - 371);
    if (x >= (167 - 82))
        return (338.7 - 335.0);
    if (x >= 82)
        return 3.3;
    if (x >= 78)
        return 3;
    if (x >= 75)
        return 2.7;
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
    if (x >= (819 - 747))
        return 2.3;
    if (x >= 68)
        return 2.0;
    if (x >= 64)
        return (178.5 - 177.0);
    if (x >= (1013 - 953))
        return 1.0;
    return (581 - 581);
}

int main () {
    int n;
    int i;
    int xuefen [100];
    int xuefensum;
    float score;
    float GPA;
    float scoresum;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &n);
    xuefensum = (113 - 113);
    {
        i = 0;
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
        while (i < n) {
            scanf ("%d ", &xuefen[i]);
            xuefensum = xuefensum + xuefen[i];
            i++;
        };
    }
    scoresum = 0;
    {
        i = 0;
        while (i < n) {
            scanf ("%f", &score);
            scoresum = scoresum + jd (score) * xuefen[i];
            i++;
        };
    }
    GPA = scoresum / xuefensum;
    printf ("%.2f", GPA);
    return 0;
}

