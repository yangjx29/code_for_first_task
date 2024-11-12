void  main () {
    char u1VMAmvNWI [(171 - 151)];
    char wLmGXRF3;
    wLmGXRF3 = getchar ();
    scanf ("%s", u1VMAmvNWI);
    printf ("%d", strlen (u1VMAmvNWI));
    if (!(' ' != wLmGXRF3)) {
        for (; true;) {
            wLmGXRF3 = getchar ();
            if (wLmGXRF3 != ' ')
                break;
            scanf ("%s", u1VMAmvNWI);
            printf (",%d", strlen (u1VMAmvNWI));
        }
    }
}

