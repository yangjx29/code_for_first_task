void  main () {
    int bxCa4nDRH9;
    struct   {
        double  UJhlqbuALrXd, BQBhO2;
    }
    qsTIUlYR [10];
    int LYFeMAv, Iz1egYv;
    double  QXrDHO2NCE, TiqgPDuJ [100];
    QXrDHO2NCE = 0.0;
    scanf ("%d", &bxCa4nDRH9);
    {
        LYFeMAv = 0;
        while (bxCa4nDRH9 > LYFeMAv) {
            float a;
            float aiS3yC;
            scanf ("%f %f", &a, &aiS3yC);
            qsTIUlYR[LYFeMAv].UJhlqbuALrXd = a;
            qsTIUlYR[LYFeMAv].BQBhO2 = aiS3yC;
            LYFeMAv = LYFeMAv +1;
        };
    }
    {
        Iz1egYv = bxCa4nDRH9 - 1;
        while (0 < Iz1egYv) {
            {
                LYFeMAv = 0;
                while (bxCa4nDRH9 - 1 > LYFeMAv) {
                    TiqgPDuJ[LYFeMAv] = sqrt ((qsTIUlYR[LYFeMAv].UJhlqbuALrXd - qsTIUlYR[Iz1egYv].UJhlqbuALrXd) * (qsTIUlYR[LYFeMAv].UJhlqbuALrXd - qsTIUlYR[Iz1egYv].UJhlqbuALrXd) + (qsTIUlYR[LYFeMAv].BQBhO2 - qsTIUlYR[Iz1egYv].BQBhO2) * (qsTIUlYR[LYFeMAv].BQBhO2 - qsTIUlYR[Iz1egYv].BQBhO2));
                    if (TiqgPDuJ[LYFeMAv] > QXrDHO2NCE)
                        QXrDHO2NCE = TiqgPDuJ[LYFeMAv];
                    LYFeMAv++;
                };
            }
            Iz1egYv = Iz1egYv -1;
        };
    }
    printf ("%.4f\n", QXrDHO2NCE);
}

