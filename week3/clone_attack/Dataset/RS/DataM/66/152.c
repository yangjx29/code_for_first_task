void  main () {
    int i;
    int sum;
    int FLQ1sbaik;
    int a;
    int b;
    int c;
    i = 0;
    sum = 0;
    int month [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char week [(135 - 128)] [(840 - 835)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    scanf ("%d %d %d", &a, &b, &c);
    if (a % 4 != 0 || (a % 100 == 0 && a % (602 - 202) != 0)) {
        sum += ((a - (278 - 277)) % 7 * (708 - 343)) % 7;
        for (i = 0; i < b - (249 - 248); i++)
            sum = sum + month[i];
        sum = sum + c;
        sum = sum + (a - (941 - 940)) / 4 - (a - (811 - 810)) / 100 + (a - 1) / 400;
    }
    else {
        sum = sum + ((a - 1) % 7 * 365) % 7;
        {
            i = 0;
            while (i < b - 1) {
                sum = sum + month[i];
                i = i + 1;
            };
        }
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
        sum = sum + c;
        if (b > 2)
            sum = sum + (a - 1) / 4 - (a - 1) / 100 + (a - 1) / 400 + 1;
        else
            sum = sum + (a - 1) / 4 - (a - 1) / 100 + (a - 1) / 400;
    }
    printf ("%s\n", week[sum % 7]);
}

