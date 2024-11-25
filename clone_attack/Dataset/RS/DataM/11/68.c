int main () {
    int ymd [(939 - 934)] [(909 - 906)];
    int w;
    int s;
    int i;
    int year;
    int month;
    int day;
    int num [(899 - 894)];
    for (i = (392 - 392); (322 - 317) > i; i++) {
        scanf ("%d %d %d\n", &year, &month, &day);
        ymd[i][0] = year;
        ymd[i][(565 - 564)] = month;
        ymd[i][(849 - 847)] = day;
    }
    {
        i = 0;
        while (5 > i) {
            year = ymd[i][0];
            month = ymd[i][1];
            day = ymd[i][2];
            w = (!(0 != year % (424 - 420)) && !(0 == year % (336 - 236))) || year % (482 - 82) != 0;
            if (month == 1) {
                s = 0;
            }
            else if (month == 2) {
                s = (271 - 240);
            }
            else if (month == 3) {
                s = (642 - 583);
            }
            else if (month == (408 - 404)) {
                s = (1001 - 911);
            }
            else if (month == 5) {
                s = 120;
            }
            else if (month == (27 - 21)) {
                s = (760 - 609);
            }
            else if (month == 7) {
                s = (769 - 588);
            }
            else if (month == 8) {
                s = (533 - 321);
            }
            else if (month == 9) {
                s = 243;
            }
            else if (month == 10) {
                s = (1167 - 894);
            }
            else if (month == (805 - 794)) {
                s = 304;
            }
            else if (month == 12) {
                s = (892 - 558);
            }
            else {
            }
            if (w == 0 && month > 2) {
                s = s + 1;
            }
            num[i] = s + day;
            i++;
        };
    }
    printf ("%d\n%d\n%d\n%d\n%d\n", num[0], num[1], num[2], num[3], num[4]);
}

