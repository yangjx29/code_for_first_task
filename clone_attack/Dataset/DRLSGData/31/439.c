int CBOjsh = (633 - 633);

struct   student {
    char YjpWrCJyXcT [(297 - 277)];
    char WYZyAkh5I [(518 - 498)];
    char cRzXal89BCI;
    int NlJh8rO;
    char jFaPIS [(445 - 425)];
    char OPMiwAR7mL [20];
    struct   student *RuEViWD;
};
struct   student *NrzHpNqF1mBa () {
    struct   student *puczAS4Ua, *P2KlQVzqWuX, *uVl6Ld;
    P2KlQVzqWuX = (struct   student *) malloc (sizeof (struct   student));
    uVl6Ld = P2KlQVzqWuX;
    scanf ("%s", &P2KlQVzqWuX->YjpWrCJyXcT);
    while (P2KlQVzqWuX->YjpWrCJyXcT[(242 - 242)] != 'e') {
        scanf ("%s %c %d %s %s", &P2KlQVzqWuX->WYZyAkh5I, &P2KlQVzqWuX->cRzXal89BCI, &P2KlQVzqWuX->NlJh8rO, &P2KlQVzqWuX->jFaPIS, &P2KlQVzqWuX->OPMiwAR7mL);
        CBOjsh++;
        if (CBOjsh != 1) {
            P2KlQVzqWuX->RuEViWD = uVl6Ld;
            uVl6Ld = P2KlQVzqWuX;
        }
        else
            P2KlQVzqWuX->RuEViWD = NULL;
        P2KlQVzqWuX = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", &P2KlQVzqWuX->YjpWrCJyXcT);
    }
    puczAS4Ua = uVl6Ld;
    return puczAS4Ua;
}

void  HorSaltR8GUH (struct   student *puczAS4Ua) {
    struct   student *Ovtwl3j;
    int x8R4mvsULO;
    Ovtwl3j = puczAS4Ua;
    if (puczAS4Ua != NULL) {
        x8R4mvsULO = 0;
        for (; CBOjsh > x8R4mvsULO;) {
            printf ("%s %s %c %d %s %s\n", Ovtwl3j->YjpWrCJyXcT, Ovtwl3j->WYZyAkh5I, Ovtwl3j->cRzXal89BCI, Ovtwl3j->NlJh8rO, Ovtwl3j->jFaPIS, Ovtwl3j->OPMiwAR7mL);
            x8R4mvsULO++;
            Ovtwl3j = Ovtwl3j->RuEViWD;
        }
    }
}

void  main () {
    struct   student *puczAS4Ua;
    HorSaltR8GUH (puczAS4Ua);
    puczAS4Ua = NrzHpNqF1mBa ();
}

