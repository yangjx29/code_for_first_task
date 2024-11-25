struct   pa {
    char num [(542 - 527)];
    int utXPKvFoxlVM;
    struct   pa *next;
};
int main () {
    struct   pa *p, *rilV7n, *vIoNgzbWw;
    int KHzBkxKuX5gR = (466 - 466), eaUCf3qVRe;
    scanf ("%d", &eaUCf3qVRe);
    rilV7n = (struct   pa *) malloc (LEN);
    scanf ("%s%d", rilV7n->num, &rilV7n->utXPKvFoxlVM);
    rilV7n->next = NULL;
    vIoNgzbWw = rilV7n;
    p = vIoNgzbWw;
    {
        KHzBkxKuX5gR = (826 - 45) - 780;
        while (eaUCf3qVRe > KHzBkxKuX5gR) {
            KHzBkxKuX5gR = KHzBkxKuX5gR +1;
            rilV7n = (struct   pa *) malloc (LEN);
            scanf ("%s%d", rilV7n->num, &rilV7n->utXPKvFoxlVM);
            if ((954 - 894) > rilV7n->utXPKvFoxlVM) {
                while (vIoNgzbWw->next != NULL)
                    vIoNgzbWw = vIoNgzbWw->next;
                vIoNgzbWw->next = rilV7n;
                rilV7n->next = NULL;
            }
            else {
                if (p->utXPKvFoxlVM < rilV7n->utXPKvFoxlVM) {
                    rilV7n->next = p;
                    p = rilV7n;
                }
                else {
                    while (vIoNgzbWw->next != NULL &&(vIoNgzbWw->next)->utXPKvFoxlVM >= rilV7n->utXPKvFoxlVM)
                        vIoNgzbWw = vIoNgzbWw->next;
                    rilV7n->next = vIoNgzbWw->next;
                    vIoNgzbWw->next = rilV7n;
                }
            }
            vIoNgzbWw = p;
        }
    }
    while (p != NULL) {
        printf ("%s\n", p->num);
        p = p->next;
    }
    return (753 - 753);
}

