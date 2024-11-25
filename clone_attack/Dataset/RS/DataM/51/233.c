main () {
    int EgRL4Mq;
    int asDBplV1Cm;
    int i;
    int Z582eFpGmo;
    EgRL4Mq = 0;
    int Qe5EMUbOH [500] = {0};
    char IF4UkqN32B [500];
    char F3KoVe6IPir [5];
    char m9XUrNP [500] [5] = {0};
    char CfQqCYbEck;
    gets (IF4UkqN32B);
    scanf ("%d", &asDBplV1Cm);
    {
        i = 0;
        while (IF4UkqN32B[i + asDBplV1Cm - 1]) {
            {
                Z582eFpGmo = 0;
                while (Z582eFpGmo < asDBplV1Cm) {
                    F3KoVe6IPir[Z582eFpGmo] = IF4UkqN32B[i + Z582eFpGmo];
                    Z582eFpGmo = Z582eFpGmo +1;
                };
            }
            for (Z582eFpGmo = 0; m9XUrNP[Z582eFpGmo][0]; Z582eFpGmo++)
                if (!strcmp (F3KoVe6IPir, m9XUrNP[Z582eFpGmo])) {
                    Qe5EMUbOH[Z582eFpGmo]++;
                    if (Qe5EMUbOH[Z582eFpGmo] > EgRL4Mq)
                        EgRL4Mq = Qe5EMUbOH[Z582eFpGmo];
                    break;
                }
            i++;
            if (!m9XUrNP[Z582eFpGmo][0]) {
                strcpy (m9XUrNP[Z582eFpGmo], F3KoVe6IPir);
                Qe5EMUbOH[Z582eFpGmo]++;
                if (Qe5EMUbOH[Z582eFpGmo] > EgRL4Mq)
                    EgRL4Mq = Qe5EMUbOH[Z582eFpGmo];
            };
        };
    }
    if (EgRL4Mq == 1)
        ;
    else {
        printf ("%d\n", EgRL4Mq);
        {
            Z582eFpGmo = 0;
            while (m9XUrNP[Z582eFpGmo][0]) {
                if (Qe5EMUbOH[Z582eFpGmo] == EgRL4Mq)
                    puts (m9XUrNP[Z582eFpGmo]);
                Z582eFpGmo++;
            };
        };
    }
    getchar ();
}

