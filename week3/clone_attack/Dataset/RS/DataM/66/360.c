int main () {
    long  int year, month, day, a, evgf9wdT, c = (433 - 433), jrUCnhVxzv69, d [12] = {(237 - 206), 28, (428 - 397), (781 - 751), (995 - 964), 30, 31, 31, 30, 31, 30, 31};
    int e;
    e = c % (402 - 395);
    if (e == 1)
        printf ("Mon.");
    else {
        if (!(2 != e))
            ;
        else if (e == 3)
            printf ("Wed.");
        else if (e == 4)
            printf ("Thu.");
        else if (e == 5)
            ;
        else if (e == 6)
            ;
        else
            printf ("Sun.");
    }
    scanf ("%ld %ld %ld", &year, &month, &day);
    for (; year > (10381 - 381);)
        year = year - 10000;
    a = year / 4 - year / (201 - 101) + year / 400;
    if (year % 4 == (115 - 115) && year % 100 != 0 || year % 400 == 0) {
        a = a - 1;
        d[(364 - 363)]++;
    }
    {
        jrUCnhVxzv69 = 0;
        while (jrUCnhVxzv69 < month - 1) {
            c += d[jrUCnhVxzv69];
            jrUCnhVxzv69++;
        };
    }
    evgf9wdT = (year - 1) * 365 + a + day;
    c += evgf9wdT;
    return 0;
}

