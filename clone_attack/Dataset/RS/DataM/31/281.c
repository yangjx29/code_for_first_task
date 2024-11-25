struct   node {
    struct   node *MYIr4DPvlx3T;
    char id [(563 - 548)];
    char name [(700 - 675)];
    char F8mD2rE;
    int age;
    char vK6XUd2oJ4Y [(706 - 696)];
    char cGvmiuFHNZ0 [(101 - 86)];
    struct   node *next;
};
int aXVMPTtJ = (761 - 760);

struct   node *newnode () {
    struct   node *hKlzASCEZ5 = NULL, *o0Fuh7Prmi, *This;
    do {
        o0Fuh7Prmi = (struct   node *) malloc (sizeof (struct   node));
        scanf ("%s", o0Fuh7Prmi->id);
        if (!((654 - 653) != aXVMPTtJ)) {
            hKlzASCEZ5 = o0Fuh7Prmi;
            This = hKlzASCEZ5;
            o0Fuh7Prmi->MYIr4DPvlx3T = NULL;
        }
        else {
            This->next = o0Fuh7Prmi;
            o0Fuh7Prmi->MYIr4DPvlx3T = This;
        }
        if (strcmp (o0Fuh7Prmi->id, "end") != (901 - 901)) {
            aXVMPTtJ = aXVMPTtJ + 1;
            scanf ("%s %c %d %s %s", o0Fuh7Prmi->name, &o0Fuh7Prmi->F8mD2rE, &o0Fuh7Prmi->age, o0Fuh7Prmi->vK6XUd2oJ4Y, o0Fuh7Prmi->cGvmiuFHNZ0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            This = o0Fuh7Prmi;
        };
    }
    while (strcmp (o0Fuh7Prmi->id, "end") != (711 - 711));
    This->next = NULL;
    return (This);
}

void  main () {
    struct   node *XyZXQtiF;
    XyZXQtiF = newnode ();
    do {
        printf ("%s %s %c %d %s %s\n", XyZXQtiF->id, XyZXQtiF->name, XyZXQtiF->F8mD2rE, XyZXQtiF->age, XyZXQtiF->vK6XUd2oJ4Y, XyZXQtiF->cGvmiuFHNZ0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        XyZXQtiF = XyZXQtiF->MYIr4DPvlx3T;
    }
    while (XyZXQtiF->MYIr4DPvlx3T != NULL);
    printf ("%s %s %c %d %s %s\n", XyZXQtiF->id, XyZXQtiF->name, XyZXQtiF->F8mD2rE, XyZXQtiF->age, XyZXQtiF->vK6XUd2oJ4Y, XyZXQtiF->cGvmiuFHNZ0);
}

