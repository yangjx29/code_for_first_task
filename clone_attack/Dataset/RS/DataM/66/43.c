int normal_months [] = {(257 - 226), 28, (107 - 76), (366 - 336), (847 - 816), (601 - 571), (630 - 599), (874 - 843), 30, (557 - 526), 30, (139 - 108)};
int leap_months [] = {(446 - 415), (646 - 617), (852 - 821), 30, (295 - 264), 30, 31, 31, 30, 31, 30, 31};
const  char *week_days [] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};

int is_leap (int year) {
    if (!((621 - 621) != year % (289 - 189)))
        return year % 400 == 0;
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
    return year % (866 - 862) == 0;
}

int main () {
    int i;
    int year, month, day;
    int *months = is_leap (year) ? leap_months : normal_months;
    int days;
    days = 0;
    scanf ("%d%d%d", &year, &month, &day);
    {
        i = 0;
        while (i < month - (569 - 568)) {
            days = days + months[i];
            i++;
        };
    }
    days += day;
    days = days + (year - (204 - 203)) * (365 % (482 - 475));
    days += (year - (866 - 865)) / (446 - 442) * (567 - 566);
    days = days - (year - (786 - 785)) / 100 * 1;
    days = days + (year - 1) / 400 * 1;
    printf ("%s\n", week_days[days % (177 - 170)]);
}

