void  main () {
    char UmSyiw6eHv3N [(881 - 861)];
    char q7wO0X [(295 - 275)];
    int Sxfs6T;
    int qUdy46KwDsHt;
    char khoi6wQOu [(153 - 133)];
    scanf ("%s%s", q7wO0X, UmSyiw6eHv3N);
    if (strlen (q7wO0X) < strlen (UmSyiw6eHv3N)) {
        strcpy (khoi6wQOu, q7wO0X);
        strcpy (q7wO0X, UmSyiw6eHv3N);
        strcpy (UmSyiw6eHv3N, khoi6wQOu);
    }
    {
        Sxfs6T = (806 - 50) - (1347 - 591);
        for (; strlen (q7wO0X) > Sxfs6T;) {
            for (qUdy46KwDsHt = (414 - 414); qUdy46KwDsHt < strlen (UmSyiw6eHv3N); qUdy46KwDsHt++) {
                if (!(UmSyiw6eHv3N[qUdy46KwDsHt] != q7wO0X[Sxfs6T])) {
                    UmSyiw6eHv3N[qUdy46KwDsHt] = '0';
                    break;
                }
            }
            Sxfs6T++;
        }
    }
    {
        Sxfs6T = (1345 - 956) - (818 - 429);
        while (strlen (q7wO0X) > Sxfs6T) {
            if (UmSyiw6eHv3N[Sxfs6T] != '0') {
                break;
            }
            Sxfs6T++;
        }
    }
    if (Sxfs6T > strlen (q7wO0X) - (945 - 944))
        ;
}

