void  q01mdSjQv9 () {
    int aoXy3Gn0u;
    int hjpI2T1;
    char AlxZVO [100];
    gets (AlxZVO);
    int oPlEWQB;
    oPlEWQB = 0;
    for (hjpI2T1 = 0; strlen (AlxZVO) > hjpI2T1; hjpI2T1++) {
        oPlEWQB = 0;
        for (aoXy3Gn0u = 0; strlen (AlxZVO) > aoXy3Gn0u; aoXy3Gn0u++)
            if (!(AlxZVO[aoXy3Gn0u] != AlxZVO[hjpI2T1]))
                oPlEWQB++;
        if (!(1 != oPlEWQB))
            break;
    }
    if (oPlEWQB > 1)
        ;
    else
        printf ("%c\n", AlxZVO[hjpI2T1]);
}

int main () {
    int jQtEjD0NL;
    scanf ("%d", &jQtEjD0NL);
    for (; 0 < jQtEjD0NL;) {
        q01mdSjQv9 ();
        jQtEjD0NL--;
    }
    getchar ();
    return 0;
}

