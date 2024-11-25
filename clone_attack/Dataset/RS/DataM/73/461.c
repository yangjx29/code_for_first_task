int main () {
    int rEr0zGH4C;
    int JlrOLJuptx [(951 - 946)] [(767 - 762)];
    int p09Vr4kfjshX;
    int TTaIfCerN;
    int pxB2gdKbqVXC;
    int rbFn8a [(249 - 244)] = {(345 - 345)};
    int R6MYb8uoRBFL [5] = {(849 - 849)};
    rEr0zGH4C = (287 - 286);
    for (p09Vr4kfjshX = (373 - 373); 5 > p09Vr4kfjshX; p09Vr4kfjshX++) {
        for (TTaIfCerN = (669 - 669); 5 > TTaIfCerN; TTaIfCerN++) {
            scanf ("%d ", *(JlrOLJuptx +p09Vr4kfjshX) + TTaIfCerN);
        };
    }
    for (p09Vr4kfjshX = (414 - 414); 5 > p09Vr4kfjshX; p09Vr4kfjshX++) {
        pxB2gdKbqVXC = *(*(JlrOLJuptx +p09Vr4kfjshX));
        for (TTaIfCerN = 0; TTaIfCerN < 5; TTaIfCerN++) {
            if (pxB2gdKbqVXC < *(*(JlrOLJuptx +p09Vr4kfjshX) + TTaIfCerN)) {
                pxB2gdKbqVXC = *(*(JlrOLJuptx +p09Vr4kfjshX) + TTaIfCerN);
                *(rbFn8a + p09Vr4kfjshX) = TTaIfCerN;
            };
        };
    }
    {
        p09Vr4kfjshX = 0;
        while (5 > p09Vr4kfjshX) {
            pxB2gdKbqVXC = *(*JlrOLJuptx+p09Vr4kfjshX);
            for (TTaIfCerN = 0; TTaIfCerN < 5; TTaIfCerN++) {
                if (pxB2gdKbqVXC > *(*(JlrOLJuptx +TTaIfCerN) + p09Vr4kfjshX)) {
                    pxB2gdKbqVXC = *(*(JlrOLJuptx +TTaIfCerN) + p09Vr4kfjshX);
                    *(R6MYb8uoRBFL +p09Vr4kfjshX) = TTaIfCerN;
                };
            }
            p09Vr4kfjshX = p09Vr4kfjshX + 1;
        };
    }
    {
        p09Vr4kfjshX = 0;
        while (p09Vr4kfjshX < 5) {
            for (TTaIfCerN = 0; TTaIfCerN < 5; TTaIfCerN++) {
                if (p09Vr4kfjshX == *(R6MYb8uoRBFL +TTaIfCerN) && TTaIfCerN == *(rbFn8a + p09Vr4kfjshX)) {
                    rEr0zGH4C = 0;
                    printf ("%d %d %d\n", p09Vr4kfjshX + (64 - 63), TTaIfCerN +1, *(*(JlrOLJuptx +p09Vr4kfjshX) + TTaIfCerN));
                };
            }
            p09Vr4kfjshX++;
        };
    }
    if (rEr0zGH4C == 1)
        printf ("not found");
}

