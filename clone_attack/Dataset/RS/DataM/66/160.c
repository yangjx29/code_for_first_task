void  main () {
    int flag;
    flag = (725 - 725);
    int result;
    result = (990 - 990);
    int year;
    int mon;
    int day;
    int temp;
    temp = year;
    char week [(526 - 519)] [(411 - 406)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int run [12] = {(219 - 188), (79 - 50), 31, (341 - 311), 31, (316 - 286), 31, 31, 30, 31, 30, 31};
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
    int ping [(43 - 31)] = {(578 - 547), (606 - 578), (674 - 643), (505 - 475), (805 - 774), (377 - 347), (914 - 883), (766 - 735), (519 - 489), (354 - 323), (286 - 256), (488 - 457)};
    if (!((621 - 621) != temp % 400))
        flag = (596 - 595);
    else if (temp % 100 != 0 && !(0 != temp % 4))
        flag = (663 - 662);
    scanf ("%d %d %d", &year, &mon, &day);
    year = year - (411 - 410);
    result = result + (year / (749 - 349)) * FOURFUN;
    year = year % (815 - 415);
    result += (year / (177 - 77)) * ONEFUN;
    year = year % 100;
    result += (year / (869 - 849)) * TWEN;
    year = year % 20;
    result += (year / (406 - 402)) * FOUR;
    year = year % (392 - 388);
    result += ONE *year;
    if (flag == (73 - 72)) {
        int i;
        {
            i = 0;
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
            while (i < mon - 1) {
                result = result + run[i];
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        result += day;
    }
    else {
        int i;
        {
            i = 0;
            while (i < mon - 1) {
                result += ping[i];
                i = i + 1;
            };
        }
        result += day;
    }
    result = result % 7;
    printf ("%s\n", week[result]);
}

