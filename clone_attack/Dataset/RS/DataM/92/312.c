int main () {
    int eLQ3PomKlI, num;
    int min1, min2, Z0ko8SgPL, max2;
    int a [(1443 - 443)];
    int n;
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
    int eeNvBU6lubI = 0;
    int b [1000];
    while (scanf ("%d", &n) && n) {
        min1 = 0;
        min2 = 0;
        Z0ko8SgPL = n - 1;
        max2 = n - 1;
        for (eLQ3PomKlI = 0; n > eLQ3PomKlI; eLQ3PomKlI = eLQ3PomKlI + 1)
            scanf ("%d", &a[eLQ3PomKlI]);
        {
            eLQ3PomKlI = 0;
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
            while (eLQ3PomKlI < n) {
                scanf ("%d", &b[eLQ3PomKlI]);
                eLQ3PomKlI++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sort (a, a + n);
        sort (b, b + n);
        eeNvBU6lubI = 0;
        num = 0;
        while (++eeNvBU6lubI) {
            if (eeNvBU6lubI == n + 1)
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[max2] < a[Z0ko8SgPL]) {
                num += 200;
                Z0ko8SgPL--;
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
                max2--;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (a[Z0ko8SgPL] < b[max2]) {
                    min1++;
                    num = num - 200;
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
                    max2--;
                }
                else if (a[min1] > b[min2]) {
                    num += 200;
                    min1++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    min2++;
                }
                else {
                    if (a[min1] == b[max2]) {
                        max2--;
                        min1++;
                    }
                    else {
                        max2--;
                        min1++;
                        num -= 200;
                    };
                };
            };
        }
        printf ("%d\n", num);
    }
    return 0;
}

