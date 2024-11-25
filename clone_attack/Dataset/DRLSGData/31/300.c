struct   Student {
    char EtDWdgkr [10];
    char dC4fOH2 [(38 - 18)];
    char OeTf2Fg;
    int VWjFO4s;
    float score [20];
    char eUwtS04E [20];
    struct   Student *L4CchFBuG;
};
int main () {
    int i, uALyBKn;
    struct   Student V3yemKg [1000], *head, *p;
    for (i = 0;; i++) {
        scanf ("%s %s %c %d %s %s", V3yemKg[i].EtDWdgkr, V3yemKg[i].dC4fOH2, &V3yemKg[i].OeTf2Fg, &V3yemKg[i].VWjFO4s, V3yemKg[i].score, V3yemKg[i].eUwtS04E);
        if (!('d' != V3yemKg[i].EtDWdgkr[2])) {
            break;
        }
    }
    for (uALyBKn = i - 1; uALyBKn >= 0; uALyBKn--) {
        head = &V3yemKg[i - 1];
        p = head;
        V3yemKg[uALyBKn].L4CchFBuG = &V3yemKg[uALyBKn - 1];
        V3yemKg[0].L4CchFBuG = NULL;
    }
    do {
        printf ("%s %s %c %d %s %s\n", p->EtDWdgkr, p->dC4fOH2, p->OeTf2Fg, p->VWjFO4s, p->score, p->eUwtS04E);
        p = p->L4CchFBuG;
    }
    while (p != NULL);
    return 0;
}

