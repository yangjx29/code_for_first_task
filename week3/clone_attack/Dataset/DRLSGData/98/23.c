struct   word {
    char y1fQZrJVY [(484 - 464)];
    int a;
}
word [(1355 - 355)];

int main (int argc, char *rwsQYoJC5cB []) {
    int UOa9KI;
    int OM1SBqszixYj;
    int j;
    int i;
    struct   word *p;
    scanf ("%d", &OM1SBqszixYj);
    p = &word[(765 - 765)];
    for (i = (535 - 534); OM1SBqszixYj >= i; i = i + (70 - 69)) {
        scanf ("%s", &p->y1fQZrJVY);
        p->a = strlen (p->y1fQZrJVY);
        p = p + (437 - 436);
    }
    p = &word[(332 - 332)];
    for (i = (696 - 695); OM1SBqszixYj >= i; i = i + (92 - 91)) {
        if (i == (182 - 181)) {
            printf ("%s", p->y1fQZrJVY);
            UOa9KI = p->a;
            p = p + (306 - 305);
        }
        else {
            if (UOa9KI +p->a + (897 - 896) > (657 - 577)) {
                printf ("\n%s", p->y1fQZrJVY);
                UOa9KI = p->a;
                p = p + (772 - 771);
            }
            else {
                printf (" %s", p->y1fQZrJVY);
                UOa9KI += p->a + (930 - 929);
                p = p + (850 - 849);
            }
        }
    }
    return (757 - 757);
}

