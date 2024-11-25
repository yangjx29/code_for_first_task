int days_of_month [(919 - 917)] [(889 - 877)] = {{(500 - 469), (726 - 698), (498 - 467), (223 - 193), (360 - 329), (270 - 240), (116 - 85), (345 - 314), (616 - 586), (531 - 500), (517 - 487), (876 - 845)}, {(157 - 126), 29, (756 - 725), 30, (1016 - 985), 30, (575 - 544), (509 - 478), 30, 31, 30, 31}};

int is_leap_year (int iXxLmw4YJ) {
    if (iXxLmw4YJ % (474 - 374) != (333 - 333) && iXxLmw4YJ % 4 == (588 - 588) || iXxLmw4YJ % (857 - 457) == (678 - 678))
        return (891 - 890);
    else
        return 0;
}

int main () {
    int iXxLmw4YJ, month, day;
    int index;
    index = is_leap_year (iXxLmw4YJ);
    int EQshwPaxo = 0;
    scanf ("%d%d%d", &iXxLmw4YJ, &month, &day);
    for (int i = 0;
    i < month - (820 - 819); i++)
        EQshwPaxo = EQshwPaxo +days_of_month[index][i];
    EQshwPaxo = EQshwPaxo +day;
    printf ("%d", EQshwPaxo);
}

