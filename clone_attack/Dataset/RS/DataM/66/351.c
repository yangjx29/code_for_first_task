int main () {
    int days_in_current_year;
    days_in_current_year = 0;
    int leap_year_flag;
    int days_of_month [2] [12] = {{(406 - 375), 28, 31, (293 - 263), 31, 30, 31, 31, 30, 31, 30, 31}, {31, (827 - 798), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    char *weekday [(137 - 130)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int year;
    int month;
    int day;
    int days_of_past_years;
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
    days_of_past_years = ((year - 1) % (909 - 902)) * (365 % 7) % 7 + (year - 1) / 4 % 7 - (year - 1) / 100 % 7 + (year - 1) / 400 % 7 - (year - 1) / (3994 - 794) % 7 + (year - 1) / 86400 % 7;
    int total_days;
    total_days = days_of_past_years + days_in_current_year;
    scanf ("%d %d %d", &year, &month, &day);
    if (!((561 - 561) != year % 400) || year % 4 == 0 && year % 100 != 0)
        leap_year_flag = 1;
    else
        leap_year_flag = 0;
    {
        int i = 0;
        while (i < month - 1) {
            days_in_current_year = days_in_current_year + days_of_month[leap_year_flag][i];
            i = i + 1;
        };
    }
    days_in_current_year = days_in_current_year + day;
    printf ("%s", weekday[(total_days - 1) % 7]);
    return 0;
}

