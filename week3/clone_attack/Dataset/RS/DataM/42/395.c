main () {
    int iOw74SX;
    iOw74SX = 0;
    int Gf4VvDya = 0;
    int osVLQy6;
    int jq5Ws0;
    int ErQhRlLEH;
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
    ErQhRlLEH = 0;
    int D5ljgGvxBYS [100000];
    scanf ("%d", &osVLQy6);
    for (Gf4VvDya;
    Gf4VvDya < osVLQy6; Gf4VvDya++) {
        scanf ("%d", &D5ljgGvxBYS[Gf4VvDya]);
        ErQhRlLEH++;
    }
    scanf ("%d", &jq5Ws0);
    for (; iOw74SX != ErQhRlLEH;) {
        if (D5ljgGvxBYS[iOw74SX] == jq5Ws0) {
            Gf4VvDya = iOw74SX;
            ErQhRlLEH--;
            for (Gf4VvDya;
            Gf4VvDya < ErQhRlLEH; Gf4VvDya++) {
                D5ljgGvxBYS[Gf4VvDya] = D5ljgGvxBYS[Gf4VvDya +1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        else
            iOw74SX = iOw74SX + 1;
    }
    printf ("%d", D5ljgGvxBYS[0]);
    for (Gf4VvDya = 1; Gf4VvDya < ErQhRlLEH; Gf4VvDya++)
        printf (" %d", D5ljgGvxBYS[Gf4VvDya]);
}

