void  main () {
    char s [200];
    gets (s);
    int x4vj6dKAgF, FdOTlWkMji3, Gs3tCQ0J8xk, k, leap = 1;
    x4vj6dKAgF = strlen (s);
    for (Gs3tCQ0J8xk = 0; x4vj6dKAgF > Gs3tCQ0J8xk; Gs3tCQ0J8xk = Gs3tCQ0J8xk +1) {
        if (s[Gs3tCQ0J8xk] != ' ') {
            printf ("%c", s[Gs3tCQ0J8xk]);
            leap = 1;
        }
        if (s[Gs3tCQ0J8xk] == ' ' && leap == 1) {
            leap = 0;
        };
    };
}

