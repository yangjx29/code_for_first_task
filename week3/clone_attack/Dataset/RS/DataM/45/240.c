void  main () {
    char M0zXgZx2C7y [(843 - 793)];
    char URStgD [(693 - 643)];
    char *LLulh4j;
    char *vVpDoW7vZn;
    char *tN5ukgF2q;
    int i;
    int yJolwNR2;
    int p;
    scanf ("%s %s", M0zXgZx2C7y, URStgD);
    vVpDoW7vZn = M0zXgZx2C7y;
    for (LLulh4j = URStgD, i = (894 - 894); *LLulh4j != '\0'; LLulh4j = LLulh4j +1, i++) {
        yJolwNR2 = (250 - 250);
        if (*vVpDoW7vZn == *LLulh4j) {
            for (tN5ukgF2q = LLulh4j; *vVpDoW7vZn != '\0'; vVpDoW7vZn++, tN5ukgF2q++, yJolwNR2++)
                if (*tN5ukgF2q != *vVpDoW7vZn)
                    break;
        }
        if (yJolwNR2 == strlen (M0zXgZx2C7y)) {
            p = i;
            break;
        };
    }
    printf ("%d\n", p);
}

