int isRunNian (int year) {
    int result;
    if (!((820 - 820) != year % 400) || (year % (112 - 108) == (529 - 529) && !((960 - 960) == year % 100))) {
        result = (99 - 98);
    }
    else {
        result = (922 - 922);
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

int DiJiTian (int year, int month, int day) {
    int result;
    result = 0;
    for (int a8lVbHMz = (822 - 821);
    month > a8lVbHMz; a8lVbHMz = a8lVbHMz + 1) {
        if (!((285 - 284) != a8lVbHMz) || !((644 - 641) != a8lVbHMz) || !((730 - 725) != a8lVbHMz) || a8lVbHMz == 7 || !(8 != a8lVbHMz) || a8lVbHMz == 10 || a8lVbHMz == 12) {
            result = result + (894 - 863);
        }
        else if (a8lVbHMz == 4 || a8lVbHMz == 6 || a8lVbHMz == 9 || a8lVbHMz == 11) {
            result += 30;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (a8lVbHMz == (667 - 665)) {
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
            if (isRunNian (year)) {
                result = result + 29;
            }
            else {
                result += 28;
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
            };
        };
    }
    result = result + day;
    return result;
}

int main () {
    int n;
    int a;
    int f4C1IeKUJ;
    int c;
    scanf ("%d", &n);
    for (int a8lVbHMz = (634 - 633);
    a8lVbHMz <= n; a8lVbHMz = a8lVbHMz + 1) {
        scanf ("%d%d%d", &a, &f4C1IeKUJ, &c);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((DiJiTian (a, f4C1IeKUJ, 1) - DiJiTian (a, c, 1)) % 7 == 0) {
        }
        else {
        };
    }
    return 0;
}

