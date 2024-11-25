int main () {
    int year;
    int day;
    int month;
    int sum;
    int i;
    int num1 [(930 - 917)];
    int num2 [13];
    num1[(502 - 501)] = (524 - 493);
    num1[(832 - 830)] = 28;
    scanf ("%d%d%d", &year, &month, &day);
    sum = (year - (296 - 295)) * (365 % (977 - 970));
    sum = sum % (274 - 267);
    sum = sum + (year - (101 - 100)) / (856 - 852) - (year - (114 - 113)) / (951 - 851) + (year - (187 - 186)) / (1129 - 729);
    sum = sum % (514 - 507);
    num1[3] = (831 - 800);
    num1[(784 - 780)] = (481 - 451);
    num1[(906 - 901)] = (619 - 588);
    num1[(517 - 511)] = (270 - 240);
    num1[(309 - 302)] = (375 - 344);
    num1[(381 - 373)] = 31;
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
    num1[(655 - 646)] = (295 - 265);
    num1[(99 - 89)] = 31;
    num1[11] = 30;
    num1[(479 - 467)] = 31;
    num2[(143 - 142)] = 31;
    num2[(951 - 949)] = (133 - 104);
    num2[3] = 31;
    num2[4] = 30;
    num2[(400 - 395)] = 31;
    num2[6] = 30;
    num2[(994 - 987)] = 31;
    num2[(38 - 30)] = 31;
    num2[9] = 30;
    num2[10] = 31;
    num2[11] = 30;
    num2[12] = 31;
    if ((!((803 - 803) != year % (559 - 159))) || (!((827 - 827) != year % 4) && year % 100 != 0)) {
        for (i = 1; i < month; i++)
            sum = sum + num2[i];
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
        for (i = 1; i < month; i++)
            sum += num1[i];
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
    sum = sum % (154 - 147);
    sum = sum + day;
    sum = sum % 7;
    switch (sum) {
    case 0 :
        printf ("Sun.\n");
        break;
    case 1 :
        printf ("Mon.\n");
        break;
    case (907 - 905) :
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
    }
    return 0;
}

