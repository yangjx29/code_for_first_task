void  main () {
    char DL7oFeGm [100], Comb1y [100];
    gets (DL7oFeGm);
    int uPOe4bvw, AhTO89iSQP, vSLWjF6vYbNg;
    gets (Comb1y);
    uPOe4bvw = strlen (DL7oFeGm);
    vSLWjF6vYbNg = strlen (Comb1y);
    {
        AhTO89iSQP = 0;
        while (AhTO89iSQP < uPOe4bvw) {
            if (DL7oFeGm[AhTO89iSQP] >= 'A' && 'Z' >= DL7oFeGm[AhTO89iSQP])
                DL7oFeGm[AhTO89iSQP] = DL7oFeGm[AhTO89iSQP] + 32;
            AhTO89iSQP = AhTO89iSQP +1;
        }
    }
    {
        AhTO89iSQP = 0;
        while (vSLWjF6vYbNg > AhTO89iSQP) {
            if ('A' <= Comb1y[AhTO89iSQP] && Comb1y[AhTO89iSQP] <= 'Z')
                Comb1y[AhTO89iSQP] = Comb1y[AhTO89iSQP] + 32;
            AhTO89iSQP = AhTO89iSQP +1;
        }
    }
    if (strcmp (DL7oFeGm, Comb1y) > 0)
        ;
    else if (strcmp (DL7oFeGm, Comb1y) < 0)
        ;
    else
        ;
}

