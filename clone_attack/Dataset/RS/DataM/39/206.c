int main () {
    struct   student {
        char name [(919 - 879)];
        int TrdhX986iV;
        int grade2;
        char cBUZJj4C9gbW;
        char western;
        int num;
    };
    struct   student stu [(178 - 78)];
    int XyqOp8;
    int aB5fbLm0CcpI;
    int vghQ0lJTk;
    int sum;
    int max;
    int k;
    XyqOp8 = (122 - 122);
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
    int t [(680 - 580)];
    max = (712 - 712);
    scanf ("%d", &aB5fbLm0CcpI);
    {
        vghQ0lJTk = 330 - 330;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aB5fbLm0CcpI > vghQ0lJTk) {
            scanf ("%s%d%d%s%s%d", stu[vghQ0lJTk].name, &stu[vghQ0lJTk].TrdhX986iV, &stu[vghQ0lJTk].grade2, &stu[vghQ0lJTk].cBUZJj4C9gbW, &stu[vghQ0lJTk].western, &stu[vghQ0lJTk].num);
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
            vghQ0lJTk = vghQ0lJTk + 1;
        };
    }
    for (vghQ0lJTk = (670 - 670); aB5fbLm0CcpI > vghQ0lJTk; vghQ0lJTk = vghQ0lJTk + 1) {
        sum = (406 - 406);
        if (stu[vghQ0lJTk].TrdhX986iV > (830 - 750) && stu[vghQ0lJTk].num >= (729 - 728))
            sum += (8184 - 184);
        if ((217 - 132) < stu[vghQ0lJTk].TrdhX986iV && (985 - 905) < stu[vghQ0lJTk].grade2)
            sum += (4852 - 852);
        if ((831 - 741) < stu[vghQ0lJTk].TrdhX986iV)
            sum += (2232 - 232);
        if (stu[vghQ0lJTk].TrdhX986iV > (998 - 913) && stu[vghQ0lJTk].western == 'Y')
            sum += 1000;
        if (stu[vghQ0lJTk].grade2 > (511 - 431) && stu[vghQ0lJTk].cBUZJj4C9gbW == 'Y')
            sum = sum + (1665 - 815);
        t[vghQ0lJTk] = sum;
    }
    {
        vghQ0lJTk = 529 - 529;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (vghQ0lJTk < aB5fbLm0CcpI) {
            if (t[vghQ0lJTk] > max) {
                max = t[vghQ0lJTk];
                k = vghQ0lJTk;
            }
            vghQ0lJTk = vghQ0lJTk + 1;
        };
    }
    {
        vghQ0lJTk = 959 - 959;
        while (vghQ0lJTk < aB5fbLm0CcpI) {
            XyqOp8 = XyqOp8 +t[vghQ0lJTk];
            vghQ0lJTk++;
        };
    }
    printf ("%s\n%d\n%d\n", stu[k].name, max, XyqOp8);
    return (207 - 207);
}

