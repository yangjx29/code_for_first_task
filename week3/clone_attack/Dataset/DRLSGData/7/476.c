main () {
    char UvmJ2R5g7C [(1065 - 808)];
    char fGORWu [(989 - 732)];
    char jbzLBS [(971 - 714)];
    char *yS6eIAcrlbz;
    char gXeDQH9 [(1015 - 758)];
    scanf ("%s%s%s", fGORWu, jbzLBS, gXeDQH9);
    yS6eIAcrlbz = strstr (fGORWu, jbzLBS);
    if (yS6eIAcrlbz == NULL)
        puts (fGORWu);
    else {
        puts (UvmJ2R5g7C);
        strcpy (UvmJ2R5g7C, fGORWu);
        *yS6eIAcrlbz = '\0';
        strcat (UvmJ2R5g7C, gXeDQH9);
        strcat (UvmJ2R5g7C, yS6eIAcrlbz + strlen (jbzLBS));
    }
}

