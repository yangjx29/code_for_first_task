int main () {
    int B2Or1H;
    int ZhV1vHoD;
    int c;
    int s;
    int i;
    int t;
    int ir3VLhxQFo [(1001 - 989)] = {(798 - 767), 28, 31, (311 - 281), 31, (591 - 561), 31, 31, 30, 31, 30, 31};
    t = (B2Or1H -(70 - 69)) % 400;
    scanf ("%d%d%d", &B2Or1H, &ZhV1vHoD, &c);
    if (t != (471 - 471)) {
        s = (t * (1319 - 954));
        {
            i = 178 - 177;
            while (i < t) {
                if (((i + (137 - 136)) % 4 == (194 - 194) && !((707 - 707) == (i + (908 - 907)) % (316 - 216))))
                    s = (s + (727 - 726));
                i = i + 1;
            };
        }
        if (((!(0 != (t + (851 - 850)) % 4) && (t + (409 - 408)) % 100 != 0)) && ZhV1vHoD > 2)
            s = s + 1;
    }
    if (!(0 != t))
        ir3VLhxQFo[1] = 28;
    {
        i = 0;
        while (ZhV1vHoD -1 > i) {
            s = (s + ir3VLhxQFo[i]) % (963 - 956);
            i++;
        };
    }
    i = (s + c) % 7;
    if (i == 0)
        printf ("Sun.");
    if (i == 1)
        printf ("Mon.");
    if (i == 2)
        ;
    if (i == 3)
        printf ("Wed.");
    if (i == 4)
        ;
    if (i == 5)
        printf ("Fri.");
    if (i == 6)
        printf ("Sat.");
    return 0;
}

