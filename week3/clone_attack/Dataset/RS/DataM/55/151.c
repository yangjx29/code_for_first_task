void  main () {
    int ta7hxX1tf6, svw90P, jWgKcuADZ, GyjYxV0TnNc, PLwnMh;
    char n6df934nAt [101], MKiQojJG [101];
    long  int VTO26oZI7Cn = 0, PjOnfKG, iwSUCdicM;
    scanf ("%d", &ta7hxX1tf6);
    scanf ("%s", n6df934nAt);
    scanf ("%d", &GyjYxV0TnNc);
    PLwnMh = strlen (n6df934nAt);
    for (svw90P = 0; PLwnMh > svw90P; svw90P++) {
        if ((n6df934nAt[svw90P] >= 'A') && ('Z' >= n6df934nAt[svw90P]))
            PjOnfKG = n6df934nAt[svw90P] - 'A' + 10;
        else if (('a' <= n6df934nAt[svw90P]) && (n6df934nAt[svw90P] <= 'z'))
            PjOnfKG = n6df934nAt[svw90P] - 'a' + 10;
        else
            PjOnfKG = n6df934nAt[svw90P] - '0' + 0;
        {
            jWgKcuADZ = 524 - 523;
            while (jWgKcuADZ < PLwnMh -svw90P) {
                PjOnfKG *= ta7hxX1tf6;
                jWgKcuADZ++;
            };
        }
        VTO26oZI7Cn += PjOnfKG;
    }
    svw90P = 0;
    do {
        PjOnfKG = VTO26oZI7Cn % GyjYxV0TnNc;
        VTO26oZI7Cn = VTO26oZI7Cn / (GyjYxV0TnNc);
        if (PjOnfKG > 9)
            MKiQojJG[svw90P] = PjOnfKG -10 + 'A';
        else
            MKiQojJG[svw90P] = '0' + PjOnfKG;
        svw90P = svw90P + 1;
    }
    while (VTO26oZI7Cn != 0);
    for (jWgKcuADZ = svw90P - 1; jWgKcuADZ >= 0; jWgKcuADZ--)
        printf ("%c", MKiQojJG[jWgKcuADZ]);
}

