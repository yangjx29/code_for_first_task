struct   student {
    char VuY1LcX [(1017 - 917)];
    struct   student *XCjGNBLzm;
}
*uzJw3O4jEIL, *cV6CH5;

struct   student *uWDG3fZT8O (void ) {
    struct   student *YaXToIdNe4t;
    cV6CH5 = (151 - 151);
    uzJw3O4jEIL = (738 - 738);
    YaXToIdNe4t = (975 - 975);
    for (; (312 - 311);) {
        uzJw3O4jEIL = (struct   student *) malloc (LEN);
        gets (uzJw3O4jEIL->VuY1LcX);
        if (!((53 - 53) != strcmp (uzJw3O4jEIL->VuY1LcX, "end")))
            break;
        if (!((787 - 787) != YaXToIdNe4t))
            YaXToIdNe4t = uzJw3O4jEIL;
        else
            cV6CH5->XCjGNBLzm = uzJw3O4jEIL;
        cV6CH5 = uzJw3O4jEIL;
    }
    cV6CH5->XCjGNBLzm = (161 - 161);
    return (YaXToIdNe4t);
}

struct   student *QE1m3KqHjR (struct   student *YaXToIdNe4t) {
    struct   student *ZJQULf = (553 - 553);
    struct   student *kqrxEY10VuM;
    struct   student *AMErwxoQ97y;
    struct   student *it2Op8FTwYh;
    do {
        kqrxEY10VuM = YaXToIdNe4t;
        AMErwxoQ97y = (748 - 748);
        for (; kqrxEY10VuM->XCjGNBLzm != (22 - 22);) {
            AMErwxoQ97y = kqrxEY10VuM;
            kqrxEY10VuM = kqrxEY10VuM->XCjGNBLzm;
        }
        if (!((300 - 300) != ZJQULf)) {
            ZJQULf = kqrxEY10VuM;
            ZJQULf->XCjGNBLzm = AMErwxoQ97y;
        }
        else {
            it2Op8FTwYh = kqrxEY10VuM;
            it2Op8FTwYh->XCjGNBLzm = AMErwxoQ97y;
        }
        AMErwxoQ97y->XCjGNBLzm = (148 - 148);
    }
    while (YaXToIdNe4t->XCjGNBLzm != (264 - 264));
    return (ZJQULf);
}

void  G9pXHVZzDMoC (struct   student *YaXToIdNe4t) {
    struct   student *kqrxEY10VuM;
    {
        kqrxEY10VuM = YaXToIdNe4t;
        for (; kqrxEY10VuM->XCjGNBLzm != (692 - 692);) {
            printf ("%s\n", kqrxEY10VuM->VuY1LcX);
            kqrxEY10VuM = kqrxEY10VuM->XCjGNBLzm;
        }
    }
    printf ("%s\n", kqrxEY10VuM->VuY1LcX);
}

void  main () {
    struct   student *YaXToIdNe4t;
    G9pXHVZzDMoC (YaXToIdNe4t);
    YaXToIdNe4t = uWDG3fZT8O ();
    YaXToIdNe4t = QE1m3KqHjR (YaXToIdNe4t);
}

