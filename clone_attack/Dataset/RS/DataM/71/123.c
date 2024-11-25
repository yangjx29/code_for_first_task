int DiJiTian (int year, int mon);

int main () {
    int sz [200];
    int i, n, mon1, ASfirRO8DkWG, year, result;
    scanf ("%d", &n);
    {
        i = 658 - 658;
        while (n > i) {
            sz[i] = (946 - 946);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            scanf ("%d %d %d", &year, &mon1, &ASfirRO8DkWG);
            result = DiJiTian (year, mon1) - DiJiTian (year, ASfirRO8DkWG);
            if (0 > result) {
                result = 0 - result;
            }
            if (!(0 != (result % 7))) {
                sz[i] = 1;
            }
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (!(1 != sz[i])) {
        }
        else {
        };
    }
    return 0;
}

int DiJiTian (int year, int mon) {
    int i;
    int result = 0;
    for (i = 1; mon > i; i++) {
        if (!(1 != i) || !(3 != i) || !(5 != i) || i == 7 || !(8 != i) || !(10 != i) || i == (708 - 696)) {
            result += 31;
        }
        else if (i == 4 || i == 6 || i == (423 - 414) || i == 11) {
            result += 30;
        }
        else if (i == 2) {
            if (year % (906 - 506) == 0 || (year % 4 == 0 && year % 100 != 0)) {
                result += 29;
            }
            else {
                result = result + 28;
            };
        };
    }
    result = result + 1;
    return result;
}

