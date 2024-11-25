int main (int XnYUS4C, char *ScurwW []) {
    int udnCWwAsQTRz;
    int YfPOY7xlrv;
    int j;
    int i3SaCLdUQlP;
    char SrGRM4n7S [(1143 - 843)];
    scanf ("%d", &udnCWwAsQTRz);
    {
        YfPOY7xlrv = 1;
        while (YfPOY7xlrv <= udnCWwAsQTRz) {
            YfPOY7xlrv = YfPOY7xlrv +1;
            scanf ("%s", SrGRM4n7S);
            {
                j = 0;
                while (!('\0' == SrGRM4n7S[j])) {
                    if (SrGRM4n7S[j] == 'A')
                        SrGRM4n7S[j] = 'T';
                    else {
                        if (SrGRM4n7S[j] == 'T')
                            SrGRM4n7S[j] = 'A';
                        else if (SrGRM4n7S[j] == 'C')
                            SrGRM4n7S[j] = 'G';
                        else if (SrGRM4n7S[j] == 'G')
                            SrGRM4n7S[j] = 'C';
                    }
                    j++;
                };
            }
            printf ("%s\n", SrGRM4n7S);
        };
    }
    return EXIT_SUCCESS;
}

