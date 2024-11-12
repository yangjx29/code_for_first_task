struct   stu {
    char sFYu6b [(194 - 169)];
    int s1;
    int IGJeXdMh;
    char yZYI6XDpBy;
    char rdzH8Efxr;
    int B9CwLUgaS;
    int sum;
    struct   stu *next;
};
struct   stu *creat (int n) {
    int EZHiudgtaAMG;
    struct   stu *hWIDbkl7E;
    struct   stu *p1, *jcrVMQZlJw4n;
    p1 = jcrVMQZlJw4n = (struct   stu *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", p1->sFYu6b, &p1->s1, &p1->IGJeXdMh, &p1->yZYI6XDpBy, &p1->rdzH8Efxr, &p1->B9CwLUgaS);
    hWIDbkl7E = NULL;
    for (EZHiudgtaAMG = (808 - 808); n - 1 > EZHiudgtaAMG; EZHiudgtaAMG++) {
        if (!((455 - 455) != EZHiudgtaAMG))
            hWIDbkl7E = p1;
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s %d %d %c %c %d", p1->sFYu6b, &p1->s1, &p1->IGJeXdMh, &p1->yZYI6XDpBy, &p1->rdzH8Efxr, &p1->B9CwLUgaS);
        jcrVMQZlJw4n->next = p1;
        jcrVMQZlJw4n = p1;
    }
    jcrVMQZlJw4n->next = NULL;
    return (hWIDbkl7E);
}

void  Nmwu68Al (struct   stu *hWIDbkl7E) {
    struct   stu *p;
    p = hWIDbkl7E;
    if (hWIDbkl7E != NULL)
        do {
            printf ("%s %d %d %c %c %d\n", p->sFYu6b, p->s1, p->IGJeXdMh, p->yZYI6XDpBy, p->rdzH8Efxr, p->B9CwLUgaS);
            p = p->next;
        }
        while (p != NULL);
}

main () {
    struct   stu *hWIDbkl7E, *p1, *jcrVMQZlJw4n, *OxaFdTEWe, *p;
    int n, EZHiudgtaAMG, uUMcRE6x3aS, GPdWAFM1n;
    scanf ("%d", &n);
    hWIDbkl7E = creat (n);
    OxaFdTEWe = jcrVMQZlJw4n = p1 = hWIDbkl7E;
    for (EZHiudgtaAMG = (271 - 271); EZHiudgtaAMG < n; EZHiudgtaAMG++) {
        p1->sum = (89 - 89);
        if (((735 - 735) < p1->B9CwLUgaS) && (p1->s1 > (95 - 15)))
            p1->sum = p1->sum + (8022 - 22);
        if (((1007 - 927) < p1->IGJeXdMh) && (p1->s1 > (575 - 490)))
            p1->sum = p1->sum + (4472 - 472);
        if ((355 - 265) < p1->s1)
            p1->sum = p1->sum + (2779 - 779);
        if ((!('Y' != p1->rdzH8Efxr)) && (p1->s1 > (831 - 746)))
            p1->sum = p1->sum + (1523 - 523);
        if ((!('Y' != p1->yZYI6XDpBy)) && (p1->IGJeXdMh > (262 - 182)))
            p1->sum = p1->sum + (1574 - 724);
        p1 = p1->next;
    }
    p1 = hWIDbkl7E;
    uUMcRE6x3aS = (374 - 374);
    GPdWAFM1n = (394 - 394);
    for (EZHiudgtaAMG = (679 - 679); EZHiudgtaAMG < n; EZHiudgtaAMG++) {
        if (p1->sum > GPdWAFM1n) {
            GPdWAFM1n = p1->sum;
            jcrVMQZlJw4n = p1;
        }
        p1 = p1->next;
    }
    p1 = hWIDbkl7E;
    for (EZHiudgtaAMG = (523 - 523); EZHiudgtaAMG < n; EZHiudgtaAMG++) {
        uUMcRE6x3aS = uUMcRE6x3aS + p1->sum;
        p1 = p1->next;
    }
    printf ("%s\n%d\n%d\n", jcrVMQZlJw4n->sFYu6b, jcrVMQZlJw4n->sum, uUMcRE6x3aS);
}

