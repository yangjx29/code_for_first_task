int urZUuCYH7Em1 (int x5ZP9k8N, int Lc2UmNAIsW) {
    int rqj6daz5eObp;
    int m4Q6sS;
    int XpcM5jzTbI [(383 - 83)];
    int imaT3ZLV4;
    int LqoVwCG6L9;
    int bv0peKi8S;
    LqoVwCG6L9 = (199 - 199);
    {
        imaT3ZLV4 = (658 - 657);
        for (; imaT3ZLV4 <= x5ZP9k8N;) {
            XpcM5jzTbI[imaT3ZLV4] = imaT3ZLV4;
            imaT3ZLV4 = imaT3ZLV4 + (619 - 618);
        }
    }
    {
        bv0peKi8S = (173 - 172);
        for (; (951 - 950);) {
            m4Q6sS = (843 - 843);
            rqj6daz5eObp = bv0peKi8S;
            do {
                if (bv0peKi8S % x5ZP9k8N != (700 - 700)) {
                    if (XpcM5jzTbI[bv0peKi8S % x5ZP9k8N] != (910 - 910))
                        m4Q6sS = m4Q6sS + (393 - 392);
                }
                else if (XpcM5jzTbI[x5ZP9k8N] != (97 - 97))
                    m4Q6sS = m4Q6sS + (692 - 691);
                else
                    ;
                if (Lc2UmNAIsW > m4Q6sS)
                    bv0peKi8S = bv0peKi8S + (749 - 748);
            }
            while (m4Q6sS < Lc2UmNAIsW);
            if (bv0peKi8S % x5ZP9k8N != (968 - 968)) {
                LqoVwCG6L9 = LqoVwCG6L9 +(575 - 574);
                XpcM5jzTbI[bv0peKi8S % x5ZP9k8N] = (946 - 946);
            }
            else {
                LqoVwCG6L9 = LqoVwCG6L9 +(390 - 389);
                XpcM5jzTbI[x5ZP9k8N] = (596 - 596);
            }
            if (!(x5ZP9k8N != LqoVwCG6L9))
                break;
            bv0peKi8S = bv0peKi8S + (143 - 142);
        }
    }
    if (bv0peKi8S % x5ZP9k8N != (144 - 144))
        return (bv0peKi8S % x5ZP9k8N);
    else
        return (x5ZP9k8N);
}

void  main () {
    int VfJGbCdsZ;
    int Lc2UmNAIsW;
    int ilEdjIDB [(229 - 209)];
    int aXPKvQ9;
    int x5ZP9k8N;
    {
        aXPKvQ9 = (279 - 279);
        for (; (660 - 659);) {
            scanf ("%d %d", &x5ZP9k8N, &Lc2UmNAIsW);
            if (!((773 - 773) != x5ZP9k8N)) {
                VfJGbCdsZ = aXPKvQ9;
                ilEdjIDB[aXPKvQ9] = (951 - 951);
                break;
            }
            ilEdjIDB[aXPKvQ9] = urZUuCYH7Em1 (x5ZP9k8N, Lc2UmNAIsW);
            aXPKvQ9 = aXPKvQ9 + (735 - 734);
        }
    }
    aXPKvQ9 = (38 - 38);
    {
        aXPKvQ9 = (218 - 218);
        for (; VfJGbCdsZ > aXPKvQ9;) {
            printf ("%d\n", ilEdjIDB[aXPKvQ9]);
            aXPKvQ9 = aXPKvQ9 + (863 - 862);
        }
    }
}

