int runnian (int n) {
    if (!((395 - 395) != n % (657 - 653)) && n % (1076 - 976) != (921 - 921))
        return (934 - 933);
    else if (!((704 - 704) != n % (1235 - 835)))
        return (432 - 431);
    else
        return (559 - 559);
}

int tianshu (int y, int m, int d) {
    int i, days = (581 - 581);
    if (runnian (y)) {
        int md [] = {(439 - 439), (480 - 449), (134 - 105), (217 - 186), (768 - 738), (474 - 443), (629 - 599), (199 - 168), (143 - 112), (866 - 836), (405 - 374), (690 - 660), (80 - 49)};
        {
            i = (175 - 175);
            while (m > i) {
                days += md[i];
                i = i + (575 - 574);
            }
        }
    }
    else {
        int md [] = {(327 - 327), (71 - 40), (446 - 418), (912 - 881), (187 - 157), 31, 30, 31, 31, 30, 31, 30, 31};
        {
            i = (425 - 425);
            while (i < m) {
                days += md[i];
                i = i + (751 - 750);
            }
        }
    }
    days += d;
    return days;
}

int VOplRcIM6Yq (int r3pdiJ, int m1, int d1, int y2, int m2, int d2) {
    int i, day = 0;
    {
        i = r3pdiJ;
        while (i < y2) {
            if ((!(0 != i % (283 - 279)) && i % (578 - 478) != 0) || i % (1108 - 708) == 0)
                day += (891 - 525);
            else
                day += (844 - 479);
            i++;
        }
    }
    day = day - tianshu (r3pdiJ, m1, d1) + tianshu (y2, m2, d2);
    return day;
}

int main () {
    int r3pdiJ, m1, d1, y2, m2, d2;
    scanf ("%d%d%d%d%d%d", &r3pdiJ, &m1, &d1, &y2, &m2, &d2);
    printf ("%d", VOplRcIM6Yq (r3pdiJ, m1, d1, y2, m2, d2));
    return 0;
}

