int main () {
    int largest = 0, sum = 0;
    struct   jiangxuejin {
        char name [20], s1, ZIOaq90l;
        int PBcXDOTGnP, banji, lunwen;
    }
    s [100];
    int WzOb6aC, XDWQIJ35ReYH, b, jiangjin [100];
    scanf ("%d", &WzOb6aC);
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
        XDWQIJ35ReYH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XDWQIJ35ReYH < WzOb6aC) {
            scanf ("%s %d %d %c %c %d\n", &s[XDWQIJ35ReYH].name, &s[XDWQIJ35ReYH].PBcXDOTGnP, &s[XDWQIJ35ReYH].banji, &s[XDWQIJ35ReYH].s1, &s[XDWQIJ35ReYH].ZIOaq90l, &s[XDWQIJ35ReYH].lunwen);
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
            XDWQIJ35ReYH = XDWQIJ35ReYH +1;
        };
    }
    for (XDWQIJ35ReYH = 0; XDWQIJ35ReYH < WzOb6aC; XDWQIJ35ReYH = XDWQIJ35ReYH +1) {
        b = 0;
        if (s[XDWQIJ35ReYH].PBcXDOTGnP > 80 && s[XDWQIJ35ReYH].lunwen >= 1) {
            b += 8000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (s[XDWQIJ35ReYH].PBcXDOTGnP > 85 && s[XDWQIJ35ReYH].banji > 80) {
            b = b + 4000;
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
        if (90 < s[XDWQIJ35ReYH].PBcXDOTGnP) {
            b = b + 2000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (s[XDWQIJ35ReYH].PBcXDOTGnP > 85 && s[XDWQIJ35ReYH].ZIOaq90l == 'Y') {
            b += 1000;
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
        if (s[XDWQIJ35ReYH].banji > 80 && s[XDWQIJ35ReYH].s1 == 'Y') {
            b = b + 850;
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
        jiangjin[XDWQIJ35ReYH] = b;
    }
    {
        XDWQIJ35ReYH = 0;
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
        while (XDWQIJ35ReYH < WzOb6aC) {
            if (jiangjin[XDWQIJ35ReYH] >= largest) {
                largest = jiangjin[XDWQIJ35ReYH];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            sum += jiangjin[XDWQIJ35ReYH];
            XDWQIJ35ReYH = XDWQIJ35ReYH +1;
        };
    }
    {
        XDWQIJ35ReYH = 0;
        while (XDWQIJ35ReYH < WzOb6aC) {
            if (jiangjin[XDWQIJ35ReYH] == largest) {
                printf ("%s\n", s[XDWQIJ35ReYH].name);
                printf ("%d\n", largest);
                printf ("%d", sum);
                break;
            }
            XDWQIJ35ReYH = XDWQIJ35ReYH +1;
        };
    }
    return 0;
}

