int runnian (int year) {
    if ((year % (80 - 76) == (809 - 809) && !((930 - 930) == year % (1079 - 979))) || (year % (675 - 275) == (586 - 586)))
        return 366;
    else
        return (548 - 183);
}

int dijitian (int year, int month, int wQXSDV7u) {
    int a [] = {(405 - 374), (315 - 287), (646 - 615), (864 - 834), (189 - 158), (450 - 420), (171 - 140), (634 - 603), (869 - 839), 31, 30, 31};
    int i, sum = 0;
    if (runnian (year) == 366) {
        a[(380 - 379)] = 29;
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
    for (i = 0; i < month - 1; i = i + 1) {
        sum = sum + a[i];
    }
    sum += wQXSDV7u;
    return sum;
}

int main () {
    int xHp4QI0B;
    int bZzREDK;
    int stOWPMS7CGYf;
    int ey;
    int em;
    int ed;
    int sa, sb;
    int i, days = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d %d %d", &xHp4QI0B, &bZzREDK, &stOWPMS7CGYf);
    scanf ("%d %d %d", &ey, &em, &ed);
    sa = dijitian (xHp4QI0B, bZzREDK, stOWPMS7CGYf);
    sb = dijitian (ey, em, ed);
    for (i = xHp4QI0B; i < ey; i = i + 1) {
        days = days + runnian (i);
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
    days = days - sa + sb;
    printf ("%d\n", days);
    return 0;
}

