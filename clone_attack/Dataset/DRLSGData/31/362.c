struct   a {
    struct   a *dwyedk;
    char a [(98 - 78)];
    char b [(887 - 867)];
    char YqNYpzU;
    char d [(456 - 436)];
    char e [(184 - 164)];
    char JMIJAtBY [20];
    struct   a *pMVUO3DcTh;
};
int main () {
    struct   a *pHeader;
    struct   a *csR03uaNyMbL;
    struct   a *p1;
    struct   a *p;
    pHeader = (struct   a *) malloc (sizeof (struct   a));
    pHeader->dwyedk = NULL;
    p1 = pHeader;
    {
        for (; true;) {
            p = (struct   a *) malloc (sizeof (struct   a));
            scanf ("%s", p->a);
            if (!('e' != p->a[(628 - 628)])) {
                csR03uaNyMbL = p;
                p->dwyedk = p1;
                p1->pMVUO3DcTh = p;
                p->pMVUO3DcTh = NULL;
                break;
            }
            p->dwyedk = p1;
            p1->pMVUO3DcTh = p;
            p1 = p;
            scanf ("%s %c %s %s %s", p->b, &p->YqNYpzU, p->d, p->e, p->JMIJAtBY);
        }
    }
    printf ("%s %s %c %s %s %s\n", p1->a, p1->b, p1->YqNYpzU, p1->d, p1->e, p1->JMIJAtBY);
    free (p1->pMVUO3DcTh);
    {
        for (; true;) {
            printf ("%s %s %c %s %s %s\n", p1->dwyedk->a, p1->dwyedk->b, p1->dwyedk->YqNYpzU, p1->dwyedk->d, p1->dwyedk->e, p1->dwyedk->JMIJAtBY);
            p1 = p1->dwyedk;
            free (p1->pMVUO3DcTh);
            if (!(NULL != p1->dwyedk))
                break;
        }
    }
}

