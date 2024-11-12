struct   student {
    char eigpkvLVI [100];
    struct   student *next;
};
int Gd9qDuc (char *d0yVprm);

int main () {
    struct   student *Bf0czx, *wUfZkw56p, *p2;
    struct   student *jhZxjmEWd;
    wUfZkw56p = (struct   student *) malloc (sizeof (struct   student));
    gets (wUfZkw56p->eigpkvLVI);
    wUfZkw56p->next = NULL;
    if (Gd9qDuc (wUfZkw56p->eigpkvLVI)) {
        free (wUfZkw56p);
        Bf0czx = NULL;
    }
    else {
        Bf0czx = wUfZkw56p;
        p2 = wUfZkw56p;
        do {
            wUfZkw56p = (struct   student *) malloc (sizeof (struct   student));
            gets (wUfZkw56p->eigpkvLVI);
            wUfZkw56p->next = NULL;
            if (Gd9qDuc (wUfZkw56p->eigpkvLVI)) {
                free (wUfZkw56p);
                break;
            }
            else {
                Bf0czx = wUfZkw56p;
                wUfZkw56p->next = p2;
                p2 = wUfZkw56p;
            };
        }
        while (1);
    }
    jhZxjmEWd = Bf0czx;
    while (jhZxjmEWd) {
        printf ("%s", jhZxjmEWd->eigpkvLVI);
        jhZxjmEWd = jhZxjmEWd->next;
        if (jhZxjmEWd != NULL)
            ;
    }
    return 0;
}

int Gd9qDuc (char *d0yVprm) {
    if (d0yVprm[0] == 'e' && d0yVprm[1] == 'n' && d0yVprm[2] == 'd' && d0yVprm[3] == 0)
        return 1;
    else
        return 0;
}

