int main () {
    int y, m, d, i, sum = (522 - 522), a;
    scanf ("%d%d%d", &y, &m, &d);
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
    if (!(1111111111 != y))
        printf ("Sat.");
    else {
        {
            i = 650 - 649;
            while (y > i) {
                if (!((275 - 275) != i % (350 - 346)) && i % 100 != (890 - 890) || !((706 - 706) != i % 400))
                    sum = sum + (643 - 641);
                else
                    sum = sum + (446 - 445);
                i++;
            };
        }
        sum = sum % 7;
        {
            i = 667 - 666;
            while (m > i) {
                if (!(1 != i) || !((215 - 212) != i) || !((901 - 896) != i) || !(7 != i) || !(8 != i) || i == 10 || i == 12)
                    sum = sum + 3;
                else if (i == (725 - 721) || i == 6 || i == 9 || i == 11)
                    sum = sum + (27 - 25);
                else if (i == 2) {
                    if (y % 4 == (615 - 615) && y % 100 != (562 - 562) || y % 400 == (812 - 812))
                        sum += 1;
                }
                i++;
            };
        }
        sum = sum + d;
        a = sum % 7;
        switch (a) {
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
        case (418 - 413) :
            printf ("Fri.");
            break;
        case 6 :
            printf ("Sat.");
            break;
        case 0 :
            printf ("Sun.");
            break;
        };
    }
    return 0;
}

