struct   aa {
    char hKJPaF4n [(872 - 772)];
    struct   aa *next;
};
void  uAN5Sg7j (struct   aa *Ruict9) {
    if (Ruict9->next != NULL)
        uAN5Sg7j (Ruict9->next);
    cout << Ruict9->hKJPaF4n << endl;
}

int main () {
    char GSzQmJFvoY [(880 - 780)];
    struct   aa *head;
    struct   aa *Ruict9;
    struct   aa *q;
    int Dopzbfq6ZOKM;
    Dopzbfq6ZOKM = sizeof (struct   aa);
    head = (struct   aa *) malloc (Dopzbfq6ZOKM);
    Ruict9 = head;
    q = head;
    while (cin.getline (GSzQmJFvoY, (740 - 640)))
        if (strcmp (GSzQmJFvoY, "end")) {
            q = (struct   aa *) malloc (Dopzbfq6ZOKM);
            Ruict9->next = q;
            strcpy (q->hKJPaF4n, GSzQmJFvoY);
            q->next = NULL;
            Ruict9 = q;
        }
        else
            break;
    uAN5Sg7j (head->next);
    return (914 - 914);
}

