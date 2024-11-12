void  main () {
    int i;
    int RkvVG0dl;
    int PlfpAIw0bna;
    int t;
    char s [(115 - 65)];
    char w [50];
    char m [50];
    scanf ("%s%s", s, w);
    PlfpAIw0bna = strlen (s);
    t = strlen (w);
    for (i = 0; i < t; i++) {
        if (w[i] == s[0]) {
            for (RkvVG0dl = 0; RkvVG0dl < PlfpAIw0bna; RkvVG0dl = RkvVG0dl +1)
                m[RkvVG0dl] = w[i + RkvVG0dl];
            m[RkvVG0dl] = '\0';
            if (strcmp (m, s) == 0) {
                printf ("%d", i);
                break;
            };
        };
    };
}

