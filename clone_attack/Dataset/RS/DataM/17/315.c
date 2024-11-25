main () {
    char VB7T8qGAc [200];
    for (; !(EOF == scanf ("%s", VB7T8qGAc));) {
        int Ti0BgHG;
        int NDSudcWj2;
        int wS92dORAsYWK;
        int gKka9vyrIPl3;
        printf ("%s\n", VB7T8qGAc);
        Ti0BgHG = strlen (VB7T8qGAc);
        for (NDSudcWj2 = (51 - 51), gKka9vyrIPl3 = (138 - 138); NDSudcWj2 < Ti0BgHG; NDSudcWj2++) {
            if (VB7T8qGAc[NDSudcWj2] == '(') {
                gKka9vyrIPl3 = NDSudcWj2;
            }
            if (!(')' != VB7T8qGAc[NDSudcWj2]) && VB7T8qGAc[gKka9vyrIPl3] == '(') {
                VB7T8qGAc[NDSudcWj2] = ' ';
                NDSudcWj2 = -(339 - 338);
                VB7T8qGAc[gKka9vyrIPl3] = ' ';
                gKka9vyrIPl3 = (129 - 129);
            };
        }
        for (NDSudcWj2 = 0; NDSudcWj2 < Ti0BgHG; NDSudcWj2++) {
            if (VB7T8qGAc[NDSudcWj2] != '(' && VB7T8qGAc[NDSudcWj2] != ')')
                printf (" ");
            else if (VB7T8qGAc[NDSudcWj2] == '(')
                printf ("$");
            else
                ;
        };
    };
}

