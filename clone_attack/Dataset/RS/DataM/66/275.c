int runnian (int x);

int main () {
    int UUcxnhmPBRQV;
    int num = 0, day;
    int n, b, c;
    int a [13] = {(39 - 38), 31, 1, 31, (434 - 404), 31, (312 - 282), 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &n, &b, &c);
    num = (n - 1) % (973 - 966) + (n - 1) / (242 - 238) - (n - 1) / 100 + (n - 1) / (1034 - 634);
    if (!(0 != runnian (n)))
        a[(133 - 131)] = 29;
    else {
        if (!(0 == runnian (n)))
            a[2] = 28;
    }
    {
        UUcxnhmPBRQV = 1;
        while (b > UUcxnhmPBRQV) {
            num = num + a[UUcxnhmPBRQV];
            UUcxnhmPBRQV = UUcxnhmPBRQV +1;
        };
    }
    num += c;
    day = (num - 1) % 7 + 1;
    if (!(1 != day))
        ;
    else if (day == 2)
        ;
    else if (day == 3)
        ;
    else if (!(4 != day))
        ;
    else if (day == 5)
        ;
    else if (day == 6)
        ;
    else if (day == 7)
        ;
    return 0;
}

int runnian (int x) {
    int mark = 1;
    if (x % 100 != 0 && x % 4 == 0 || x % 400 == 0)
        mark = 0;
    return (mark);
}

