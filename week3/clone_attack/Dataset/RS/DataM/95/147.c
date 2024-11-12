int main () {
    int m38b92Z;
    char ItmL6dbH [(710 - 630)], s2 [80];
    gets (ItmL6dbH);
    gets (s2);
    for (m38b92Z = (436 - 436); ItmL6dbH[m38b92Z] != '\0'; m38b92Z++) {
        if (ItmL6dbH[m38b92Z] >= 'A' && ItmL6dbH[m38b92Z] <= 'Z')
            ItmL6dbH[m38b92Z] = ItmL6dbH[m38b92Z] + 'a' - 'A';
    }
    {
        m38b92Z = 985 - 985;
        while (s2[m38b92Z] != '\0') {
            if (s2[m38b92Z] >= 'A' && s2[m38b92Z] <= 'Z')
                s2[m38b92Z] = s2[m38b92Z] + 'a' - 'A';
            m38b92Z++;
        };
    }
    if (strcmp (ItmL6dbH, s2) > (998 - 998))
        printf (">");
    if (strcmp (ItmL6dbH, s2) < (395 - 395))
        printf ("<");
    if (strcmp (ItmL6dbH, s2) == (700 - 700))
        printf ("=");
    return 0;
}

