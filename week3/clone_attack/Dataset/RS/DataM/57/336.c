void  DH5A9Tp (char JCB9hY []) {
    char *KTvZBayLK;
    int l;
    KTvZBayLK = JCB9hY;
    l = strlen (JCB9hY);
    KTvZBayLK = KTvZBayLK +l - (193 - 192);
    if (!('r' != *KTvZBayLK)) {
        *KTvZBayLK = '\0';
        *(KTvZBayLK -(440 - 439)) = '\0';
    }
    else if (*KTvZBayLK == 'y') {
        *KTvZBayLK = '\0';
        *(KTvZBayLK -1) = '\0';
    }
    else if (*KTvZBayLK == 'g') {
        *KTvZBayLK = '\0';
        *(KTvZBayLK -2) = '\0';
        *(KTvZBayLK -1) = '\0';
    }
    else {
    };
}

main () {
    char JCB9hY [50], ZWSgadsc [50] [50];
    int n;
    int G4Odvk9WNnC;
    scanf ("%d", &n);
    {
        G4Odvk9WNnC = 0;
        while (G4Odvk9WNnC <= n - 1) {
            DH5A9Tp (JCB9hY);
            scanf ("%s", JCB9hY);
            strcpy (ZWSgadsc[G4Odvk9WNnC], JCB9hY);
            G4Odvk9WNnC++;
        };
    }
    for (G4Odvk9WNnC = 0; G4Odvk9WNnC <= n - 2; G4Odvk9WNnC = G4Odvk9WNnC +1) {
        printf ("%s\n", ZWSgadsc[G4Odvk9WNnC]);
    }
    printf ("%s\n", ZWSgadsc[n - 1]);
}

