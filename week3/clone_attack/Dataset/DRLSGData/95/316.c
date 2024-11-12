void  main () {
    char aPUlRMq48Tp [80];
    gets (aPUlRMq48Tp);
    int VY25Gws;
    int fma9Ckh;
    int b45O7PQCdjY;
    char e8PMa9soV2m [80];
    gets (e8PMa9soV2m);
    b45O7PQCdjY = strlen (aPUlRMq48Tp);
    fma9Ckh = strlen (e8PMa9soV2m);
    for (VY25Gws = 0; b45O7PQCdjY > VY25Gws; VY25Gws = VY25Gws +1)
        if (aPUlRMq48Tp[VY25Gws] >= 'A' && 'Z' >= aPUlRMq48Tp[VY25Gws])
            aPUlRMq48Tp[VY25Gws] = (aPUlRMq48Tp[VY25Gws] + 32);
    for (VY25Gws = 0; fma9Ckh > VY25Gws; VY25Gws = VY25Gws +1)
        if ('A' <= e8PMa9soV2m[VY25Gws] && e8PMa9soV2m[VY25Gws] <= 'Z')
            e8PMa9soV2m[VY25Gws] = (e8PMa9soV2m[VY25Gws] + 32);
    if (strcmp (aPUlRMq48Tp, e8PMa9soV2m) > 0)
        printf ("%c", '>');
    if (strcmp (aPUlRMq48Tp, e8PMa9soV2m) < 0)
        printf ("%c", '<');
    if (strcmp (aPUlRMq48Tp, e8PMa9soV2m) == 0)
        printf ("%c", '=');
}

