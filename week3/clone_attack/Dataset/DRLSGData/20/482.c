void  main () {
    char HZY3rtMI [15];
    char FPXnEcFVJl [3];
    char T01vWq;
    char F7UayYsCVj [500] [15];
    int f7hbGP, AarI3n1V, Y7tLkQifpMo, akHCNc27;
    akHCNc27 = 0;
    for (; gets (HZY3rtMI) != NULL;) {
        Y7tLkQifpMo = strlen (HZY3rtMI);
        if (!(0 != Y7tLkQifpMo))
            break;
        {
            f7hbGP = 0;
            while (f7hbGP < Y7tLkQifpMo) {
                if (HZY3rtMI[f7hbGP] == ' ')
                    break;
                f7hbGP = f7hbGP + 1;
            }
        }
        Y7tLkQifpMo = Y7tLkQifpMo -3;
        for (AarI3n1V = f7hbGP + 1; f7hbGP + 4 >= AarI3n1V; AarI3n1V = AarI3n1V +1)
            FPXnEcFVJl[AarI3n1V -f7hbGP - 1] = HZY3rtMI[AarI3n1V];
        AarI3n1V = 0;
        HZY3rtMI[f7hbGP] = '\0';
        T01vWq = HZY3rtMI[0];
        {
            f7hbGP = 0;
            for (; HZY3rtMI[f7hbGP] != '\0';) {
                if (T01vWq < HZY3rtMI[f7hbGP]) {
                    T01vWq = HZY3rtMI[f7hbGP];
                    AarI3n1V = f7hbGP;
                }
                f7hbGP = f7hbGP + 1;
            }
        }
        for (f7hbGP = Y7tLkQifpMo -1; AarI3n1V < f7hbGP; f7hbGP = f7hbGP - 1)
            HZY3rtMI[f7hbGP + 3] = HZY3rtMI[f7hbGP];
        {
            f7hbGP = AarI3n1V +1;
            for (; f7hbGP < AarI3n1V +4;) {
                HZY3rtMI[f7hbGP] = FPXnEcFVJl[f7hbGP - AarI3n1V -1];
                f7hbGP = f7hbGP + 1;
            }
        }
        strcpy (F7UayYsCVj[akHCNc27], HZY3rtMI);
        F7UayYsCVj[akHCNc27][Y7tLkQifpMo +3] = '\0';
        akHCNc27 = akHCNc27 + 1;
    }
    {
        f7hbGP = akHCNc27;
        while (f7hbGP < 500) {
            F7UayYsCVj[f7hbGP][0] = '\0';
            f7hbGP++;
        }
    }
    for (f7hbGP = 0; f7hbGP < akHCNc27; f7hbGP++)
        printf ("%s\n", F7UayYsCVj[f7hbGP]);
}

