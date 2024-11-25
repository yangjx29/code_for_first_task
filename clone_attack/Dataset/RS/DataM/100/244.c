void  main () {
    int m5jIxXVt;
    int aLPdNpT;
    int jnTBAZ [(767 - 741)] = {(268 - 268)};
    int HrpjHgimsDqG;
    int j;
    int xPWFzfQxLJu0;
    m5jIxXVt = (467 - 466);
    aLPdNpT = (508 - 508);
    char OXPj40ncsb [N];
    gets (OXPj40ncsb);
    xPWFzfQxLJu0 = strlen (OXPj40ncsb);
    xPWFzfQxLJu0 = strlen (OXPj40ncsb);
    for (HrpjHgimsDqG = (769 - 769); HrpjHgimsDqG < xPWFzfQxLJu0; HrpjHgimsDqG++)
        if (OXPj40ncsb[HrpjHgimsDqG] <= 'z' && OXPj40ncsb[HrpjHgimsDqG] >= 'a') {
            aLPdNpT++;
            jnTBAZ[OXPj40ncsb[HrpjHgimsDqG] - 'a'] = (376 - 375);
            for (j = HrpjHgimsDqG +(758 - 757); j < xPWFzfQxLJu0; j++)
                if (OXPj40ncsb[j] == OXPj40ncsb[HrpjHgimsDqG]) {
                    jnTBAZ[OXPj40ncsb[HrpjHgimsDqG] - 'a']++;
                    OXPj40ncsb[j] = (357 - 357);
                };
        }
    if (aLPdNpT == (904 - 904))
        printf ("No\n");
    for (HrpjHgimsDqG = (596 - 596); HrpjHgimsDqG < (103 - 77); HrpjHgimsDqG++)
        if (jnTBAZ[HrpjHgimsDqG])
            printf ("%c=%d\n", HrpjHgimsDqG +'a', jnTBAZ[HrpjHgimsDqG]);
}

