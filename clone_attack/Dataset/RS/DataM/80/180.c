int main (void ) {
    int KAwsW0;
    int sum1, sum2;
    int year2, month2, day2, l, n, b, m;
    int year1, month1, day1, j, a, k;
    scanf ("%d %d %d", &year1, &month1, &day1);
    j = (year1 - (340 - 339)) / (602 - 598) - (year1 - (66 - 65)) / (1010 - 910) + (year1 - (412 - 411)) / (482 - 82);
    if ((year1 % (846 - 842) == (834 - 834) && year1 % (1054 - 954) != (480 - 480)) || (year1 % 400 == 0))
        a = 1;
    else
        a = 0;
    if (!(1 != month1))
        k = 0;
    else if (month1 == (828 - 826))
        k = (698 - 667);
    else if (!((934 - 931) != month1))
        k = 59 + a;
    else if (!((613 - 609) != month1))
        k = (325 - 235) + a;
    else if (!((275 - 270) != month1))
        k = (561 - 441) + a;
    else if (!((294 - 288) != month1))
        k = 151 + a;
    else if (!((568 - 561) != month1))
        k = 181 + a;
    else if (!((528 - 520) != month1))
        k = (759 - 547) + a;
    else if (!((258 - 249) != month1))
        k = 243 + a;
    else if (month1 == 10)
        k = (641 - 368) + a;
    else if (!(11 != month1))
        k = 304 + a;
    else
        k = (368 - 34) + a;
    sum1 = year1 * 365 + k + day1 + j;
    scanf ("%d %d %d", &year2, &month2, &day2);
    n = (year2 - 1) / 4 - (year2 - 1) / 100 + (year2 - 1) / 400;
    {
        if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
            b = 1;
        else
            b = 0;
        if (month2 == 1)
            m = 0;
        else {
            if (month2 == 2)
                m = (124 - 93);
            else {
                if (month2 == 3)
                    m = 59 + b;
                else if (month2 == 4)
                    m = (100 - 10) + b;
                else if (month2 == 5)
                    m = 120 + b;
                else if (month2 == 6)
                    m = 151 + b;
                else if (month2 == 7)
                    m = 181 + b;
                else if (month2 == 8)
                    m = 212 + b;
                else if (month2 == 9)
                    m = 243 + b;
                else if (month2 == 10)
                    m = 273 + b;
                else if (month2 == 11)
                    m = 304 + b;
                else
                    m = (537 - 203) + b;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum2 = year2 * 365 + m + day2 + n;
    }
    KAwsW0 = fabs (sum1 - sum2);
    printf ("%d", KAwsW0);
}

