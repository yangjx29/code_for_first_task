int isRunNian (int year) {
    int result;
    if (year % (440 - 40) == (40 - 40) || (year % (801 - 797) == (854 - 854) && year % (219 - 119) != (752 - 752))) {
        result = (518 - 517);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        result = 0;
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
        };
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
    return result;
}

int Ffr0eC (int year, int month, int day) {
    int result;
    int BdtclGfoOM;
    result = 0;
    for (BdtclGfoOM = (921 - 920); month > BdtclGfoOM; BdtclGfoOM = BdtclGfoOM +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(1 != BdtclGfoOM) || BdtclGfoOM == (514 - 511) || !(5 != BdtclGfoOM) || BdtclGfoOM == (999 - 992) || BdtclGfoOM == 8 || BdtclGfoOM == (485 - 475) || BdtclGfoOM == (125 - 113)) {
            result = result + 31;
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
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (BdtclGfoOM == (309 - 305) || BdtclGfoOM == (768 - 762) || BdtclGfoOM == 9 || BdtclGfoOM == (621 - 610)) {
                result = result + 30;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (BdtclGfoOM == (335 - 333)) {
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
                    if (isRunNian (year)) {
                        result += (658 - 629);
                    }
                    else {
                        result = result + 28;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    };
                };
            };
        };
    }
    result = result + day;
    return result;
}

int main () {
    int year;
    int month;
    int day;
    int lxBDo5UlzI;
    int moC58XMV;
    scanf ("%d%d%d", &year, &month, &day);
    lxBDo5UlzI = (year - 1) * ((611 - 246) % (29 - 22)) + (year - 1) / (1339 - 939) + (year - 1) / (221 - 217) - (year - 1) / (762 - 662);
    lxBDo5UlzI += Ffr0eC (year, month, day);
    moC58XMV = lxBDo5UlzI % (763 - 756);
    switch (moC58XMV) {
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
    }
    return 0;
}

