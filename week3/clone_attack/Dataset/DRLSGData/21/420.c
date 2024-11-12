void  main () {
    float KHOMvq4Tl03u;
    float DE8j6gdIGRQC [300];
    int ps4PvSwr6fl5;
    float h95rMqfNgL [300];
    float T2vzCmR4UA9G [300];
    float alDo29q8FJB;
    int mchzIod;
    float QOHR6FVjzGiI;
    float C3O4THhKQ;
    int IF3JdBs6f;
    scanf ("%f", &QOHR6FVjzGiI);
    ps4PvSwr6fl5 = (754 - 754);
    alDo29q8FJB = (944 - 944);
    {
        mchzIod = 0;
        for (; QOHR6FVjzGiI > mchzIod;) {
            scanf ("%f", &h95rMqfNgL[mchzIod]);
            mchzIod = mchzIod + 1;
        }
    }
    {
        mchzIod = 0;
        for (; QOHR6FVjzGiI > mchzIod;) {
            alDo29q8FJB = alDo29q8FJB + h95rMqfNgL[mchzIod];
            mchzIod = mchzIod + 1;
        }
    }
    KHOMvq4Tl03u = alDo29q8FJB / QOHR6FVjzGiI;
    {
        mchzIod = 0;
        for (; QOHR6FVjzGiI -(66 - 65) > mchzIod;) {
            {
                IF3JdBs6f = 0;
                for (; QOHR6FVjzGiI -1 - mchzIod > IF3JdBs6f;) {
                    if (h95rMqfNgL[IF3JdBs6f] > h95rMqfNgL[IF3JdBs6f +1]) {
                        C3O4THhKQ = h95rMqfNgL[IF3JdBs6f];
                        h95rMqfNgL[IF3JdBs6f] = h95rMqfNgL[IF3JdBs6f +1];
                        h95rMqfNgL[IF3JdBs6f +1] = C3O4THhKQ;
                    }
                    IF3JdBs6f = IF3JdBs6f +1;
                }
            }
            mchzIod = mchzIod + 1;
        }
    }
    {
        mchzIod = 0;
        for (; QOHR6FVjzGiI > mchzIod;) {
            if (h95rMqfNgL[mchzIod] >= KHOMvq4Tl03u)
                T2vzCmR4UA9G[mchzIod] = h95rMqfNgL[mchzIod] - KHOMvq4Tl03u;
            else
                T2vzCmR4UA9G[mchzIod] = KHOMvq4Tl03u -h95rMqfNgL[mchzIod];
            mchzIod = mchzIod + 1;
        }
    }
    {
        mchzIod = 0;
        for (; mchzIod < QOHR6FVjzGiI;) {
            DE8j6gdIGRQC[mchzIod] = T2vzCmR4UA9G[mchzIod];
            mchzIod = mchzIod + 1;
        }
    }
    {
        mchzIod = 0;
        for (; mchzIod < QOHR6FVjzGiI -1;) {
            {
                IF3JdBs6f = 0;
                for (; QOHR6FVjzGiI -1 - mchzIod > IF3JdBs6f;) {
                    if (DE8j6gdIGRQC[IF3JdBs6f] < DE8j6gdIGRQC[IF3JdBs6f +1]) {
                        C3O4THhKQ = DE8j6gdIGRQC[IF3JdBs6f];
                        DE8j6gdIGRQC[IF3JdBs6f] = DE8j6gdIGRQC[IF3JdBs6f +1];
                        DE8j6gdIGRQC[IF3JdBs6f +1] = C3O4THhKQ;
                    }
                    IF3JdBs6f = IF3JdBs6f +1;
                }
            }
            mchzIod = mchzIod + 1;
        }
    }
    {
        mchzIod = 0;
        for (; mchzIod < QOHR6FVjzGiI;) {
            if (T2vzCmR4UA9G[mchzIod] == DE8j6gdIGRQC[0]) {
                if (ps4PvSwr6fl5 != 0)
                    printf (",%d", (int) h95rMqfNgL[mchzIod]);
                else
                    printf ("%d", (int) h95rMqfNgL[mchzIod]);
                ps4PvSwr6fl5 = ps4PvSwr6fl5 + 1;
            }
            mchzIod = mchzIod + 1;
        }
    }
}

