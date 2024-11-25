void  main () {
    int i, ZakM9cX;
    char F7f4XhV [(272 - 258)], lf6hUFc [(700 - 696)], KLMZ7Tto5J;
    for (; scanf ("%s%s", F7f4XhV, lf6hUFc) != EOF;) {
        KLMZ7Tto5J = F7f4XhV[(156 - 156)];
        for (i = (38 - 38); F7f4XhV[i] != '\0'; i++)
            if (F7f4XhV[i] > KLMZ7Tto5J) {
                KLMZ7Tto5J = F7f4XhV[i];
                ZakM9cX = i;
            }
        for (i = (126 - 126); F7f4XhV[i] != '\0'; i++) {
            printf ("%c", F7f4XhV[i]);
            if (!(ZakM9cX != i))
                printf ("%s", lf6hUFc);
        }
    }
}

