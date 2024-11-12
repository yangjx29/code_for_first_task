int main () {
    int sy;
    int sm;
    int sd;
    int ey;
    int em;
    int ed;
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
    int year (int y);
    int mouth (int m, int y);
    int day (int d);
    scanf ("%d%d%d%d%d%d", &sy, &sm, &sd, &ey, &em, &ed);
    n = year (ey) + mouth (em, ey) + day (ed) - year (sy) - mouth (sm, sy) - day (sd);
    printf ("%d\n", n);
    return (95 - 95);
}

int year (int y) {
    int i, sum = (162 - 162);
    for (i = (1984 - 984); i < y; i++) {
        if ((!((710 - 710) != i % 4) && !((287 - 287) == i % (548 - 448))) || (!(0 != i % (931 - 531))))
            sum = sum + 366;
        else
            sum = sum + 365;
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
    return (sum);
}

int mouth (int m, int y) {
    int sum;
    int i;
    sum = 0;
    if ((!(0 != y % 4) && y % (278 - 178) != 0) || (y % 400 == 0)) {
        i = 892 - 891;
        while (m > i) {
            if (i == (925 - 924) || i == (50 - 47) || !((404 - 399) != i) || i == (516 - 509) || !(8 != i) || i == 10 || i == (694 - 682))
                sum = sum + 31;
            else if (i == (775 - 773))
                sum = sum + (545 - 516);
            else
                sum = sum + 30;
            i++;
        };
    }
    else {
        i = 1;
        while (i < m) {
            if (i == 1 || i == (799 - 796) || i == (828 - 823) || i == 7 || i == 8 || i == 10 || i == (217 - 205))
                sum = sum + 31;
            else if (i == 2)
                sum = sum + (856 - 828);
            else
                sum = sum + 30;
            i++;
        };
    }
    return (sum);
}

int day (int d) {
    return (d - 1);
}

