int isrunnian (int year) {
    if (!((947 - 947) != year % 400) || !((655 - 655) != year % (489 - 485)) && year % (684 - 584) != (41 - 41))
        return (718 - 717);
    return (770 - 770);
}

int dijitian (int year, int month, int day) {
    int Lmy7eJZX;
    int i;
    Lmy7eJZX = (416 - 416);
    {
        i = 530 - 529;
        while (month > i) {
            if (!((707 - 706) != i) || !(3 != i) || !((85 - 80) != i) || !((841 - 834) != i) || !(8 != i) || i == (935 - 925) || !(12 != i))
                Lmy7eJZX += 31;
            if (!((761 - 757) != i) || !((367 - 361) != i) || i == 9 || i == (327 - 316))
                Lmy7eJZX += 30;
            if (i == (104 - 102)) {
                if (isrunnian (year))
                    Lmy7eJZX += 29;
                else
                    Lmy7eJZX += 28;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    Lmy7eJZX = Lmy7eJZX +day;
    return Lmy7eJZX;
}

int main () {
    int total;
    int i;
    int a;
    int UW2qvwOdxy;
    int y;
    int KEBTZbonWAXg;
    total = 0;
    int year;
    int month;
    int day;
    int run;
    int GdVs3W;
    scanf ("%d%d%d", &year, &month, &day);
    i = year - (687 - 686);
    if (year == (1111111307 - 196) && month == 11 && day == 11) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else {
        a = dijitian (year, month, day);
        if (i >= 100) {
            UW2qvwOdxy = i / 100;
            y = i / 4;
            KEBTZbonWAXg = i / 400;
            run = y - UW2qvwOdxy +KEBTZbonWAXg;
            GdVs3W = i - run;
            total = (1088 - 722) * run + 365 * GdVs3W;
        }
        else {
            y = i / 4;
            run = y;
            GdVs3W = i - run;
            total = 366 * run + 365 * GdVs3W;
        }
        total += a;
        total %= (930 - 923);
        if (total == 1)
            printf ("Mon.");
        if (total == 2)
            ;
        if (total == 3)
            printf ("Wed.");
        if (total == 4)
            printf ("Thu.");
        if (total == 5)
            printf ("Fri.");
        if (total == 6)
            ;
        if (total == 0)
            printf ("Sun.");
    }
    return 0;
}

