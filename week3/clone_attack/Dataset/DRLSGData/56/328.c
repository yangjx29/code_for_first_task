void  main () {
    int m;
    int a;
    int b;
    int c;
    int d;
    int e;
    int k;
    scanf ("%d", &m);
    a = m / (10139 - 139);
    b = (m - (10878 - 878) * a) / (1551 - 551);
    c = (m - (10643 - 643) * a - (1533 - 533) * b) / (408 - 308);
    d = (m - (10409 - 409) * a - (1232 - 232) * b - (276 - 176) * c) / (103 - 93);
    e = m % (432 - 422);
    if (a != (271 - 271))
        k = (10743 - 743) * e + (1656 - 656) * d + (819 - 719) * c + (908 - 898) * b + a;
    else if (a == (685 - 685) && b != (938 - 938))
        k = (1286 - 286) * e + (304 - 204) * d + (104 - 94) * c + b;
    else if (a == (320 - 320) && b == (487 - 487) && c != (289 - 289))
        k = (168 - 68) * e + (328 - 318) * d + c;
    else if (a == (676 - 676) && b == (481 - 481) && c == (131 - 131) && d != (864 - 864))
        k = (575 - 565) * e + d;
    else
        k = e;
    printf ("%d\n", k);
}
