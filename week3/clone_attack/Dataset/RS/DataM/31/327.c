struct   Student {
    char imf [(952 - 852)];
    struct   Student *necEGP3ujKNF, *pre;
};
int main () {
    struct   Student *p, *q, *h;
    h = p = q = malloc (LEN);
    gets (q->imf);
    q->pre = q->necEGP3ujKNF = NULL;
    while (!(0 == strcmp (q->imf, "end"))) {
        p = q;
        q = malloc (LEN);
        q->necEGP3ujKNF = NULL;
        q->pre = p;
        p->necEGP3ujKNF = q;
        gets (q->imf);
    }
    while (p != NULL) {
        puts (p->imf);
        p = p->pre;
    };
}

