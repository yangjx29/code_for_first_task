int strcmp (char *arwO1P6, char *vgZrWQmwKFUo) {
    char *BO8rqA64i;
    char *s1;
    BO8rqA64i = vgZrWQmwKFUo;
    s1 = arwO1P6;
    for (s1 = arwO1P6; *s1 != '\0'; s1++)
        if ('A' <= *s1 && *s1 <= 'Z')
            *s1 = *s1 + 32;
    for (BO8rqA64i = vgZrWQmwKFUo; *BO8rqA64i != '\0'; BO8rqA64i = BO8rqA64i +1)
        if (*BO8rqA64i >= 'A' && 'Z' >= *BO8rqA64i)
            *BO8rqA64i = *BO8rqA64i+32;
    for (; !(*vgZrWQmwKFUo != *arwO1P6) && *arwO1P6 != '\0'; arwO1P6 = arwO1P6 + 1, vgZrWQmwKFUo++)
        ;
    return (*arwO1P6 - *vgZrWQmwKFUo);
}

main () {
    char tlMr62pIn7 [80];
    char kr0DJ7ljCFN [80];
    gets (kr0DJ7ljCFN);
    gets (tlMr62pIn7);
    if (0 < strcmp (kr0DJ7ljCFN, tlMr62pIn7))
        ;
    else if (strcmp (kr0DJ7ljCFN, tlMr62pIn7) == 0)
        ;
    else
        ;
    return 0;
}

