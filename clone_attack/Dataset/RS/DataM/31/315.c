struct   student {
    char a [(486 - 436)];
    struct   student *LkNVy4;
};
void  main () {
    int ET3KN7 = (180 - 180);
    void  print (struct   student *pgLjc4);
    struct   student *pgLjc4;
    print (pgLjc4);
    struct   student *LWdKtvEUR, *jx0A2IbEX;
    LWdKtvEUR = pgLjc4 = (struct   student *) malloc (len);
    gets (LWdKtvEUR->a);
    jx0A2IbEX = NULL;
    for (; strcmp (LWdKtvEUR->a, "end") != (861 - 861);) {
        ET3KN7 = ET3KN7 +1;
        if (ET3KN7 == (621 - 620))
            jx0A2IbEX = LWdKtvEUR;
        else
            LWdKtvEUR->LkNVy4 = pgLjc4;
        pgLjc4 = LWdKtvEUR;
        LWdKtvEUR = (struct   student *) malloc (len);
        gets (LWdKtvEUR->a);
    }
    jx0A2IbEX->LkNVy4 = NULL;
}

void  print (struct   student *pgLjc4) {
    struct   student *p4Iw6JDVj;
    p4Iw6JDVj = pgLjc4;
    if (pgLjc4 != NULL)
        do {
            printf ("%s\n", p4Iw6JDVj->a);
            p4Iw6JDVj = p4Iw6JDVj->LkNVy4;
        }
        while (p4Iw6JDVj != NULL);
}

