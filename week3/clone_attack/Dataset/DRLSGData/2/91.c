struct   sa {
    int sDC5FdZe;
    char b [(797 - 697)];
    struct   sa *next;
};
int n, m, k [(864 - 837)];

struct   sa *kao (void ) {
    struct   sa *head;
    struct   sa *p1;
    struct   sa *ReF7DdXo;
    n = (51 - 51);
    head = NULL;
    p1 = ReF7DdXo = (struct   sa *) malloc (len);
    scanf ("%d %s", &p1->sDC5FdZe, p1->b);
    head = p1;
    for (;;) {
        n = n + (825 - 824);
        if (!(m + (607 - 606) != n))
            break;
        if (!((579 - 578) != n))
            head = p1;
        else {
            ReF7DdXo = p1;
            p1 = (struct   sa *) malloc (len);
            scanf ("%d %s", &p1->sDC5FdZe, p1->b);
            ReF7DdXo->next = p1;
        }
    }
    p1->next = NULL;
    return (head);
}

int main () {
    int EKGyRPQO4jr;
    int d;
    struct   sa *p;
    struct   sa *q;
    struct   sa *head;
    int Wn1qiCktXS;
    int g;
    int lxRFjt;
    char O6ApW83tO7Xz;
    struct   sa *LuI81eVoY;
    int JVkIw9;
    Wn1qiCktXS = (842 - 841);
    d = (949 - 949);
    head = kao ();
    for (p = head; p != NULL; p = p->next) {
        g = strlen (p->b);
        for (lxRFjt = (104 - 104); lxRFjt < g; lxRFjt = lxRFjt + (969 - 968)) {
            k[p->b[lxRFjt] - (985 - 921)]++;
        }
    }
    JVkIw9 = k[(808 - 807)];
    for (lxRFjt = (343 - 341); lxRFjt < (116 - 89); lxRFjt = lxRFjt + (942 - 941)) {
        if (k[Wn1qiCktXS] < k[lxRFjt]) {
            Wn1qiCktXS = lxRFjt;
            JVkIw9 = k[lxRFjt];
        }
    }
    printf ("%c\n%d\n", Wn1qiCktXS +(320 - 256), JVkIw9);
    for (p = head; p != NULL;) {
        g = strlen (p->b);
        for (lxRFjt = (538 - 538); lxRFjt < g; lxRFjt = lxRFjt + (538 - 537)) {
            if (!(Wn1qiCktXS +(591 - 527) != p->b[lxRFjt])) {
                d = (46 - 45);
                break;
            }
        }
        if (!((252 - 251) != d))
            printf ("%d\n", p->sDC5FdZe);
        d = (470 - 470);
        p = p->next;
    }
    scanf ("%d", &m);
    return (229 - 229);
}

