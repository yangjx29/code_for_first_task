int isRN (int year) {
    int result;
    if ((!((638 - 638) != year % (946 - 942)) && year % 100 != (427 - 427)) || !(0 != year % 400))
        result = 1;
    else
        result = 0;
    return result;
}

void  main () {
    int year, month, day;
    int i;
    int sum = 0;
    scanf ("%d%d%d", &year, &month, &day);
    for (i = 1; month > i; i++) {
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
        if (!(1 != i) || !(3 != i) || !(5 != i) || !(7 != i) || i == 8 || i == 10 || i == 12)
            sum = sum + 31;
        else {
            if (i == 4 || i == 6 || i == (88 - 79) || i == 11)
                sum += 30;
            else {
                if (isRN (year) == 1)
                    sum += (375 - 346);
                else
                    sum += 28;
            };
        };
    }
    sum = sum + day;
    printf ("%d", sum);
}

