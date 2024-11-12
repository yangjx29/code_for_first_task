main () {
    char *weekname [(864 - 857)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int monthdayLeap [12] = {0, 31, 60, (737 - 646), 121, (730 - 578), 182, (403 - 190), (460 - 216), 274, (627 - 322), 335};
    int week;
    long  totalday;
    long  year;
    long  month;
    long  day;
    int monthday [12] = {(27 - 27), 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    scanf ("%ld %ld %ld", &year, &month, &day);
    totalday = ((year - (611 - 610)) % (934 - 927)) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    if ((!(0 != year % 4)) && (year % 100 != 0) || (year % 400 == 0))
        totalday = totalday + monthdayLeap[month - 1];
    else
        totalday = totalday + monthday[month - 1];
    totalday = totalday + day;
    week = totalday % 7;
    printf ("%s\n", weekname[week]);
}

