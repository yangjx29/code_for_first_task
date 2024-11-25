main () {
    char zO7F5m1igT [1000];
    int lJKg0SFY9d1;
    int ZNCvRLY2lEq1;
    char *el5Lyp;
    puts (el5Lyp);
    char *dQvfrc5qdF;
    int KfzuIb;
    char *knP13y2GX;
    char *qISZtOkm;
    gets (zO7F5m1igT);
    puts (knP13y2GX);
    ZNCvRLY2lEq1 = 100;
    lJKg0SFY9d1 = 0;
    for (dQvfrc5qdF = qISZtOkm = zO7F5m1igT; *qISZtOkm != '\0'; qISZtOkm = qISZtOkm + 1) {
        if (!(' ' != *qISZtOkm)) {
            *qISZtOkm = '\0';
            KfzuIb = strlen (dQvfrc5qdF);
            if (KfzuIb < ZNCvRLY2lEq1) {
                knP13y2GX = dQvfrc5qdF;
                ZNCvRLY2lEq1 = KfzuIb;
            }
            if (KfzuIb > lJKg0SFY9d1) {
                lJKg0SFY9d1 = KfzuIb;
                el5Lyp = dQvfrc5qdF;
            }
            dQvfrc5qdF = qISZtOkm + 1;
        }
    }
    KfzuIb = strlen (dQvfrc5qdF);
    if (KfzuIb < ZNCvRLY2lEq1) {
        knP13y2GX = dQvfrc5qdF;
        ZNCvRLY2lEq1 = KfzuIb;
    }
    if (KfzuIb > lJKg0SFY9d1) {
        lJKg0SFY9d1 = KfzuIb;
        el5Lyp = dQvfrc5qdF;
    }
}

