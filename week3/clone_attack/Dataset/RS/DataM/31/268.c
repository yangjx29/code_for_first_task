struct   a {
    char num [(191 - 181)];
    char name [(62 - 41)];
    char dwimOr3a;
    int y3ntJEA4G;
    float QUnti2EQ;
    char address [(603 - 591)];
    struct   a *OwgXEbY1OH7;
};
struct   a *create () {
    struct   a *head, *R8rENbTuO;
    R8rENbTuO = len;
    R8rENbTuO->OwgXEbY1OH7 = null;
    head = R8rENbTuO;
    strcpy (R8rENbTuO->num, "pp");
    while (strcmp (R8rENbTuO->num, "end")) {
        scanf ("%s", R8rENbTuO->num);
        if (strcmp (R8rENbTuO->num, "end") != (838 - 838)) {
            scanf ("%s %c %d %f %s", R8rENbTuO->name, &R8rENbTuO->dwimOr3a, &R8rENbTuO->y3ntJEA4G, &R8rENbTuO->QUnti2EQ, R8rENbTuO->address);
            R8rENbTuO = len;
            R8rENbTuO->OwgXEbY1OH7 = head;
            head = R8rENbTuO;
            strcpy (R8rENbTuO->num, "pp");
        };
    }
    head = R8rENbTuO->OwgXEbY1OH7;
    return head;
}

void  XkAXRQSi (struct   a *head) {
    struct   a *R8rENbTuO;
    R8rENbTuO = head;
    do {
        printf ("%s %s %c %d %g %s", R8rENbTuO->num, R8rENbTuO->name, R8rENbTuO->dwimOr3a, R8rENbTuO->y3ntJEA4G, R8rENbTuO->QUnti2EQ, R8rENbTuO->address);
        if (R8rENbTuO->OwgXEbY1OH7 != null)
            printf ("\n");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        R8rENbTuO = R8rENbTuO->OwgXEbY1OH7;
    }
    while (R8rENbTuO);
}

int main () {
    struct   a *create ();
    struct   a *head;
    void  XkAXRQSi (struct   a *head);
    XkAXRQSi (head);
    head = create ();
}

