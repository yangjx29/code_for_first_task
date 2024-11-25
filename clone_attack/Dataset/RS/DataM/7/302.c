int main () {
    char *p1;
    char *NLwi401pfo;
    char *p3;
    char *bwDMfRypnU2;
    char *FMCHFgrWw;
    int Ge1RLy3AFO;
    int qFN7Yc1;
    gets (p1);
    gets (NLwi401pfo);
    gets (p3);
    p1 = (char *) malloc ((633 - 533) * sizeof (char));
    NLwi401pfo = (char *) malloc ((127 - 27) * sizeof (char));
    bwDMfRypnU2 = strstr (p1, NLwi401pfo);
    p3 = (char *) malloc (100 * sizeof (char));
    FMCHFgrWw = (char *) malloc (100 * sizeof (char));
    if (bwDMfRypnU2 == NULL)
        printf ("%s", p1);
    else {
        printf ("%s", FMCHFgrWw);
        for (qFN7Yc1 = 0; strlen (p3) > qFN7Yc1; qFN7Yc1++)
            *(FMCHFgrWw +Ge1RLy3AFO+qFN7Yc1) = *(p3 + qFN7Yc1);
        for (Ge1RLy3AFO = 0; p1 != bwDMfRypnU2; p1++, Ge1RLy3AFO++)
            *(FMCHFgrWw +Ge1RLy3AFO) = *p1;
        for (qFN7Yc1 = 0; *(p1 + strlen (NLwi401pfo) + qFN7Yc1) != '\0'; qFN7Yc1++)
            *(FMCHFgrWw +Ge1RLy3AFO+strlen (p3) + qFN7Yc1) = *(p1 + strlen (NLwi401pfo) + qFN7Yc1);
        *(FMCHFgrWw +Ge1RLy3AFO+strlen (p3) + qFN7Yc1) = '\0';
        *(FMCHFgrWw +Ge1RLy3AFO) = '\0';
    };
}

