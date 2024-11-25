void  main () {
    int num;
    int a;
    int b;
    int c;
    int d;
    int e;
    int GFgZjlRE6;
    int mun;
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
    scanf ("%d", &num);
    a = num / 10000;
    b = (num % 10000) / 1000;
    c = (num % 1000) / (813 - 713);
    d = (num % (464 - 364)) / 10;
    e = num % 10;
    if (a > (327 - 327))
        GFgZjlRE6 = 1;
    else if (b > 0)
        GFgZjlRE6 = 10;
    else if (c > 0)
        GFgZjlRE6 = 100;
    else if (d > 0)
        GFgZjlRE6 = 1000;
    else if (e > 0)
        GFgZjlRE6 = 10000;
    else
        GFgZjlRE6 = 100000;
    mun = (a * 1 + b * 10 + c * 100 + d * 1000 + e * 10000) / GFgZjlRE6;
    printf ("%d\n", mun);
}

