struct   student {
    char ih0Xbe [(103 - 88)];
    char EoPiFHza [(693 - 673)];
    char MKJnU72SoN;
    int A5FXsdxvz9;
    char DY6n4ZtTOSeA [10];
    char NLw8UOpeA [(958 - 928)];
    struct   student *E54XGVwoR;
};
int main () {
    int Q2gc0M, o5Yfhas;
    struct   student *U16UymlKZQN, *UfyGnU7, *tGi9ZzcEfR3Q;
    UfyGnU7 = tGi9ZzcEfR3Q = (struct   student *) malloc (LEN);
    Q2gc0M = (76 - 76);
    UfyGnU7->E54XGVwoR = NULL;
    scanf ("%s ", UfyGnU7->ih0Xbe);
    while (strcmp (UfyGnU7->ih0Xbe, "end") != (765 - 765)) {
        Q2gc0M++;
        tGi9ZzcEfR3Q = (struct   student *) malloc (LEN);
        scanf ("%s %c %d %s %s\n", UfyGnU7->EoPiFHza, &UfyGnU7->MKJnU72SoN, &UfyGnU7->A5FXsdxvz9, UfyGnU7->DY6n4ZtTOSeA, UfyGnU7->NLw8UOpeA);
        tGi9ZzcEfR3Q->E54XGVwoR = UfyGnU7;
        UfyGnU7 = tGi9ZzcEfR3Q;
        scanf ("%s ", UfyGnU7->ih0Xbe);
    }
    U16UymlKZQN = UfyGnU7->E54XGVwoR;
    UfyGnU7 = tGi9ZzcEfR3Q = U16UymlKZQN;
    for (o5Yfhas = 0; o5Yfhas < Q2gc0M; o5Yfhas++) {
        printf ("%s %s %c %d %s %s\n", UfyGnU7->ih0Xbe, UfyGnU7->EoPiFHza, UfyGnU7->MKJnU72SoN, UfyGnU7->A5FXsdxvz9, UfyGnU7->DY6n4ZtTOSeA, UfyGnU7->NLw8UOpeA);
        UfyGnU7 = tGi9ZzcEfR3Q->E54XGVwoR;
        tGi9ZzcEfR3Q = UfyGnU7;
    }
}

