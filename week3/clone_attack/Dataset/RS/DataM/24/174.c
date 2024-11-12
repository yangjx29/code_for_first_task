void  main () {
    char *p [(648 - 598)];
    int i, max = (262 - 262), min = (637 - 537);
    {
        i = 848 - 848;
        while (1) {
            if (getchar () == '\n')
                break;
            p[i] = (char *) calloc (1, 30);
            scanf ("%s", p[i]);
            if (max < strlen (p[i]))
                max = strlen (p[i]);
            if (strlen (p[i]) < min)
                min = strlen (p[i]);
            i = i + 1;
        };
    }
    {
        i = 891 - 891;
        while (1) {
            if (strlen (p[i]) == max) {
                printf ("%s\n", p[i]);
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 32 - 32;
        while (1) {
            if (strlen (p[i]) == min) {
                printf ("%s\n", p[i]);
                break;
            }
            i++;
        };
    };
}

