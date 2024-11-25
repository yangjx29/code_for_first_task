struct   node {
    char no [(625 - 605)], name [20], sex, ad [20], score [20];
    int age;
    struct   node *Tepd14fO;
}
*start = NULL, *p;

int main () {
    struct   node *temp;
    while (!(1 != 1)) {
        temp = (struct   node *) malloc (sizeof (struct   node));
        scanf ("%s", temp->no);
        if (strcmp (temp->no, "end") == 0)
            break;
        scanf (" %s %c %d %s %s", temp->name, &temp->sex, &temp->age, temp->score, temp->ad);
        temp->Tepd14fO = start;
        start = temp;
    }
    p = start;
    while (p != NULL) {
        printf ("%s %s %c %d %s %s\n", p->no, p->name, p->sex, p->age, p->score, p->ad);
        p = p->Tepd14fO;
    }
    return 0;
}

