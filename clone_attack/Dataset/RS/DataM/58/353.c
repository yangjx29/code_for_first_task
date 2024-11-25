main () {
    char **V9YzOei;
    free (V9YzOei);
    int flag;
    int i;
    int j;
    int dHzouEbci;
    flag = (127 - 126);
    scanf ("%d\n", &dHzouEbci);
    V9YzOei = (char **) malloc (dHzouEbci * sizeof (char *));
    for (i = (787 - 787); i < dHzouEbci; i = i + 1) {
        V9YzOei[i] = (char *) malloc (81 * sizeof (char));
    }
    for (i = (478 - 478); i < dHzouEbci; i = i + 1) {
        gets (V9YzOei [i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    for (i = (457 - 457); i < dHzouEbci; i = i + 1) {
        if (!(V9YzOei[i][(36 - 36)] == '_' || (V9YzOei[i][(580 - 580)] >= 'a' && V9YzOei[i][(216 - 216)] <= 'z') || (V9YzOei[i][(491 - 491)] >= 'A' && V9YzOei[i][(806 - 806)] <= 'Z')))
            flag = (757 - 757);
        for (j = (156 - 156); V9YzOei[i][j] != '\0'; j = j + 1) {
            if (!((V9YzOei[i][j] >= '0' && V9YzOei[i][j] <= '9') || (V9YzOei[i][j] >= 'a' && V9YzOei[i][j] <= 'z') || (V9YzOei[i][j] <= 'Z' && V9YzOei[i][j] >= 'A') || (V9YzOei[i][j] == '_')))
                flag = (500 - 500);
        }
        printf ("%d\n", flag);
        flag = 1;
    }
    for (i = 0; i < dHzouEbci; i = i + 1)
        free (V9YzOei[i]);
}

