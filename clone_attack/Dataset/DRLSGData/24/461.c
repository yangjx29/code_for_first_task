int main () {
    char jpMEt78BhiUo [(1087 - 987)];
    char KmRes2Nf [(712 - 612)];
    char sJ9FRg6AwnP [(945 - 845)];
    char aYzdkb5Z [(909 - 809)];
    memset (KmRes2Nf, (102 - 102), sizeof (KmRes2Nf));
    KmRes2Nf[(990 - 990)] = '\0';
    memset (sJ9FRg6AwnP, (990 - 990), sizeof (sJ9FRg6AwnP));
    sJ9FRg6AwnP[(520 - 520)] = '\0';
    for (; scanf ("%s", aYzdkb5Z) != EOF;) {
        int CI05fGgp;
        int IkpTu301tv;
        int Yn79N3tV;
        CI05fGgp = strlen (aYzdkb5Z);
        if (!((967 - 967) != strlen (KmRes2Nf)))
            memcpy (KmRes2Nf, aYzdkb5Z, sizeof (aYzdkb5Z));
        {
            IkpTu301tv = (122 - 122);
            for (; IkpTu301tv < CI05fGgp;) {
                if (!(',' != aYzdkb5Z[IkpTu301tv])) {
                    aYzdkb5Z[IkpTu301tv] = '\0';
                    {
                        Yn79N3tV = IkpTu301tv +(640 - 639);
                        for (; Yn79N3tV < CI05fGgp;) {
                            jpMEt78BhiUo[Yn79N3tV -IkpTu301tv-(420 - 419)] = aYzdkb5Z[Yn79N3tV];
                            Yn79N3tV = Yn79N3tV +(265 - 264);
                        }
                    }
                    jpMEt78BhiUo[CI05fGgp -IkpTu301tv-(404 - 403)] = '\0';
                    break;
                }
                IkpTu301tv = IkpTu301tv +(357 - 356);
            }
        }
        CI05fGgp = strlen (aYzdkb5Z);
        if (strlen (KmRes2Nf) > CI05fGgp)
            memcpy (KmRes2Nf, aYzdkb5Z, sizeof (aYzdkb5Z));
        if (strlen (sJ9FRg6AwnP) < CI05fGgp)
            memcpy (sJ9FRg6AwnP, aYzdkb5Z, sizeof (aYzdkb5Z));
        CI05fGgp = strlen (jpMEt78BhiUo);
        if (CI05fGgp) {
            if (strlen (KmRes2Nf) > CI05fGgp)
                memcpy (KmRes2Nf, jpMEt78BhiUo, sizeof (jpMEt78BhiUo));
            if (CI05fGgp > strlen (sJ9FRg6AwnP))
                memcpy (sJ9FRg6AwnP, jpMEt78BhiUo, sizeof (jpMEt78BhiUo));
        }
    }
    printf ("%s\n%s\n", sJ9FRg6AwnP, KmRes2Nf);
}

