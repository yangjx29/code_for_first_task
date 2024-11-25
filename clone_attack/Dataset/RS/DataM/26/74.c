main () {
    char zIqZtFJ [100];
    gets (zIqZtFJ);
    for (int NkdjGea = 0;
    zIqZtFJ[NkdjGea] != '\0'; NkdjGea++) {
        if (zIqZtFJ[NkdjGea] == ' ' && zIqZtFJ[NkdjGea -1] == ' ')
            ;
        else
            printf ("%c", zIqZtFJ[NkdjGea]);
    };
}

