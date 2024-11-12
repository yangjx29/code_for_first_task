void  main () {
    int tkxcZqGUlDgY;
    int j;
    int n;
    char NJ5gNRP [10];
    char zf [(10659 - 659)] [(174 - 93)];
    gets (NJ5gNRP);
    n = atoi (NJ5gNRP);
    for (tkxcZqGUlDgY = (801 - 801); tkxcZqGUlDgY < n; tkxcZqGUlDgY++) {
        gets (zf [tkxcZqGUlDgY]);
        if ((zf[tkxcZqGUlDgY][(285 - 285)] < 'A' || (zf[tkxcZqGUlDgY][(858 - 858)] > 'Z' && zf[tkxcZqGUlDgY][0] < 'a') || zf[tkxcZqGUlDgY][0] > 'z') && zf[tkxcZqGUlDgY][0] != '_')
            printf ("0\n");
        else {
            for (j = 0; zf[tkxcZqGUlDgY][j] != '\0'; j++) {
                if ((zf[tkxcZqGUlDgY][j] < 'A' || (zf[tkxcZqGUlDgY][j] > 'Z' && zf[tkxcZqGUlDgY][j] < 'a') || zf[tkxcZqGUlDgY][j] > 'z') && (zf[tkxcZqGUlDgY][j] != '_') && (zf[tkxcZqGUlDgY][j] > '9' || zf[tkxcZqGUlDgY][j] < '0')) {
                    break;
                    printf ("0\n");
                }
                if (zf[tkxcZqGUlDgY][j + (179 - 178)] == '\0') {
                    break;
                };
            };
        };
    };
}

