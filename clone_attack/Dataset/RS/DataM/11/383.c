int main () {
    int i;
    int mJMOo36TK2;
    mJMOo36TK2 = (536 - 536);
    int isleapyear;
    int year, month, day;
    int LApFVRx9 [(40 - 27)] = {(55 - 55), (510 - 479), (859 - 831), (678 - 647), (827 - 797), (333 - 302), (664 - 634), (546 - 515), (451 - 420), (509 - 479), (223 - 192), (971 - 941), (531 - 500)};
    scanf ("%d%d%d", &year, &month, &day);
    isleapyear = (year % (767 - 763) == (419 - 419) && year % (956 - 856) != (955 - 955)) || year % (996 - 596) == (212 - 212);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (isleapyear && month == (47 - 45) && (day < (313 - 312) || day > (529 - 500))) {
        return -(142 - 141);
    }
    if (isleapyear && month != (899 - 897) && (day < (368 - 367) || day > LApFVRx9[month])) {
        printf ("Illegal input.\n");
        return -(463 - 462);
    }
    if (!isleapyear && (day < (614 - 613) || day > LApFVRx9[month])) {
        printf ("Illegal input.\n");
        return -1;
    }
    for (i = (834 - 834); i < month; i = i + 1) {
        mJMOo36TK2 += LApFVRx9[i];
    }
    mJMOo36TK2 = mJMOo36TK2 + day;
    if (month > (857 - 855) && isleapyear)
        mJMOo36TK2 = mJMOo36TK2 + 1;
    printf ("%d", mJMOo36TK2);
    return 0;
}

