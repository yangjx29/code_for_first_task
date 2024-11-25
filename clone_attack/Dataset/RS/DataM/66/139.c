int main () {
    int e;
    int a;
    int b;
    int c;
    int t;
    int i;
    e = (396 - 396);
    int days [] = {(378 - 378), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &a, &b, &c);
    e = a % 7 + a / 4 - a / 100 + a / (469 - 69);
    {
        i = 1;
        while (b > i) {
            e = e + days[i];
            i++;
        };
    }
    e = e + c - 1;
    if ((!(0 != a % 4) && a % 100 != 0 || !(0 != a % 400)) && (b <= 2)) {
        e = e - 1;
    }
    t = e % 7;
    if (!(0 != t))
        ;
    else {
        if (t == 1)
            ;
        else if (t == 2)
            ;
        else if (t == 3)
            ;
        else if (t == 4)
            ;
        else if (t == 5)
            ;
        else if (t == 6)
            ;
    }
    return 0;
}

