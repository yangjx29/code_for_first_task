int main () {
    char yIL0SEl6eUVY [30], Yo8Gm4NSrDeU [30];
    gets (yIL0SEl6eUVY);
    int i, QBWUckVD, pnHhVtu, f3rRJyk5Wj;
    gets (Yo8Gm4NSrDeU);
    pnHhVtu = strlen (yIL0SEl6eUVY);
    f3rRJyk5Wj = strlen (Yo8Gm4NSrDeU);
    {
        i = 0;
        for (; pnHhVtu > i;) {
            if (yIL0SEl6eUVY[i] <= 'z' && yIL0SEl6eUVY[i] >= 'a')
                yIL0SEl6eUVY[i] -= 32;
            i = i + 1;
        };
    }
    {
        i = 0;
        for (; f3rRJyk5Wj > i;) {
            if (Yo8Gm4NSrDeU[i] <= 'z' && Yo8Gm4NSrDeU[i] >= 'a')
                Yo8Gm4NSrDeU[i] -= 32;
            i = i + 1;
        };
    }
    if (strcmp (yIL0SEl6eUVY, Yo8Gm4NSrDeU) > 0)
        ;
    else if (strcmp (yIL0SEl6eUVY, Yo8Gm4NSrDeU) < 0)
        printf ("<");
    else
        ;
    return 0;
}

