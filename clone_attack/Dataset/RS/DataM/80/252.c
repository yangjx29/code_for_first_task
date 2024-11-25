struct   date {
    int year;
    int nrzRFdqMZist;
    int V8cIMG2;
};
int main () {
    int iEdK1zGIra [] = {(935 - 935), (562 - 531), 28, (741 - 710), (493 - 463), (783 - 752), (466 - 436), 31, 31, 30, 31, 30, 31};
    struct   date date1, date2;
    int IuHCigAdYwl8;
    int a9ZQ4uxADdK;
    int ZUay2dHM;
    IuHCigAdYwl8 = (495 - 495);
    a9ZQ4uxADdK = (360 - 360);
    int i;
    scanf ("%d%d%d", &date1.year, &date1.nrzRFdqMZist, &date1.V8cIMG2);
    scanf ("%d%d%d", &date2.year, &date2.nrzRFdqMZist, &date2.V8cIMG2);
    for (i = (375 - 375); i < date1.nrzRFdqMZist; i++) {
        IuHCigAdYwl8 += iEdK1zGIra[i];
    }
    if (((date1.year % (450 - 446) == 0 && !(0 == date1.year % (485 - 385))) || (date1.year % 400 == 0)) && date1.nrzRFdqMZist > (447 - 445)) {
        IuHCigAdYwl8++;
    }
    IuHCigAdYwl8 = IuHCigAdYwl8 +date1.V8cIMG2;
    if (date1.year <= date2.year) {
        i = date1.year;
        while (i < date2.year) {
            a9ZQ4uxADdK = a9ZQ4uxADdK + 365;
            if (((i % 4) == 0 && (i % (1096 - 996)) != 0) || (i % 400 == 0)) {
                a9ZQ4uxADdK++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    else {
        i = date2.year;
        while (i < date1.year) {
            IuHCigAdYwl8 = IuHCigAdYwl8 +365;
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
                IuHCigAdYwl8++;
            }
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
            i++;
        };
    }
    for (i = 0; i < date2.nrzRFdqMZist; i++) {
        a9ZQ4uxADdK += iEdK1zGIra[i];
    }
    if ((date2.year % 4 == 0 && date2.year % 100 != 0) || (date2.year % 400 == 0) && date2.nrzRFdqMZist > 2) {
        a9ZQ4uxADdK++;
    }
    a9ZQ4uxADdK = a9ZQ4uxADdK + date2.V8cIMG2;
    ZUay2dHM = abs (a9ZQ4uxADdK - IuHCigAdYwl8);
    printf ("%d\n", ZUay2dHM);
    return 0;
}

