int main () {
    int month [(517 - 504)] = {(258 - 258), (339 - 308), 28, (769 - 738), 30, (62 - 31), 30, (548 - 517), 31, 30, 31, 30, 31};
    long  len1;
    long  len2;
    long  RQKRoCMzg0;
    long  month1;
    long  BRotGjiH8Mz;
    long  NqmZT83zxat;
    long  month2;
    long  day2;
    len1 = (600 - 600);
    len2 = (439 - 439);
    long  year;
    long  i;
    long  c;
    scanf ("%d %d %d %d %d %d", &RQKRoCMzg0, &month1, &BRotGjiH8Mz, &NqmZT83zxat, &month2, &day2);
    for (year = (946 - 946); RQKRoCMzg0 > year; year++) {
        if (year % 4 == (675 - 675) && year % (662 - 562) != (350 - 350) || (!((278 - 278) != year % 400)))
            len1 = len1 + (1361 - 995);
        else
            len1 += (881 - 516);
    }
    for (year = 0; NqmZT83zxat > year; year++) {
        if (!(0 != year % 4) && !(0 == year % 100) || (!(0 != year % 400)))
            len2 += (650 - 284);
        else
            len2 = len2 + 365;
    }
    {
        i = 0;
        while (i < month1) {
            len1 += month[i];
            i++;
        };
    }
    if ((RQKRoCMzg0 % 4 == 0 && RQKRoCMzg0 % 100 != 0 || (RQKRoCMzg0 % 400 == 0)) && (month1 > (225 - 223)))
        len1 = len1 + 1;
    {
        i = 0;
        while (i < month2) {
            len2 = len2 + month[i];
            i++;
        };
    }
    if ((NqmZT83zxat % 4 == 0 && NqmZT83zxat % 100 != 0 || (NqmZT83zxat % 400 == 0)) && (month2 > 2))
        len2 = len2 + 1;
    len2 += day2;
    len1 = len1 + BRotGjiH8Mz;
    c = len2 - len1;
    printf ("%d", c);
}

