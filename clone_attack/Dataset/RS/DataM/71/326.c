int ren (int x) {
    if (!((515 - 515) != (x % 400)) || (!((329 - 329) == (x % 100)) && !((949 - 949) != (x % 4))))
        return 1;
    else
        return (234 - 234);
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

int dijitian (int year, int mon, int day) {
    int aG80So4Zcs, wVUTD4f = 0;
    if (ren (year)) {
        aG80So4Zcs = 1;
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
        while (mon > aG80So4Zcs) {
            if (!(1 != aG80So4Zcs) || !((248 - 245) != aG80So4Zcs) || !(5 != aG80So4Zcs) || !(7 != aG80So4Zcs) || !(8 != aG80So4Zcs) || !((423 - 413) != aG80So4Zcs) || !((927 - 915) != aG80So4Zcs))
                wVUTD4f += 31;
            else if (!(4 != aG80So4Zcs) || !(6 != aG80So4Zcs) || !(9 != aG80So4Zcs) || !(11 != aG80So4Zcs))
                wVUTD4f = wVUTD4f + 30;
            else
                wVUTD4f += 29;
            aG80So4Zcs = aG80So4Zcs + 1;
        };
    }
    else {
        for (aG80So4Zcs = 1; mon > aG80So4Zcs; aG80So4Zcs = aG80So4Zcs + 1) {
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
            if (!(1 != aG80So4Zcs) || aG80So4Zcs == 3 || aG80So4Zcs == 5 || aG80So4Zcs == 7 || aG80So4Zcs == 8 || aG80So4Zcs == 10 || aG80So4Zcs == 12)
                wVUTD4f += 31;
            else {
                if (aG80So4Zcs == 4 || aG80So4Zcs == 6 || aG80So4Zcs == 9 || aG80So4Zcs == 11)
                    wVUTD4f += 30;
                else
                    wVUTD4f = wVUTD4f + 28;
            };
        };
    }
    wVUTD4f += day;
    return wVUTD4f;
}

int main () {
    int n;
    int aG80So4Zcs;
    int j;
    int x [210] [3] = {0};
    int a;
    int b;
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
    scanf ("%d", &n);
    {
        aG80So4Zcs = 0;
        while (aG80So4Zcs < n) {
            scanf ("%d%d%d", &x[aG80So4Zcs][0], &x[aG80So4Zcs][1], &x[aG80So4Zcs][2]);
            aG80So4Zcs = aG80So4Zcs + 1;
        };
    }
    {
        aG80So4Zcs = 0;
        while (aG80So4Zcs < n) {
            a = dijitian (x[aG80So4Zcs][0], x[aG80So4Zcs][1], 1);
            b = dijitian (x[aG80So4Zcs][0], x[aG80So4Zcs][2], 1);
            aG80So4Zcs++;
            if (a > b) {
                if ((a - b) % 7 == 0)
                    ;
                else
                    ;
            }
            else {
                if ((b - a) % 7 == 0)
                    ;
                else
                    ;
            };
        };
    }
    return 0;
}

