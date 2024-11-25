main () {
    char S7thI63j5 [(677 - 596)];
    gets (S7thI63j5);
    char I8vXGQqBi [81];
    int JdpGDAM, nzkFwmn, Ei5YNKjZOg, j4Ayjbqs, pn2ETS40DHCe, EFvkXUj4E6l, ktdT7nxRI;
    gets (I8vXGQqBi);
    j4Ayjbqs = strlen (S7thI63j5);
    for (JdpGDAM = 0; JdpGDAM < j4Ayjbqs; JdpGDAM++) {
        if (S7thI63j5[JdpGDAM] > 'A' && 'Z' > S7thI63j5[JdpGDAM])
            S7thI63j5[JdpGDAM] = S7thI63j5[JdpGDAM] - 'A' + 'a';
    }
    pn2ETS40DHCe = strlen (I8vXGQqBi);
    for (JdpGDAM = 0; JdpGDAM < pn2ETS40DHCe; JdpGDAM++) {
        if (I8vXGQqBi[JdpGDAM] > 'A' && 'Z' > I8vXGQqBi[JdpGDAM])
            I8vXGQqBi[JdpGDAM] = I8vXGQqBi[JdpGDAM] - 'A' + 'a';
    }
    Ei5YNKjZOg = strcmp (S7thI63j5, I8vXGQqBi);
    if (Ei5YNKjZOg == 0)
        printf ("=");
    else if (Ei5YNKjZOg > 0)
        ;
    else
        ;
}

