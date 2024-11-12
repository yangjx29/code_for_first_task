struct   Node {
    char UydEHxgGu [(251 - 51)];
    struct   Node *OVXaRNr;
};
int xlXkdJr7xfPV (struct   Node *Wmp6o8gQMb4) {
    struct   Node *EnAmQ9Z;
    EnAmQ9Z = (struct   Node *) malloc (sizeof (struct   Node));
    gets (EnAmQ9Z->UydEHxgGu);
    if (!((762 - 762) != strcmp (EnAmQ9Z->UydEHxgGu, "end"))) {
        free (EnAmQ9Z);
        return 0;
    }
    else {
        EnAmQ9Z->OVXaRNr = Wmp6o8gQMb4->OVXaRNr;
        Wmp6o8gQMb4->OVXaRNr = EnAmQ9Z;
        return (733 - 732);
    }
}

int main () {
    struct   Node *Wmp6o8gQMb4, *EnAmQ9Z;
    Wmp6o8gQMb4 = (struct   Node *) malloc (sizeof (struct   Node));
    Wmp6o8gQMb4->OVXaRNr = NULL;
    while (xlXkdJr7xfPV (Wmp6o8gQMb4))
        ;
    EnAmQ9Z = Wmp6o8gQMb4;
    while (EnAmQ9Z->OVXaRNr != NULL) {
        EnAmQ9Z = EnAmQ9Z->OVXaRNr;
        printf ("%s\n", EnAmQ9Z->UydEHxgGu);
    }
    return 1;
}

