int main () {
    char EW9uoFh [300] [30];
    char LhJ2KP;
    int IyUr7P = 0, IDfspi;
    scanf ("%s", EW9uoFh[IyUr7P]);
    IDfspi = strlen (EW9uoFh[IyUr7P]);
    printf ("%d", IDfspi);
    IyUr7P = IyUr7P +1;
    scanf ("%c", &LhJ2KP);
    while (LhJ2KP != '\n') {
        scanf ("%s", EW9uoFh[IyUr7P]);
        IDfspi = strlen (EW9uoFh[IyUr7P]);
        printf (",%d", IDfspi);
        IyUr7P++;
        scanf ("%c", &LhJ2KP);
    }
    return 0;
}

