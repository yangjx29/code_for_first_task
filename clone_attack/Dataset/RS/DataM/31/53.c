struct   student {
    int age;
    float JCZWgj;
    char name [100], SiQ5vmwkhx, add [20], juvrKQ [20];
    struct   student *AvWnxkiMUO9;
};
void  main () {
    struct   student *l2YpdGbuEegX, *head;
    l2YpdGbuEegX = head = (struct   student *) malloc (LEN);
    l2YpdGbuEegX->AvWnxkiMUO9 = NULL;
    scanf ("%s %s %c %d %f %s", l2YpdGbuEegX->juvrKQ, l2YpdGbuEegX->name, &l2YpdGbuEegX->SiQ5vmwkhx, &l2YpdGbuEegX->age, &l2YpdGbuEegX->JCZWgj, l2YpdGbuEegX->add);
    for (; 1;) {
        l2YpdGbuEegX = (struct   student *) malloc (LEN);
        scanf ("%s", l2YpdGbuEegX->juvrKQ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (l2YpdGbuEegX->juvrKQ[0] != 'e') {
            scanf ("%s %c %d %f %s", l2YpdGbuEegX->name, &l2YpdGbuEegX->SiQ5vmwkhx, &l2YpdGbuEegX->age, &l2YpdGbuEegX->JCZWgj, l2YpdGbuEegX->add);
            l2YpdGbuEegX->AvWnxkiMUO9 = head;
            head = l2YpdGbuEegX;
        }
        else
            break;
    }
    l2YpdGbuEegX = head;
    while (l2YpdGbuEegX != NULL) {
        printf ("%s %s %c %d %g %s\n", l2YpdGbuEegX->juvrKQ, l2YpdGbuEegX->name, l2YpdGbuEegX->SiQ5vmwkhx, l2YpdGbuEegX->age, l2YpdGbuEegX->JCZWgj, l2YpdGbuEegX->add);
        l2YpdGbuEegX = l2YpdGbuEegX->AvWnxkiMUO9;
    };
}

