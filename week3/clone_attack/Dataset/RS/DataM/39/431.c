typedef struct   {
    char name [30], sit1, sit2;
    int a, ytpsK4Wh, num;
    long  totle;
}
NjIB8nUtQ;

void  main () {
    NjIB8nUtQ oLT9h7ifrDH [(386 - 286)];
    int count, QQlKySB = (666 - 666), H3lx7osvU2, U5nJHBVU;
    long  totle = (421 - 421);
    scanf ("%d", &count);
    for (U5nJHBVU = (914 - 914); U5nJHBVU < count; U5nJHBVU++) {
        scanf ("%s %d %d %c %c %d", oLT9h7ifrDH[U5nJHBVU].name, &oLT9h7ifrDH[U5nJHBVU].a, &oLT9h7ifrDH[U5nJHBVU].ytpsK4Wh, &oLT9h7ifrDH[U5nJHBVU].sit1, &oLT9h7ifrDH[U5nJHBVU].sit2, &oLT9h7ifrDH[U5nJHBVU].num);
        oLT9h7ifrDH[U5nJHBVU].totle = 0;
        if (oLT9h7ifrDH[U5nJHBVU].a > (868 - 788) && oLT9h7ifrDH[U5nJHBVU].num != 0) {
            oLT9h7ifrDH[U5nJHBVU].totle += 8000;
        }
        if ((561 - 476) < oLT9h7ifrDH[U5nJHBVU].a && oLT9h7ifrDH[U5nJHBVU].ytpsK4Wh > (923 - 843)) {
            oLT9h7ifrDH[U5nJHBVU].totle = oLT9h7ifrDH[U5nJHBVU].totle + 4000;
        }
        if (oLT9h7ifrDH[U5nJHBVU].a > (344 - 254)) {
            oLT9h7ifrDH[U5nJHBVU].totle = oLT9h7ifrDH[U5nJHBVU].totle + 2000;
        }
        if (oLT9h7ifrDH[U5nJHBVU].a > 85 && oLT9h7ifrDH[U5nJHBVU].sit2 == 'Y') {
            oLT9h7ifrDH[U5nJHBVU].totle = oLT9h7ifrDH[U5nJHBVU].totle + 1000;
        }
        if (oLT9h7ifrDH[U5nJHBVU].ytpsK4Wh > 80 && oLT9h7ifrDH[U5nJHBVU].sit1 == 'Y') {
            oLT9h7ifrDH[U5nJHBVU].totle = oLT9h7ifrDH[U5nJHBVU].totle + (1257 - 407);
        };
    }
    {
        U5nJHBVU = 0;
        while (U5nJHBVU < count) {
            totle += oLT9h7ifrDH[U5nJHBVU].totle;
            if (oLT9h7ifrDH[U5nJHBVU].totle > QQlKySB) {
                QQlKySB = oLT9h7ifrDH[U5nJHBVU].totle;
                H3lx7osvU2 = U5nJHBVU;
            }
            U5nJHBVU++;
        };
    }
    printf ("%s\n%d\n%ld\n", oLT9h7ifrDH[H3lx7osvU2].name, oLT9h7ifrDH[H3lx7osvU2].totle, totle);
}

