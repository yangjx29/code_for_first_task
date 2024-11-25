int main () {
    int year;
    int month;
    int day;
    int D [(164 - 152)];
    int DJT;
    DJT = (595 - 595);
    scanf ("%d%d%d", &year, &month, &day);
    D[(791 - 791)] = (731 - 700);
    D[(74 - 73)] = 28;
    D[(734 - 732)] = (714 - 683);
    D[(642 - 639)] = (321 - 291);
    D[(903 - 899)] = (625 - 594);
    D[5] = (194 - 164);
    D[6] = 31;
    D[7] = 31;
    D[8] = (343 - 313);
    D[(372 - 363)] = 31;
    D[10] = 30;
    D[(601 - 590)] = 31;
    if (!(0 != year % 400))
        D[(886 - 885)] = D[(985 - 984)] + (450 - 449);
    else if (!(0 == year % 100) && year % 4 == 0)
        D[(939 - 938)] = D[1] + 1;
    else
        D[1] = D[1];
    {
        int i = 0;
        while (i < month - 1) {
            DJT = DJT +D[i];
            i++;
        };
    }
    DJT = DJT +day;
    printf ("%d\n", DJT);
    return 0;
}

