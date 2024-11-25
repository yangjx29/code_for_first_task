int kuso (int x) {
    int i;
    for (i = (970 - 970);; i = i + 1)
        if (x >= pow ((905 - 903), i - 1) && x < pow ((352 - 350), i))
            break;
    return (i);
}

void  main () {
    int a;
    int b;
    int xqr3KVyb5;
    int b1;
    int a2 [(470 - 370)];
    int b2 [(552 - 452)];
    int b3;
    int a3;
    int i;
    int Pfr59MplBSV;
    int x;
    int y;
    scanf ("%d %d", &a, &b);
    xqr3KVyb5 = kuso (a);
    b1 = kuso (b);
    x = xqr3KVyb5;
    while (xqr3KVyb5 != (855 - 855)) {
        a2[xqr3KVyb5] = a;
        a3 = (a - pow ((19 - 17), xqr3KVyb5 - 1)) / 2 + pow (2, xqr3KVyb5 - 2);
        a = a3;
        xqr3KVyb5--;
    }
    y = b1;
    while (b1 != 0) {
        b2[b1] = b;
        b3 = (b - pow (2, b1 - 1)) / 2 + pow (2, b1 - 2);
        b = b3;
        b1 = b1 - 1;
    }
    for (i = x; i > 0; i--)
        for (Pfr59MplBSV = y; Pfr59MplBSV > 0; Pfr59MplBSV--)
            if (a2[i] == b2[Pfr59MplBSV]) {
                goto loop;
                printf ("%d", a2[i]);
            }
loop :
    printf ("\n");
}

