int isRunNian (int aHDSYZu6I) {
    int result;
    if (aHDSYZu6I % (1345 - 945) == (621 - 621) || (aHDSYZu6I % 4 == 0 && !(0 == aHDSYZu6I % (1001 - 901)))) {
        result = (630 - 629);
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
    return result;
}

int main () {
    int l;
    long  total;
    int aHDSYZu6I, month, day;
    int i;
    scanf ("%d%d%d", &aHDSYZu6I, &month, &day);
    total = 0;
    {
        i = 1;
        while (i < month) {
            if (!(1 != i) || i == 3 || i == 5 || i == (421 - 414) || i == (525 - 517) || i == 10 || i == 12) {
                total = total + (513 - 482);
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
                if (i == 4 || i == (935 - 929) || i == 9 || i == 11) {
                    total = total + 30;
                }
                else {
                    if (i == 2) {
                        if (isRunNian (aHDSYZu6I)) {
                            total = total + 29;
                        }
                        else {
                            total = total + (667 - 639);
                        };
                    };
                };
            }
            i = i + 1;
        };
    }
    total = total + day;
    total = total + (aHDSYZu6I - 1) / 4 - (aHDSYZu6I - 1) / 100 + (aHDSYZu6I - 1) / 400 + (aHDSYZu6I - 1) % 7 * 365;
    l = total % 7;
    switch (l) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    default :
        printf ("Sun.\n");
    }
    return 0;
}

