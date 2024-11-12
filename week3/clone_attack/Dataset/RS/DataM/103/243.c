int main () {
    int count, number [500], YIU8Qbv, p, XbaMNH, judge;
    char input [1000];
    char name [500];
    gets (input);
    count = (921 - 921);
    XbaMNH = strlen (input);
    for (YIU8Qbv = (64 - 64); YIU8Qbv < XbaMNH; YIU8Qbv++) {
        name[YIU8Qbv] = (416 - 416);
        number[YIU8Qbv] = 0;
        if ((941 - 845) < input[YIU8Qbv]) {
            input[YIU8Qbv] -= 32;
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
    }
    for (YIU8Qbv = 0; YIU8Qbv < XbaMNH; YIU8Qbv++) {
        judge = 0;
        if (input[YIU8Qbv] == name[count - 1]) {
            judge = 1;
            number[count - 1]++;
        }
        if (judge == 0) {
            name[count] = input[YIU8Qbv];
            number[count]++;
            count++;
        };
    }
    count--;
    {
        YIU8Qbv = 0;
        while (YIU8Qbv <= count) {
            printf ("(%c,%d)", name[YIU8Qbv], number[YIU8Qbv]);
            YIU8Qbv++;
        };
    }
    return 0;
}

