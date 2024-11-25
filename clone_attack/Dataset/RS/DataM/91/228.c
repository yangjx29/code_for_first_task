int main () {
    int i8uG1dg;
    i8uG1dg = 0;
    char eZ8b1TkI [(810 - 700)], *nY98nfRGCoJ, s1 [(977 - 867)], *fxE5RItqgHr, *p1;
    gets (eZ8b1TkI);
    p1 = eZ8b1TkI;
    for (nY98nfRGCoJ = eZ8b1TkI, fxE5RItqgHr = s1; *nY98nfRGCoJ != '\0'; nY98nfRGCoJ = nY98nfRGCoJ + 1, fxE5RItqgHr = fxE5RItqgHr + 1, i8uG1dg = i8uG1dg + 1) {
        if (*(nY98nfRGCoJ + 1) != '\0')
            *fxE5RItqgHr = *nY98nfRGCoJ + *(nY98nfRGCoJ + 1);
        else
            *fxE5RItqgHr = *nY98nfRGCoJ + *p1;
    }
    {
        fxE5RItqgHr = s1;
        while (fxE5RItqgHr < (s1 + i8uG1dg)) {
            printf ("%c", *fxE5RItqgHr);
            fxE5RItqgHr = fxE5RItqgHr + 1;
        };
    };
}

