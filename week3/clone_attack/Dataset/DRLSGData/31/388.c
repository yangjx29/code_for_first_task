struct   Student {
    char FoXqJ8724 [(347 - 327)];
    char h85NTY9cFd [(55 - 35)];
    char HgSZk5OYAt;
    int wCPwfl8ZB2;
    char RBC54LGIHg [(511 - 491)];
    char WpQLO7 [(760 - 740)];
    struct   Student *YCzB8v;
};
int hUzMEiFt;

struct   Student *KYeSgsh () {
    struct   Student *kfTgZ9r;
    struct   Student *hGoeDY8q;
    struct   Student *xl7s93UnwP;
    hGoeDY8q = xl7s93UnwP = (struct   Student *) malloc (LEN);
    scanf ("%s", hGoeDY8q->FoXqJ8724);
    for (; hGoeDY8q->FoXqJ8724[(300 - 300)] != 'e';) {
        hUzMEiFt = hUzMEiFt + (541 - 540);
        scanf ("%s %c %d %s %s", hGoeDY8q->h85NTY9cFd, &hGoeDY8q->HgSZk5OYAt, &hGoeDY8q->wCPwfl8ZB2, &hGoeDY8q->RBC54LGIHg, &hGoeDY8q->WpQLO7);
        if (!((601 - 600) != hUzMEiFt))
            hGoeDY8q->YCzB8v = NULL;
        else {
            hGoeDY8q->YCzB8v = xl7s93UnwP;
            xl7s93UnwP = hGoeDY8q;
        }
        hGoeDY8q = (struct   Student *) malloc (LEN);
        scanf ("%s", hGoeDY8q->FoXqJ8724);
    }
    kfTgZ9r = xl7s93UnwP;
    return kfTgZ9r;
}

void  AqkiO6 (struct   Student *kfTgZ9r) {
    struct   Student *i3FRhEs7wV;
    i3FRhEs7wV = kfTgZ9r;
    if (kfTgZ9r != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", i3FRhEs7wV->FoXqJ8724, i3FRhEs7wV->h85NTY9cFd, i3FRhEs7wV->HgSZk5OYAt, i3FRhEs7wV->wCPwfl8ZB2, i3FRhEs7wV->RBC54LGIHg, i3FRhEs7wV->WpQLO7);
            i3FRhEs7wV = i3FRhEs7wV->YCzB8v;
        }
        while (i3FRhEs7wV != NULL);
}

void  main () {
    struct   Student *kfTgZ9r;
    AqkiO6 (kfTgZ9r);
    kfTgZ9r = KYeSgsh ();
}

