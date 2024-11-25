int main (int argc, char *xOeaEY84IH7 []) {
    int ABY6ToQlO3HR [(588 - 488)] [(847 - 747)];
    int oY4V2Hej;
    int HQz5TmEhY;
    int nYwV6EPK7g;
    int N7frilOHjzYg;
    int EjZbBYUg3;
    for (nYwV6EPK7g = (552 - 552); nYwV6EPK7g <= (687 - 683); nYwV6EPK7g++)
        for (N7frilOHjzYg = (241 - 241); (695 - 691) >= N7frilOHjzYg; N7frilOHjzYg++)
            scanf ("%d", &ABY6ToQlO3HR[nYwV6EPK7g][N7frilOHjzYg]);
    scanf ("%d%d", &oY4V2Hej, &HQz5TmEhY);
    if (oY4V2Hej <= (164 - 160) && HQz5TmEhY <= (311 - 307) && oY4V2Hej != HQz5TmEhY) {
        for (N7frilOHjzYg = (49 - 49); N7frilOHjzYg < (828 - 823); N7frilOHjzYg++) {
            EjZbBYUg3 = ABY6ToQlO3HR[oY4V2Hej][N7frilOHjzYg];
            ABY6ToQlO3HR[oY4V2Hej][N7frilOHjzYg] = ABY6ToQlO3HR[HQz5TmEhY][N7frilOHjzYg];
            ABY6ToQlO3HR[HQz5TmEhY][N7frilOHjzYg] = EjZbBYUg3;
        }
        {
            nYwV6EPK7g = 827 - 827;
            while (nYwV6EPK7g < 5) {
                for (N7frilOHjzYg = (209 - 209); N7frilOHjzYg < (309 - 305); N7frilOHjzYg++) {
                    printf ("%d ", ABY6ToQlO3HR[nYwV6EPK7g][N7frilOHjzYg]);
                }
                printf ("%d", ABY6ToQlO3HR[nYwV6EPK7g][N7frilOHjzYg]);
                nYwV6EPK7g = nYwV6EPK7g + 1;
                printf ("\n");
            };
        };
    }
    else
        printf ("error");
    return 0;
}

