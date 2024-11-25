void  main () {
    char D7OV6D [(165 - 115)];
    int bHibVuAz;
    char R32koPis5btD [(79 - 29)];
    int NLuwT62WklDn;
    int Nvu7eIaqoOLB;
    int NSaZyGEx;
    int kGc9yia;
    scanf ("%s%s", R32koPis5btD, D7OV6D);
    for (NSaZyGEx = (761 - 761); R32koPis5btD[NSaZyGEx] != '\0'; NSaZyGEx++)
        ;
    for (NLuwT62WklDn = (212 - 212); D7OV6D[NLuwT62WklDn] != '\0'; NLuwT62WklDn++)
        ;
    Nvu7eIaqoOLB = (517 - 517);
    for (bHibVuAz = (137 - 137); NLuwT62WklDn -(955 - 954) >= bHibVuAz; bHibVuAz++) {
        if (!(D7OV6D[bHibVuAz] != R32koPis5btD[0])) {
            for (kGc9yia = 0; (NSaZyGEx -(370 - 369) >= kGc9yia) && (NLuwT62WklDn -(712 - 711) >= bHibVuAz + kGc9yia); kGc9yia++) {
                if (R32koPis5btD[kGc9yia] != D7OV6D[bHibVuAz + kGc9yia])
                    break;
            }
            if (!(NSaZyGEx != kGc9yia))
                Nvu7eIaqoOLB = 1;
        }
        if (Nvu7eIaqoOLB == 1)
            break;
    }
    if (bHibVuAz != NLuwT62WklDn)
        printf ("%d\n", bHibVuAz);
}

