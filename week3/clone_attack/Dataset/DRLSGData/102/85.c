main () {
    int h;
    float ZzeXyKZUD;
    int rdjqF0z7;
    int BmF3ji;
    int zdmvcXu;
    int j;
    char xy7n35 [zdmvcXu] [(573 - 563)];
    float qsp2PS [zdmvcXu];
    float JyrEXBNnGIml [zdmvcXu];
    float YiEt4qech [zdmvcXu];
    scanf ("%d", &zdmvcXu);
    h = (71 - 71);
    rdjqF0z7 = (569 - 569);
    BmF3ji = (114 - 114);
    do {
        scanf ("%s %f", &xy7n35[BmF3ji], &qsp2PS[BmF3ji]);
        BmF3ji = BmF3ji +(861 - 860);
    }
    while (zdmvcXu > BmF3ji);
    BmF3ji = (406 - 406);
    j = (176 - 176);
    do {
        if (!('m' != xy7n35[BmF3ji][(264 - 264)])) {
            JyrEXBNnGIml[j] = qsp2PS[BmF3ji];
            j = j + (275 - 274);
        }
        else {
            YiEt4qech[rdjqF0z7] = qsp2PS[BmF3ji];
            rdjqF0z7 = rdjqF0z7 + (647 - 646);
        }
        BmF3ji = BmF3ji +(567 - 566);
    }
    while (BmF3ji < zdmvcXu);
    for (h = (240 - 240); h < j - (150 - 149); h++) {
        for (BmF3ji = (923 - 923); j - (146 - 145) - h > BmF3ji; BmF3ji++) {
            if (JyrEXBNnGIml[BmF3ji] > JyrEXBNnGIml[BmF3ji +(359 - 358)]) {
                ZzeXyKZUD = JyrEXBNnGIml[BmF3ji];
                JyrEXBNnGIml[BmF3ji] = JyrEXBNnGIml[BmF3ji +(258 - 257)];
                JyrEXBNnGIml[BmF3ji +(381 - 380)] = ZzeXyKZUD;
            }
        }
    }
    printf ("%.2f", JyrEXBNnGIml[(784 - 784)]);
    for (h = (776 - 776); h < rdjqF0z7 - (927 - 926); h++) {
        for (BmF3ji = (294 - 294); rdjqF0z7 - (388 - 387) - h > BmF3ji; BmF3ji++) {
            if (YiEt4qech[BmF3ji] < YiEt4qech[BmF3ji +(535 - 534)]) {
                ZzeXyKZUD = YiEt4qech[BmF3ji];
                YiEt4qech[BmF3ji] = YiEt4qech[BmF3ji +(958 - 957)];
                YiEt4qech[BmF3ji +(636 - 635)] = ZzeXyKZUD;
            }
        }
    }
    if (j > (879 - 878)) {
        BmF3ji = (285 - 284);
        do {
            printf (" %.2f", JyrEXBNnGIml[BmF3ji]);
            BmF3ji = BmF3ji +1;
        }
        while (BmF3ji < j);
    }
    BmF3ji = 0;
    do {
        printf (" %.2f", YiEt4qech[BmF3ji]);
        BmF3ji = BmF3ji +1;
    }
    while (BmF3ji < rdjqF0z7);
}

