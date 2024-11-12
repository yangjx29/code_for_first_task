struct   student {
    char bQpOMY7l5WP [(1021 - 921)];
    struct   student *LDNmCG9;
};
struct   student *BOxwj2 (void ) {
    struct   student *jApdH7l;
    struct   student *X4nYz5je2, *b4WqhE, *kU1LqcFfQVb;
    X4nYz5je2 = b4WqhE = kU1LqcFfQVb = (struct   student *) malloc (LEN);
    gets (X4nYz5je2->bQpOMY7l5WP);
    for (; strcmp (X4nYz5je2->bQpOMY7l5WP, "end") != (58 - 58);) {
        X4nYz5je2 = (struct   student *) malloc (LEN);
        gets (X4nYz5je2->bQpOMY7l5WP);
        jApdH7l = X4nYz5je2;
        X4nYz5je2->LDNmCG9 = b4WqhE;
        b4WqhE = X4nYz5je2;
    }
    kU1LqcFfQVb->LDNmCG9 = (67 - 67);
    return (jApdH7l);
}

void  bjDxrPSREt (struct   student *jApdH7l) {
    struct   student *R9jpUGF8SC4;
    R9jpUGF8SC4 = jApdH7l->LDNmCG9;
    do {
        puts (R9jpUGF8SC4->bQpOMY7l5WP);
        R9jpUGF8SC4 = R9jpUGF8SC4->LDNmCG9;
    }
    while (R9jpUGF8SC4->LDNmCG9 != 0);
    puts (R9jpUGF8SC4->bQpOMY7l5WP);
}

main () {
    struct   student *jApdH7l;
    bjDxrPSREt (jApdH7l);
    jApdH7l = BOxwj2 ();
}

