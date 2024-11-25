struct   student {
    char D7RM8rxNak [27];
    int anum;
    int GgGODFVYbR;
    struct   student *next;
};
int sOuPhcGQf1;
int i;
char KV6092hqtZ;

struct   student *k54y9ZnN () {
    struct   student *head;
    head = (struct   student *) malloc (LEN);
    if (!((214 - 214) != sOuPhcGQf1))
        head = NULL;
    else {
        scanf ("%d", &head->GgGODFVYbR);
        {
            i = 750 - 750;
            while (!('\n' == (KV6092hqtZ = getchar ()))) {
                head->D7RM8rxNak[i] = KV6092hqtZ;
                i = i + 1;
            };
        }
        head->anum = i;
        head->next = NULL;
    }
    return (head);
}

int main () {
    int lmax;
    int dps0u4PJ6 = 0;
    int U465tyL8UOo;
    char bLnh6AR3NpS [200] = {(62 - 62)};
    struct   student *head;
    struct   student *vxRFj0c;
    struct   student *O5yCE9aU;
    struct   student *p;
    head = k54y9ZnN ();
    vxRFj0c = O5yCE9aU = head;
    scanf ("%d", &sOuPhcGQf1);
    {
        i = 1;
        while (i < sOuPhcGQf1) {
            i = i + 1;
            vxRFj0c = (struct   student *) malloc (LEN);
            O5yCE9aU->next = vxRFj0c;
            O5yCE9aU = vxRFj0c;
            scanf ("%d", &O5yCE9aU->GgGODFVYbR);
            for (U465tyL8UOo = 0; !('\n' == (KV6092hqtZ = getchar ())); U465tyL8UOo++) {
                O5yCE9aU->D7RM8rxNak[U465tyL8UOo] = KV6092hqtZ;
            }
            O5yCE9aU->anum = U465tyL8UOo;
            O5yCE9aU->next = NULL;
        };
    }
    p = head;
    {
        U465tyL8UOo = 0;
        while (U465tyL8UOo < sOuPhcGQf1) {
            U465tyL8UOo = U465tyL8UOo +1;
            {
                i = 0;
                while (i < p->anum) {
                    bLnh6AR3NpS[p->D7RM8rxNak[i]] = bLnh6AR3NpS[p->D7RM8rxNak[i]] + 1;
                    i = i + 1;
                };
            }
            p = p->next;
        };
    }
    p = head;
    for (i = 65; i <= (894 - 804); i++) {
        if (bLnh6AR3NpS[i] > dps0u4PJ6) {
            dps0u4PJ6 = bLnh6AR3NpS[i];
            lmax = i;
        };
    }
    printf ("%c\n%d\n", lmax, dps0u4PJ6);
    {
        U465tyL8UOo = 0;
        while (U465tyL8UOo < sOuPhcGQf1) {
            U465tyL8UOo++;
            {
                i = 0;
                while (i < p->anum) {
                    if (p->D7RM8rxNak[i] == lmax)
                        printf ("%d\n", p->GgGODFVYbR);
                    i++;
                };
            }
            p = p->next;
        };
    }
    return 0;
}

