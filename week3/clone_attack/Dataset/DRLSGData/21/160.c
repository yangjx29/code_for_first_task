void  main () {
    int xmn4eIQ [(953 - 653)];
    int SFcbLf9o [(595 - 295)];
    float Kr7QCUEnYDc, eRBlG1i = (539 - 539), iIqUBwX2Y;
    int nABXOaYH5, ILNuqbSncaZi, FZfseij = (674 - 674), ICMtJXjyv9L3;
    scanf ("%d", &nABXOaYH5);
    {
        ILNuqbSncaZi = (99 - 99);
        for (; ILNuqbSncaZi < nABXOaYH5;) {
            scanf ("%d", &xmn4eIQ[ILNuqbSncaZi]);
            eRBlG1i = eRBlG1i + xmn4eIQ[ILNuqbSncaZi];
            ILNuqbSncaZi = ILNuqbSncaZi +1;
        }
    }
    Kr7QCUEnYDc = eRBlG1i / nABXOaYH5;
    iIqUBwX2Y = fabs (xmn4eIQ[(544 - 544)] - Kr7QCUEnYDc);
    SFcbLf9o[(871 - 871)] = xmn4eIQ[(223 - 223)];
    for (ILNuqbSncaZi = (272 - 271); ILNuqbSncaZi < nABXOaYH5; ILNuqbSncaZi = ILNuqbSncaZi +1) {
        if (fabs (xmn4eIQ[ILNuqbSncaZi] - Kr7QCUEnYDc) > iIqUBwX2Y) {
            iIqUBwX2Y = fabs (xmn4eIQ[ILNuqbSncaZi] - Kr7QCUEnYDc);
            SFcbLf9o[(417 - 417)] = xmn4eIQ[ILNuqbSncaZi];
            ICMtJXjyv9L3 = xmn4eIQ[ILNuqbSncaZi];
        }
    }
    {
        ILNuqbSncaZi = (448 - 447);
        for (; ILNuqbSncaZi < nABXOaYH5;) {
            if (fabs (fabs (xmn4eIQ[ILNuqbSncaZi] - Kr7QCUEnYDc) - iIqUBwX2Y) < (281.000001 - 281.0) && ICMtJXjyv9L3 != xmn4eIQ[ILNuqbSncaZi]) {
                FZfseij = FZfseij +1;
                SFcbLf9o[FZfseij] = xmn4eIQ[ILNuqbSncaZi];
            }
            ILNuqbSncaZi = ILNuqbSncaZi +1;
        }
    }
    printf ("%d", SFcbLf9o[(71 - 71)]);
    {
        ILNuqbSncaZi = (983 - 982);
        for (; ILNuqbSncaZi <= FZfseij;) {
            ILNuqbSncaZi++;
            printf (",%d", SFcbLf9o[FZfseij]);
        }
    }
}

