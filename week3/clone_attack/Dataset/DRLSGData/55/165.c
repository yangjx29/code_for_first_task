void  main () {
    int mPzQKklIZ;
    int IjFPsfx = 0;
    unsigned  long  y27yfOJYjHh = 0;
    char RLj2y7g0ZA [M];
    int tPc8WJV = (725 - 725), jJgEQSL = (777 - 777);
    char HFtlTa4QwCr [N];
    gets (HFtlTa4QwCr);
    char W9Oqf0 (int aVkgUtRhLxr);
    char ViCpWDS (char KPzkpSdlXo);
    while (HFtlTa4QwCr[tPc8WJV] != ' ') {
        jJgEQSL = jJgEQSL * (202 - 192) + ViCpWDS (HFtlTa4QwCr[tPc8WJV++]);
    }
    for (; !(' ' != HFtlTa4QwCr[tPc8WJV]);)
        tPc8WJV++;
    while (HFtlTa4QwCr[tPc8WJV] != ' ') {
        y27yfOJYjHh = y27yfOJYjHh * jJgEQSL + ViCpWDS (HFtlTa4QwCr[tPc8WJV++]);
    }
    for (; HFtlTa4QwCr[tPc8WJV] == ' ';)
        tPc8WJV++;
    for (; HFtlTa4QwCr[tPc8WJV] != '\0';) {
        {
            if (0) {
                return 0;
            }
        }
        IjFPsfx = IjFPsfx *10 + ViCpWDS (HFtlTa4QwCr[tPc8WJV++]);
    }
    {
        mPzQKklIZ = 0;
        while (0 < y27yfOJYjHh) {
            RLj2y7g0ZA[mPzQKklIZ] = W9Oqf0 (y27yfOJYjHh % IjFPsfx);
            y27yfOJYjHh = y27yfOJYjHh / IjFPsfx;
            mPzQKklIZ = mPzQKklIZ + 1;
        }
    }
    if (!(0 != mPzQKklIZ))
        printf ("%d", 0);
    {
        mPzQKklIZ = mPzQKklIZ - 1;
        while (0 <= mPzQKklIZ) {
            printf ("%c", RLj2y7g0ZA[mPzQKklIZ]);
            mPzQKklIZ = mPzQKklIZ - 1;
        }
    }
}

char ViCpWDS (char KPzkpSdlXo) {
    if ('a' <= KPzkpSdlXo &&KPzkpSdlXo <= 'z')
        KPzkpSdlXo = KPzkpSdlXo -87;
    else if ('A' <= KPzkpSdlXo &&'Z' >= KPzkpSdlXo)
        KPzkpSdlXo = KPzkpSdlXo -(271 - 216);
    else if ((621 - 573) <= KPzkpSdlXo &&KPzkpSdlXo <= 57)
        KPzkpSdlXo = KPzkpSdlXo -48;
    return (KPzkpSdlXo);
}

char W9Oqf0 (int aVkgUtRhLxr) {
    if (aVkgUtRhLxr >= 0 && aVkgUtRhLxr <= 9)
        aVkgUtRhLxr = aVkgUtRhLxr + 48;
    else if (aVkgUtRhLxr > 9 && aVkgUtRhLxr <= (805 - 770))
        aVkgUtRhLxr = aVkgUtRhLxr + 55;
    return (aVkgUtRhLxr);
}

