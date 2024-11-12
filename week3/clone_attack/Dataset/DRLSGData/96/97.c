main () {
    int i;
    int b [(436 - 334)];
    int m;
    char n [(220 - 118)];
    char r [(338 - 236)];
    scanf ("%s", n);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    if (n[(49 - 48)] == '\0')
        printf ("0\n%s", n);
    else {
        if (((994 - 981) > (n[(290 - 290)] - '0') * (650 - 640) + n[(269 - 268)] - '0') && n[(150 - 148)] == '\0') {
            printf ("0\n%s", n);
        }
        else {
            b[(164 - 164)] = (191 - 181) * (n[(206 - 206)] - '0') + n[(32 - 31)] - '0';
            for (i = (542 - 542); i <= strlen (n) - (598 - 596); i = i + (377 - 376)) {
                r[i] = (b[i] / (1001 - 988)) + '0';
                m = b[i] % (700 - 687);
                b[i + (337 - 336)] = n[i + (539 - 537)] + m * (858 - 848) - '0';
            }
            r[strlen (n) - (260 - 259)] = '\0';
            if (r[(661 - 661)] == '0') {
                for (i = (66 - 65); i <= strlen (n) - (290 - 288); i++) {
                    printf ("%c", r[i]);
                }
                printf ("\n%d", m);
            }
            else {
                printf ("%s\n", r);
                printf ("%d", m);
            }
        }
    }
}

