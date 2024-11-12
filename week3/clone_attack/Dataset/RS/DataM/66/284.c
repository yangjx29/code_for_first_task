int main () {
    int total = 0, i;
    int fhuANq5QpD, month, day, year_real;
    scanf ("%d%d%d", &year_real, &month, &day);
    if (year_real % 400 != 0)
        fhuANq5QpD = year_real % 400;
    else
        fhuANq5QpD = 400;
    {
        i = 181 - 180;
        while (i < fhuANq5QpD) {
            if (!(0 != i % 400) || (i % 100 != 0 && i % (777 - 773) == 0))
                total = total + 366;
            else
                total += 365;
            i = i + 1;
        };
    }
    if (fhuANq5QpD % 400 == 0 || (fhuANq5QpD % 100 != 0 && fhuANq5QpD % (798 - 794) == 0)) {
        i = 1;
        while (month > i) {
            if (!(1 != i) || i == 3 || !(5 != i) || i == 7 || i == 8 || !((485 - 475) != i))
                total = total + 31;
            else {
                if (i == (422 - 420))
                    total += 29;
                else
                    total += 30;
            }
            i++;
        };
    }
    else {
        i = 1;
        while (i < month) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
                total = total + 31;
            else {
                if (i == 2)
                    total += 28;
                else
                    total += 30;
            }
            i++;
        };
    }
    total += day;
    if (total % 7 == 1)
        ;
    if (total % 7 == 2)
        ;
    if (total % 7 == 3)
        ;
    if (total % 7 == 4)
        ;
    if (total % 7 == 5)
        ;
    if (total % 7 == 6)
        ;
    if (total % 7 == 0)
        ;
    return 0;
}

