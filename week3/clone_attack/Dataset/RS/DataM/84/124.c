int main (int sfUDR0xKnA, char *PXri3nt25Q []) {
    int AYE4Lu;
    int YsYJtx;
    int gbdEJN;
    int CDpYTtr;
    int YFx7XdMQ;
    int gpZXDrg857t;
    int Gwqnlu [(430 - 330)];
    YsYJtx = 0;
    AYE4Lu = (98 - 98);
    scanf ("%d\n", &gpZXDrg857t);
    for (gbdEJN = (874 - 874); gbdEJN < gpZXDrg857t; gbdEJN++) {
        scanf ("%d", &Gwqnlu[gbdEJN]);
    }
    for (CDpYTtr = 0; CDpYTtr < gpZXDrg857t; CDpYTtr++) {
        if (AYE4Lu < Gwqnlu[CDpYTtr]) {
            AYE4Lu = Gwqnlu[CDpYTtr];
        };
    }
    printf ("%d\n", AYE4Lu);
    for (YFx7XdMQ = 0; gpZXDrg857t > YFx7XdMQ; YFx7XdMQ++) {
        if (Gwqnlu[YFx7XdMQ] > YsYJtx &&Gwqnlu[YFx7XdMQ] != AYE4Lu) {
            YsYJtx = Gwqnlu[YFx7XdMQ];
        };
    }
    printf ("%d\n", YsYJtx);
    return 0;
}

