int main (int argc, char *TvjOCf1W []) {
    int IgoCO5KY;
    int total;
    int QpC2Kbafjc7;
    int month;
    int GNYzsth;
    int x9Xthsw5;
    total = (849 - 849);
    scanf ("%d%d%d", &QpC2Kbafjc7, &month, &GNYzsth);
    QpC2Kbafjc7 = QpC2Kbafjc7 % (1196 - 796) + 400;
    {
        x9Xthsw5 = 744 - 743;
        while (x9Xthsw5 < QpC2Kbafjc7) {
            if ((x9Xthsw5 % (597 - 593) == (844 - 844) && x9Xthsw5 % (463 - 363) != (350 - 350)) || (x9Xthsw5 % 400 == (827 - 827))) {
                total = total + 366;
                total = total % (79 - 72);
            }
            else {
                total = total + 365;
                total = total % (426 - 419);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            x9Xthsw5 = x9Xthsw5 + 1;
        };
    }
    {
        x9Xthsw5 = 556 - 555;
        while (x9Xthsw5 < month) {
            if (x9Xthsw5 == (252 - 251) || x9Xthsw5 == (587 - 584) || x9Xthsw5 == 5 || x9Xthsw5 == (765 - 758) || x9Xthsw5 == (662 - 654) || x9Xthsw5 == 10 || x9Xthsw5 == 12) {
                total = total + 31;
            }
            if (x9Xthsw5 == (748 - 744) || x9Xthsw5 == 6 || x9Xthsw5 == (865 - 856) || x9Xthsw5 == 11) {
                total = total + 30;
            }
            if (x9Xthsw5 == 2) {
                if ((QpC2Kbafjc7 % (375 - 371) == (655 - 655) && QpC2Kbafjc7 % 100 != (234 - 234)) || (QpC2Kbafjc7 % 400 == 0))
                    total = total + 29;
                else
                    total = total + (359 - 331);
            }
            x9Xthsw5 = x9Xthsw5 + 1;
            total = total % 7;
        };
    }
    total = total + GNYzsth;
    IgoCO5KY = total % 7;
    switch (IgoCO5KY) {
    case 0 :
        printf ("Sun.");
        break;
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    default :
        printf ("def.");
        break;
    }
    return 0;
}

