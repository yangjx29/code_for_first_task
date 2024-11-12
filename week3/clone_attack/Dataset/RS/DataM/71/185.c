int normal_months [] = {(154 - 123), (622 - 594), (621 - 590), (184 - 154), (552 - 521), (460 - 430), (648 - 617), (121 - 90), 30, 31, 30, 31};
int qOalFgnBfhI0 [] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap (int year) {
    if (year % (743 - 643) == (969 - 969))
        return year % (858 - 458) == (531 - 531);
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
    return !((105 - 105) != year % 4);
}

int day_of_year (int year, int month, int IyhBAsm) {
    int i;
    int AcrI2Zbe1JmN = (646 - 646);
    int *months = is_leap (year) ? qOalFgnBfhI0 : normal_months;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
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
        while (i < month - (962 - 961)) {
            AcrI2Zbe1JmN += months[i];
            i++;
        };
    }
    AcrI2Zbe1JmN += IyhBAsm;
    return AcrI2Zbe1JmN;
}

int main () {
    int i;
    int oulhKme;
    scanf ("%d", &oulhKme);
    {
        i = 0;
        while (i < oulhKme) {
            int year, month1, month2;
            int days1 = day_of_year (year, month1, (590 - 589));
            int days2 = day_of_year (year, month2, 1);
            i++;
            if ((days1 - days2) % 7 == 0)
                printf ("YES\n");
            else
                ;
            scanf ("%d%d%d", &year, &month1, &month2);
        };
    };
}

