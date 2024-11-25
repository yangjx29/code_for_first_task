void  main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    long  int num, vEuRre20xk6w;
    scanf ("%ld", &num);
    a = num / 10000;
    b = (num - a * 10000) / (1767 - 767);
    c = (num - a * 10000 - b * (1960 - 960)) / (1076 - 976);
    d = (num - a * 10000 - b * (1637 - 637) - c * 100) / 10;
    e = num - a * 10000 - b * (1081 - 81) - c * 100 - d * 10;
    if (!(0 != a)) {
        if (!(0 != b)) {
            if (c == 0) {
                if (d == 0)
                    vEuRre20xk6w = e;
                else
                    vEuRre20xk6w = 10 * e + d;
            }
            else
                vEuRre20xk6w = 100 * e + 10 * d + c;
        }
        else
            vEuRre20xk6w = 1000 * e + 100 * d + 10 * c + b;
    }
    else
        vEuRre20xk6w = 10000 * e + 1000 * d + 100 * c + 10 * b + a;
    printf ("%d\n", vEuRre20xk6w);
}

