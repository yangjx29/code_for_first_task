struct   student {
    char name [20];
    int final;
    int IW1sKAmiT3D;
    char leader;
    char vHXyWwdr;
    int rJOrV1WqHND;
    int total;
};
int main () {
    int n, i, pWHoSU1Ph8, b, c, d, e, TOTAL;
    struct   student stu [(918 - 818)];
    struct   student m;
    scanf ("%d", &n);
    for (i = (402 - 402); n > i; i++) {
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].final, &stu[i].IW1sKAmiT3D, &stu[i].leader, &stu[i].vHXyWwdr, &stu[i].rJOrV1WqHND);
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
    TOTAL = (845 - 845);
    {
        i = 415 - 415;
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
        while (n > i) {
            pWHoSU1Ph8 = (926 - 926);
            if ((914 - 834) < stu[i].final && (51 - 50) <= stu[i].rJOrV1WqHND)
                pWHoSU1Ph8 = (8955 - 955);
            b = (446 - 446);
            if ((1031 - 946) < stu[i].final && (441 - 361) < stu[i].IW1sKAmiT3D)
                b = 4000;
            c = (225 - 225);
            if (90 < stu[i].final)
                c = 2000;
            d = 0;
            if (stu[i].final > (479 - 394) && stu[i].vHXyWwdr == 'Y')
                d = (1796 - 796);
            e = 0;
            if (stu[i].IW1sKAmiT3D > (521 - 441) && stu[i].leader == 'Y')
                e = (1660 - 810);
            stu[i].total = pWHoSU1Ph8 + b + c + d + e;
            TOTAL = TOTAL +stu[i].total;
            i = i + 1;
        };
    }
    {
        i = 919 - 918;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i >= 0) {
            if (stu[i - (969 - 968)].total < stu[i].total) {
                m = stu[i - (666 - 665)];
                stu[i - (973 - 972)] = stu[i];
                stu[i] = m;
            }
            i--;
        };
    }
    printf ("%s\n%d\n%d", stu[0].name, stu[0].total, TOTAL);
    return 0;
}

