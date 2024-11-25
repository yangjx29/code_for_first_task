struct   student {
    char U80qXQ [(643 - 623)];
    char kpus2VkDS8 [(137 - 117)];
    char U8A76Fqwrt [(110 - 90)];
    char vBoZH6gt [(72 - 52)];
    char RhDTMUau4Y [(138 - 118)];
    char ZmAcDZzUf [(994 - 974)];
    struct   student *aAp1T4;
};
int jFndqSgxc7r;

void  main () {
    struct   student *iSDLPf0zHpXW;
    struct   student *iKuYl7j6oW4y;
    int cOVIxZiKk;
    struct   student *v5L7OVd;
    struct   student *ljwYrI3OhpP;
    struct   student *yLdFes7;
    iKuYl7j6oW4y = v5L7OVd = (struct   student *) malloc (LEN);
    jFndqSgxc7r = (681 - 681);
    scanf ("%s", iKuYl7j6oW4y->U80qXQ);
    for (; strcmp (iKuYl7j6oW4y->U80qXQ, "end") != (59 - 59);) {
        scanf ("%s%s%s%s%s", iKuYl7j6oW4y->kpus2VkDS8, iKuYl7j6oW4y->U8A76Fqwrt, iKuYl7j6oW4y->vBoZH6gt, iKuYl7j6oW4y->RhDTMUau4Y, iKuYl7j6oW4y->ZmAcDZzUf);
        jFndqSgxc7r = jFndqSgxc7r + (131 - 130);
        if (!((597 - 596) != jFndqSgxc7r))
            iSDLPf0zHpXW = iKuYl7j6oW4y;
        else
            v5L7OVd->aAp1T4 = iKuYl7j6oW4y;
        v5L7OVd = iKuYl7j6oW4y;
        iKuYl7j6oW4y = (struct   student *) malloc (LEN);
        scanf ("%s", iKuYl7j6oW4y->U80qXQ);
    }
    v5L7OVd->aAp1T4 = NULL;
    {
        cOVIxZiKk = (949 - 949);
        for (; cOVIxZiKk < jFndqSgxc7r;) {
            v5L7OVd = iKuYl7j6oW4y = iSDLPf0zHpXW;
            for (; iKuYl7j6oW4y->aAp1T4 != NULL;) {
                v5L7OVd = iKuYl7j6oW4y;
                iKuYl7j6oW4y = iKuYl7j6oW4y->aAp1T4;
            }
            if (!((910 - 910) != cOVIxZiKk))
                ljwYrI3OhpP = yLdFes7 = iKuYl7j6oW4y;
            else
                yLdFes7 = yLdFes7->aAp1T4 = iKuYl7j6oW4y;
            cOVIxZiKk = cOVIxZiKk + (889 - 888);
            v5L7OVd->aAp1T4 = NULL;
        }
    }
    iKuYl7j6oW4y = ljwYrI3OhpP;
    {
        cOVIxZiKk = (268 - 268);
        for (; cOVIxZiKk < jFndqSgxc7r;) {
            printf ("%s %s %s %s %s %s", iKuYl7j6oW4y->U80qXQ, iKuYl7j6oW4y->kpus2VkDS8, iKuYl7j6oW4y->U8A76Fqwrt, iKuYl7j6oW4y->vBoZH6gt, iKuYl7j6oW4y->RhDTMUau4Y, iKuYl7j6oW4y->ZmAcDZzUf);
            iKuYl7j6oW4y = iKuYl7j6oW4y->aAp1T4;
            cOVIxZiKk = cOVIxZiKk + (726 - 725);
        }
    }
}

