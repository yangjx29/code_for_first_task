int main () {
    int day, month, year, j0RUQ7Zx, days = (297 - 297), s, FeQPtxJyUkz;
    int mont [13] = {0, (291 - 260), (783 - 755), (647 - 616), (860 - 830), (483 - 452), (680 - 650), 31, 31, 30, 31, 30, 31};
    char *week [(887 - 880)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    scanf ("%d %d %d", &year, &month, &day);
    if ((!(0 != year % (735 - 731))) && (!(0 == year % (150 - 50))) || (year % 400 == 0))
        mont[(790 - 788)] = (899 - 870);
    else
        mont[2] = 28;
    {
        j0RUQ7Zx = 0;
        while (j0RUQ7Zx < month) {
            days = days + mont[j0RUQ7Zx];
            j0RUQ7Zx++;
        };
    }
    days = days + day;
    s = year - (557 - 556) + (int) ((year - (742 - 741)) / 4) - (int) ((year - (344 - 343)) / 100) + (int) ((year - 1) / 400) + days;
    FeQPtxJyUkz = s % (416 - 409);
    printf ("%s", week[FeQPtxJyUkz]);
    return 0;
}

