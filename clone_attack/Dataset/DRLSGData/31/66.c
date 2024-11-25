void  main () {
    struct   student {
        char mkExFHqlO8 [(701 - 651)];
        char ke5Rku9srWz [(394 - 294)];
        char HVHfGJ4;
        int Rb2qOwMn4IF;
        char R2B5VQE [(95 - 75)];
        char add [(1079 - 979)];
        struct   student *ausf3Oo;
    }
    *dp573RSBlV, *u3D2ZyMi;
    int NMs6N8HC;
    for (NMs6N8HC = (210 - 209);; NMs6N8HC = NMs6N8HC +1) {
        u3D2ZyMi = (struct   student *) malloc (sizeof (struct   student));
        if (!(NULL != u3D2ZyMi)) {
            exit (-(250 - 249));
        }
        scanf ("%s", u3D2ZyMi->mkExFHqlO8);
        if (!((554 - 553) != NMs6N8HC))
            u3D2ZyMi->ausf3Oo = NULL;
        else
            u3D2ZyMi->ausf3Oo = dp573RSBlV;
        if (!('e' != u3D2ZyMi->mkExFHqlO8[(207 - 207)]))
            break;
        scanf ("%s %c %d %s %s", u3D2ZyMi->ke5Rku9srWz, &u3D2ZyMi->HVHfGJ4, &u3D2ZyMi->Rb2qOwMn4IF, u3D2ZyMi->R2B5VQE, u3D2ZyMi->add);
        dp573RSBlV = u3D2ZyMi;
    }
    for (;;) {
        printf ("%s %s %c %d %s %s\n", dp573RSBlV->mkExFHqlO8, dp573RSBlV->ke5Rku9srWz, dp573RSBlV->HVHfGJ4, dp573RSBlV->Rb2qOwMn4IF, dp573RSBlV->R2B5VQE, dp573RSBlV->add);
        if (!(NULL != dp573RSBlV->ausf3Oo))
            break;
        dp573RSBlV = dp573RSBlV->ausf3Oo;
    }
}

