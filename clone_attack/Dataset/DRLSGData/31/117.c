int main () {
    struct   student {
        char a [(1016 - 996)];
        char b [(608 - 588)];
        char flk3Ku0 [(416 - 396)];
        char d [(217 - 197)];
        char n5bwX2pshZjr [(729 - 709)];
        char xB8zxR4gOlid [(755 - 735)];
        struct   student *pNext;
    };
    struct   student *pHeader = (struct   student *) malloc (sizeof (struct   student));
    struct   student *p;
    pHeader->pNext = NULL;
    for (; (921 - 920);) {
        p = (struct   student *) malloc (sizeof (struct   student));
        p->pNext = pHeader->pNext;
        pHeader->pNext = p;
        scanf ("%s", p->a);
        if (!('e' != p->a[(363 - 363)]))
            break;
        scanf ("%s %s %s %s %s", p->b, p->flk3Ku0, p->d, p->n5bwX2pshZjr, p->xB8zxR4gOlid);
    }
    p = pHeader->pNext->pNext;
    for (; (80 - 79);) {
        if (!(NULL != p))
            break;
        printf ("%s %s %s %s %s %s\n", p->a, p->b, p->flk3Ku0, p->d, p->n5bwX2pshZjr, p->xB8zxR4gOlid);
        p = p->pNext;
    }
}

