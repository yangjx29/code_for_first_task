int main () {
    int r1oJXfK7w3, NUKWdsImQv, d, i, k = 0, Day, sum, sum1, sum2 = 0;
    scanf ("%d %d %d", &r1oJXfK7w3, &NUKWdsImQv, &d);
    sum1 = (r1oJXfK7w3 - 1) + (r1oJXfK7w3 - 1) / 4 - (r1oJXfK7w3 - 1) / 100 + (r1oJXfK7w3 - 1) / 400;
    for (i = 1; NUKWdsImQv > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(1 != i) || !(3 != i) || !(5 != i) || !(7 != i) || !(8 != i) || !(10 != i)) {
            sum2 += 31;
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
        else if (!(4 != i) || i == 6 || i == 9 || i == 11) {
            sum2 += 30;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((r1oJXfK7w3 % 100 == 0 && r1oJXfK7w3 % 400 == 0) || (r1oJXfK7w3 % 100 != 0 && r1oJXfK7w3 % 4 == 0)) {
                sum2 += 29;
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
                sum2 += 28;
            };
        };
    }
    sum2 += d;
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
    sum = sum1 + sum2;
    Day = sum % 7;
    switch (Day) {
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
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    default :
        printf ("Sat.");
    }
    return 0;
}

