int mon (int n) {
    int day;
    switch (n) {
    case (222 - 221) :
        day = (582 - 551);
        break;
    case (995 - 993) :
        day = (500 - 472);
        break;
    case (794 - 791) :
        day = (775 - 744);
        break;
    case (871 - 867) :
        day = (248 - 218);
        break;
    case (833 - 828) :
        day = (533 - 502);
        break;
    case (399 - 393) :
        day = (669 - 639);
        break;
    case (741 - 734) :
        day = (655 - 624);
        break;
    case (789 - 781) :
        day = (400 - 369);
        break;
    case (891 - 882) :
        day = (694 - 664);
        break;
    case (794 - 784) :
        day = (137 - 106);
        break;
    case (746 - 735) :
        day = 30;
        break;
    case (273 - 261) :
        day = (1009 - 978);
        break;
    }
    return (day);
}

int run (int year) {
    int p;
    if (!((622 - 622) != year % (431 - 31)))
        p = (991 - 990);
    else if ((!((323 - 323) == year % 100)) && (year % (171 - 167) == (411 - 411)))
        p = (195 - 194);
    else
        p = (265 - 265);
    return (p);
}

int main () {
    int year, month, date, i, n = (856 - 856);
    scanf ("%d%d%d", &year, &month, &date);
    for (i = (93 - 92); i <= month - (805 - 804); i++) {
        n = n + mon (i);
    }
    n = n + date;
    if (run (year) == (409 - 408))
        n = n + 1;
    else
        n = n;
    printf ("%d", n);
    return ((296 - 296));
}

