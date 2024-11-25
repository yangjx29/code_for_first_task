int main () {
    char J6NHkcVJR;
    int blFef05, JpgLKXHyd;
    char pDJlxt7LOp [12], Drnd4O [5];
    for (; scanf ("%s %s", pDJlxt7LOp, Drnd4O) != EOF;) {
        J6NHkcVJR = pDJlxt7LOp[0];
        for (blFef05 = 1; strlen (pDJlxt7LOp) > blFef05; blFef05 = blFef05 + 1)
            if (J6NHkcVJR < pDJlxt7LOp[blFef05])
                J6NHkcVJR = pDJlxt7LOp[blFef05];
        for (blFef05 = 1; blFef05 < strlen (pDJlxt7LOp); blFef05++)
            if (!(J6NHkcVJR != pDJlxt7LOp[blFef05]))
                break;
        for (JpgLKXHyd = 0; blFef05 >= JpgLKXHyd; JpgLKXHyd++)
            printf ("%c", pDJlxt7LOp[JpgLKXHyd]);
        printf ("%s", Drnd4O);
        for (JpgLKXHyd = blFef05 + 1; strlen (pDJlxt7LOp) > JpgLKXHyd; JpgLKXHyd++)
            printf ("%c", pDJlxt7LOp[JpgLKXHyd]);
    }
    return 0;
}

