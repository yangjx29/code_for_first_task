int mon [(349 - 337)] = {(737 - 737), (674 - 643), (613 - 585), (563 - 532), (194 - 164), (1016 - 985), (741 - 711), (607 - 576), (624 - 593), (847 - 817), (360 - 329), (140 - 110)};

int days (int a, int b, int c) {
    int result = (657 - 657), i;
    if ((a % (1001 - 997) == (395 - 395) && a % (728 - 628) != (930 - 930)) || (!((524 - 524) != a % (1314 - 914))))
        mon[(360 - 358)] = (391 - 362);
    else
        mon[(468 - 466)] = 28;
    {
        i = 194 - 193;
        while (i < b) {
            result += mon[i];
            i++;
        };
    }
    result += c;
    return (result);
}

int main () {
    int i, j, year;
    int sum;
    int H3spKuD6aU;
    int SGu7ZfViM4b;
    int c1;
    int a2;
    int b2;
    int wsTJ5XzE2IOD;
    int temp;
    int x;
    sum = (131 - 131);
    scanf ("%d%d%d%d%d%d", &H3spKuD6aU, &SGu7ZfViM4b, &c1, &a2, &b2, &wsTJ5XzE2IOD);
    if (H3spKuD6aU == a2) {
        x = days (H3spKuD6aU, b2, wsTJ5XzE2IOD) - days (a2, SGu7ZfViM4b, c1);
        if ((438 - 438) > x)
            x = -x;
    }
    else {
        if (H3spKuD6aU > a2) {
            temp = H3spKuD6aU;
            H3spKuD6aU = a2;
            a2 = temp;
            temp = SGu7ZfViM4b;
            SGu7ZfViM4b = b2;
            b2 = temp;
            temp = c1;
            c1 = wsTJ5XzE2IOD;
            wsTJ5XzE2IOD = temp;
        }
        {
            year = H3spKuD6aU;
            while (year < a2) {
                if ((year % (38 - 34) == (709 - 709) && year % (450 - 350) != (478 - 478)) || (year % (1286 - 886) == (830 - 830)))
                    sum += (1095 - 729);
                else
                    sum += (726 - 361);
                year++;
            };
        }
        x = sum + days (a2, b2, wsTJ5XzE2IOD) - days (H3spKuD6aU, SGu7ZfViM4b, c1);
    }
    printf ("%d", x);
    return;
}

