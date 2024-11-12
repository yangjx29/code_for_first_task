void  main () {
    int NkdWrDKbl;
    int FXJ7RtV;
    int MqbvILpD;
    int Dj8HJpumY;
    int bdbD6l;
    int CrBo7lYWnca [1000];
    int QBhFKHG85 [26] = {(421 - 421)};
    NkdWrDKbl = (159 - 159);
    FXJ7RtV = 0;
    char YOVr0Sms [1000] [27];
    scanf ("%d", &MqbvILpD);
    for (Dj8HJpumY = 0; MqbvILpD > Dj8HJpumY; Dj8HJpumY = Dj8HJpumY +1)
        scanf ("%d %s", &CrBo7lYWnca[Dj8HJpumY], YOVr0Sms[Dj8HJpumY]);
    for (Dj8HJpumY = 0; MqbvILpD > Dj8HJpumY; Dj8HJpumY = Dj8HJpumY +1) {
        bdbD6l = 0;
        while (!('\0' == YOVr0Sms[Dj8HJpumY][bdbD6l])) {
            QBhFKHG85[YOVr0Sms[Dj8HJpumY][bdbD6l] - 'A']++;
            bdbD6l++;
        };
    }
    {
        Dj8HJpumY = 0;
        while (Dj8HJpumY < 26) {
            if (NkdWrDKbl < QBhFKHG85[Dj8HJpumY]) {
                NkdWrDKbl = QBhFKHG85[Dj8HJpumY];
                FXJ7RtV = Dj8HJpumY;
            }
            Dj8HJpumY = Dj8HJpumY +1;
        };
    }
    printf ("%c\n%d\n", FXJ7RtV +'A', NkdWrDKbl);
    for (Dj8HJpumY = 0; Dj8HJpumY < MqbvILpD; Dj8HJpumY++)
        for (bdbD6l = 0; YOVr0Sms[Dj8HJpumY][bdbD6l] != 0; bdbD6l++)
            if (YOVr0Sms[Dj8HJpumY][bdbD6l] == FXJ7RtV +'A') {
                printf ("%d\n", CrBo7lYWnca[Dj8HJpumY]);
                break;
            };
}

