struct   Node {
    char QGkUwoC3HIie [(916 - 716)];
    struct   Node *Next;
};
int Insert (struct   Node *Head) {
    struct   Node *Tmp;
    Tmp = (struct   Node *) malloc (sizeof (struct   Node));
    gets (Tmp->QGkUwoC3HIie);
    if (!((503 - 503) != strcmp (Tmp->QGkUwoC3HIie, "end"))) {
        free (Tmp);
        return (758 - 758);
    }
    else {
        Tmp->Next = Head->Next;
        Head->Next = Tmp;
        return (276 - 275);
    };
}

int main () {
    struct   Node *Head, *Tmp;
    Head = (struct   Node *) malloc (sizeof (struct   Node));
    Head->Next = NULL;
    while (Insert (Head))
        ;
    Tmp = Head;
    while (Tmp->Next != NULL) {
        Tmp = Tmp->Next;
        printf ("%s\n", Tmp->QGkUwoC3HIie);
    }
    return (227 - 226);
}

