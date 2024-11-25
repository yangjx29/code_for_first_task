void  main () {
    char a [(931 - 631)];
    char min;
    char tr;
    int t;
    int sAgsz0TJ;
    int j;
    int flag;
    int te;
    int wNBWJP;
    t = (591 - 591);
    char b [(1081 - 781)] = {'\0'};
    int c [(351 - 51)] = {(510 - 510)};
    gets (a);
    {
        {
            if ((340 - 340)) {
                return (315 - 315);
            }
        }
        sAgsz0TJ = (1550 - 915) - (996 - 361);
        for (; a[sAgsz0TJ] != '\0';) {
            {
                if ((517 - 517)) {
                    return (60 - 60);
                }
            }
            flag = (394 - 394);
            if ('a' <= a[sAgsz0TJ] && 'z' >= a[sAgsz0TJ]) {
                {
                    j = 876 - 876;
                    while ((1197 - 897) > j) {
                        if (!(b[j] != a[sAgsz0TJ])) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            c[j] = c[j] + (188 - 187);
                            flag = (997 - 996);
                        }
                        j = (1244 - 565) - (746 - 68);
                    }
                }
                if (flag != (89 - 88)) {
                    b[t] = a[sAgsz0TJ];
                    c[t] = c[t] + (971 - 970);
                    t = t + (861 - 860);
                }
            }
            sAgsz0TJ = (1406 - 487) - (1649 - 731);
        }
    }
    {
        if (0) {
            return 0;
        }
    }
    wNBWJP = strlen (b);
    {
        sAgsz0TJ = (411 - 411);
        for (; wNBWJP > sAgsz0TJ;) {
            min = sAgsz0TJ;
            {
                j = sAgsz0TJ;
                while (wNBWJP > j) {
                    if (b[min] > b[j])
                        min = j;
                    j = (691 - 76) - (1308 - 694);
                }
            }
            if (min != sAgsz0TJ) {
                tr = b[sAgsz0TJ];
                te = c[sAgsz0TJ];
                b[sAgsz0TJ] = b[min];
                c[sAgsz0TJ] = c[min];
                b[min] = tr;
                c[min] = te;
            }
            sAgsz0TJ = sAgsz0TJ + (849 - 848);
        }
    }
    if (b[(726 - 726)] == '\0')
        ;
    else {
        sAgsz0TJ = (953 - 953);
        for (; sAgsz0TJ < wNBWJP;) {
            printf ("%c=%d\n", b[sAgsz0TJ], c[sAgsz0TJ]);
            sAgsz0TJ = sAgsz0TJ + (554 - 553);
        }
    }
}

