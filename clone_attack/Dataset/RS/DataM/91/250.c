void  main () {
    char UuFiSldJo [200];
    gets (UuFiSldJo);
    char Fvoj1r;
    char *NSA7wy8QHZc, *LvLl3gUKjiP5;
    NSA7wy8QHZc = &UuFiSldJo[0];
    LvLl3gUKjiP5 = &UuFiSldJo[1];
    Fvoj1r = *NSA7wy8QHZc;
    while (*LvLl3gUKjiP5 != '\0') {
        *NSA7wy8QHZc = *NSA7wy8QHZc+*LvLl3gUKjiP5;
        NSA7wy8QHZc = NSA7wy8QHZc +1;
        LvLl3gUKjiP5 = LvLl3gUKjiP5 +1;
    }
    *NSA7wy8QHZc = *NSA7wy8QHZc+Fvoj1r;
    printf ("%s\n", UuFiSldJo);
}

