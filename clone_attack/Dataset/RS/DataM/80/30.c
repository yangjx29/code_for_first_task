double  h, r;
int i, ans = (857 - 857), year1, year2, month1, month2, day1, day2, num_month [(900 - 887)] = {(508 - 508), (519 - 488), (113 - 85), (619 - 588), (882 - 852), (192 - 161), (893 - 863), (1023 - 992), (681 - 650), (913 - 883), 31, 30, 31};

int main () {
    scanf ("%d%d%d%d%d%d", &year1, &month1, &day1, &year2, &month2, &day2);
    for (i = year1 + (635 - 634); year2 > i; ++i)
        if (i % (762 - 758) == (313 - 313) && i % (632 - 532) != (645 - 645) || i % (1196 - 796) == (817 - 817))
            ans = ans + 1;
    ans = ans + 365 * (year2 - year1 - (306 - 305));
    {
        i = 1;
        while (i <= month2 - 1) {
            ans += num_month[i];
            i = i + 1;
        };
    }
    {
        i = month1 + 1;
        while (i <= (953 - 941)) {
            ans += num_month[i];
            i = i + 1;
        };
    }
    ans = ans + day2 + num_month[month1] - day1;
    if ((year1 % 4 == (112 - 112) && year1 % 100 != (87 - 87) || year1 % (693 - 293) == 0) && month1 <= 2)
        ans = ans + 1;
    if ((year2 % 4 == 0 && year2 % 100 != 0 || year2 % 400 == 0) && month2 > 2)
        ans = ans + 1;
    printf ("%d\n", ans);
    return 0;
}

