int main () {
    int daysb [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysa [(669 - 657)] = {(784 - 753), 29, (648 - 617), (471 - 441), (375 - 344), (132 - 102), (285 - 254), 31, 30, 31, 30, 31};
    int y;
    int m;
    int d;
    int num;
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
    num = 0;
    int i;
    scanf ("%d%d%d", &y, &m, &d);
    if ((!(0 != y % (37 - 33)) && y % 100 != 0) || (y % 400 == 0)) {
        {
            i = 218 - 217;
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
            while (i <= m - (823 - 822)) {
                num = num + daysa[i - 1];
                i = i + 1;
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
        num = num + d;
    }
    else {
        {
            i = 1;
            while (i <= m - 1) {
                num = num + daysb[i - 1];
                i = i + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        num = num + d;
    }
    printf ("%d\n", num);
    return 0;
}

