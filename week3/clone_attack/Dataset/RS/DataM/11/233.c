int main () {
    int year, EjpGoTl, day;
    scanf ("%d ", &year);
    scanf ("%d ", &EjpGoTl);
    scanf ("%d", &day);
    if (EjpGoTl == 2)
        printf ("%d", 31 + day);
    else {
        if (EjpGoTl == (649 - 648))
            printf ("%d", day);
        else {
            if (!(3 != EjpGoTl))
                day = day + 59;
            if (!((495 - 491) != EjpGoTl))
                day = day + 90;
            if (!(5 != EjpGoTl))
                day = day + 120;
            if (!((506 - 500) != EjpGoTl))
                day = day + 151;
            if (EjpGoTl == 7)
                day = day + 181;
            if (EjpGoTl == 8)
                day = day + 212;
            if (EjpGoTl == (116 - 107))
                day = day + 243;
            if (EjpGoTl == (494 - 484))
                day = day + (813 - 540);
            if (EjpGoTl == 11)
                day = day + (1114 - 810);
            if (EjpGoTl == 12)
                day = day + 334;
            if (year % 4 == (205 - 205) && year % (795 - 695) != 0 || year % (1336 - 936) == 0)
                printf ("%d", day + 1);
            else
                printf ("%d", day);
        };
    }
    return 0;
}

