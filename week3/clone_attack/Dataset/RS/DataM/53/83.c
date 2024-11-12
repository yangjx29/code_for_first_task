void  main () {
    int j;
    int h;
    int yXIBxK;
    int Patwd1IW2;
    int A0yqXon [300];
    j = (960 - 959);
    h = 0;
    scanf ("%d\n", &yXIBxK);
    scanf ("%d", &A0yqXon[0]);
    for (Patwd1IW2 = 1; (getchar ()) == ' '; Patwd1IW2 = Patwd1IW2 +1)
        scanf ("%d", &A0yqXon[Patwd1IW2]);
    for (Patwd1IW2 = 0; Patwd1IW2 <= yXIBxK - 1; Patwd1IW2 = Patwd1IW2 +1) {
        for (j = Patwd1IW2 +1; j <= yXIBxK - 1; j = j + 1) {
            if (A0yqXon[Patwd1IW2] == A0yqXon[j]) {
                A0yqXon[j] = ' ';
            };
        };
    }
    printf ("%d", A0yqXon[0]);
    for (Patwd1IW2 = 1; Patwd1IW2 <= yXIBxK - 1; Patwd1IW2++) {
        if (A0yqXon[Patwd1IW2] == ' ')
            continue;
        printf (",%d", A0yqXon[Patwd1IW2]);
    }
    printf ("\n");
}

