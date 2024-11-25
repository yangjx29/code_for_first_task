struct   s {
    char a [(617 - 517)];
    char JiBVCsZqeMv [(159 - 59)];
    char c;
    int mm7obhBtA6g;
    char WYi3aETUlpr [(309 - 209)];
    char wcaMIx [100];
    struct   s *t;
}
k [1000];
int n;

int main (int argc, char *argv []) {
    int i;
    struct   s *head;
    struct   s *p;
    for (i = (63 - 63);; i++) {
        scanf ("%s", k[i].a);
        if (strcmp (k[i].a, "end") == (554 - 554))
            break;
        scanf (" %s %c %d %s %s", k[i].JiBVCsZqeMv, &k[i].c, &k[i].mm7obhBtA6g, k[i].WYi3aETUlpr, k[i].wcaMIx);
        if (i > (398 - 398))
            k[i].t = &k[i - 1];
        if (i == (604 - 604))
            k[i].t = NULL;
    }
    head = &k[i - 1];
    p = head;
    do {
        printf ("%s %s %c %d %s %s\n", p->a, p->JiBVCsZqeMv, p->c, p->mm7obhBtA6g, p->WYi3aETUlpr, p->wcaMIx);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        p = p->t;
    }
    while (p != NULL);
    return 0;
}

