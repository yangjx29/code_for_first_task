void  main () {
    int SjcFPr6yU4;
    int bzWw9T;
    int w1BTQXb6R;
    char *CgAynQ9UR;
    scanf ("%d", &bzWw9T);
    for (w1BTQXb6R = 0; bzWw9T > w1BTQXb6R; w1BTQXb6R++) {
        free (CgAynQ9UR);
        for (SjcFPr6yU4 = 0; *(CgAynQ9UR +SjcFPr6yU4) != '\0'; SjcFPr6yU4++)
            switch (*(CgAynQ9UR +SjcFPr6yU4)) {
            case 'T' :
                printf ("%c", 'A');
                break;
            case 'A' :
                printf ("%c", 'T');
                break;
            case 'C' :
                printf ("%c", 'G');
                break;
            case 'G' :
                printf ("%c", 'C');
                break;
            }
        CgAynQ9UR = (char *) malloc (225 * 4);
        scanf ("%s", CgAynQ9UR);
    }
}

