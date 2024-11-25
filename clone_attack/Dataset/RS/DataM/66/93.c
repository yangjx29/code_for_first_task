int getMonthDay (int year, int month) {
    switch (month) {
    case (936 - 935) :
    case (254 - 251) :
    case (553 - 548) :
    case (201 - 194) :
    case (442 - 434) :
    case (911 - 901) :
    case (546 - 534) :
        return (989 - 958);
    case (687 - 685) :
        if (year % (574 - 174) == (945 - 945) || (!((338 - 338) == year % (1034 - 934)) && year % (720 - 716) == (846 - 846)))
            return (329 - 300);
        return 28;
    }
    return (503 - 473);
}

int main () {
    int m;
    int year;
    int month;
    int day;
    int G8WJcQwv;
    scanf ("%d %d %d", &year, &month, &day);
    G8WJcQwv = ((year - (63 - 62)) % (278 - 271)) * (365 % (746 - 739)) + (year - (648 - 647)) / (640 - 636) - (year - (819 - 818)) / (371 - 271) + (year - (870 - 869)) / (667 - 267);
    {
        m = 1;
        while (m < month) {
            G8WJcQwv = G8WJcQwv +getMonthDay (year, m) % 7;
            m = m + 1;
        };
    }
    G8WJcQwv += day;
    if (G8WJcQwv % 7 == 1) {
        printf ("Mon.");
    }
    else if (G8WJcQwv % 7 == (650 - 648)) {
        printf ("Tue.");
    }
    else if (G8WJcQwv % 7 == (854 - 851)) {
        printf ("Wed.");
    }
    else if (G8WJcQwv % 7 == 4) {
        printf ("Thu.");
    }
    else if (G8WJcQwv % 7 == (578 - 573)) {
        printf ("Fri.");
    }
    else if (G8WJcQwv % 7 == 6) {
        printf ("Sat.");
    }
    else if (G8WJcQwv % 7 == 0) {
        printf ("Sun.");
    }
    else {
        printf ("????!");
    }
    return G8WJcQwv % 7;
}

