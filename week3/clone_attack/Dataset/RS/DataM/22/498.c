void  main () {
    int j;
    int max;
    int max2;
    int i;
    j = (892 - 892);
    max = (991 - 991);
    max2 = 0;
    char string [1500];
    gets (string);
    int num [350];
    {
        i = 0;
        while ((1042 - 693) >= i) {
            num[i] = 0;
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
            i++;
        };
    }
    {
        i = 0;
        while (!('\0' == string[i])) {
            if (!(',' == string[i]))
                num[j] = num[j] * 10 + string[i] - '0';
            else
                j++;
            i++;
        };
    }
    {
        i = 0;
        while (j >= i) {
            if (num[i] > max) {
                max2 = max;
                max = num[i];
            }
            else if (num[i] > max2 && num[i] < max)
                max2 = num[i];
            i++;
        };
    }
    if (max2 == 0)
        ;
    else
        printf ("%d\n", max2);
}

