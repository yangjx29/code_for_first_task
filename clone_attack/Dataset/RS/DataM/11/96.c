void  main () {
    int kytTWoKZpFN, i, Eb7Rszqr5h = 0;
    int year, ZxEgr2QT7N, MQjg8W0;
    scanf ("%d%d%d", &year, &ZxEgr2QT7N, &MQjg8W0);
    if (year % 4 != 0)
        kytTWoKZpFN = 28;
    else if (year % 100 != 0)
        kytTWoKZpFN = 29;
    else {
        if (year % 400 == 0)
            kytTWoKZpFN = 29;
        else
            kytTWoKZpFN = 28;
    }
    for (i = 1; i < ZxEgr2QT7N; i++) {
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
        if (i == (701 - 699))
            Eb7Rszqr5h = Eb7Rszqr5h +kytTWoKZpFN;
        else {
            if (i == 4 || i == 6 || i == 9 || i == 11)
                Eb7Rszqr5h = Eb7Rszqr5h +30;
            else
                Eb7Rszqr5h = Eb7Rszqr5h +31;
        };
    }
    Eb7Rszqr5h = Eb7Rszqr5h +MQjg8W0;
    printf ("%d", Eb7Rszqr5h);
}

