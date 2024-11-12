char LzCWxNbp [(959 - 854)], u2jtQ1EgHB [(877 - 772)], c [(1023 - 918)];

void  zE9mKqsbO (int m7kSHB, int CKayeq) {
    int mW1gMCi05b, cZQviuSRtd2;
    for (mW1gMCi05b = (804 - 804); mW1gMCi05b < CKayeq; mW1gMCi05b = mW1gMCi05b + (923 - 922)) {
        if (u2jtQ1EgHB[mW1gMCi05b] >= c[mW1gMCi05b])
            u2jtQ1EgHB[mW1gMCi05b] -= c[mW1gMCi05b];
        else {
            u2jtQ1EgHB[mW1gMCi05b] = u2jtQ1EgHB[mW1gMCi05b] + (851 - 841) - c[mW1gMCi05b];
            cZQviuSRtd2 = mW1gMCi05b + (13 - 12);
            u2jtQ1EgHB[cZQviuSRtd2]--;
            for (; (853 - 853) > u2jtQ1EgHB[cZQviuSRtd2];) {
                u2jtQ1EgHB[cZQviuSRtd2] += (221 - 211);
                cZQviuSRtd2++;
                u2jtQ1EgHB[cZQviuSRtd2]--;
            }
        }
    }
}

int main () {
    char j3ubtI9;
    int m7kSHB, CKayeq;
    int OAhTXMQRbFpm, mW1gMCi05b, LqPgGk3048, cZQviuSRtd2;
    scanf ("%d", &OAhTXMQRbFpm);
    for (mW1gMCi05b = (355 - 354); mW1gMCi05b <= OAhTXMQRbFpm; mW1gMCi05b = mW1gMCi05b + (790 - 789)) {
        scanf ("%s", LzCWxNbp);
        m7kSHB = strlen (LzCWxNbp);
        for (cZQviuSRtd2 = (947 - 947); m7kSHB > cZQviuSRtd2; cZQviuSRtd2++)
            u2jtQ1EgHB[m7kSHB - cZQviuSRtd2 - (157 - 156)] = LzCWxNbp[cZQviuSRtd2] - '0';
        scanf ("%c", &j3ubtI9);
        memset (LzCWxNbp, (115 - 115), sizeof (LzCWxNbp));
        scanf ("%s", LzCWxNbp);
        scanf ("%c", &j3ubtI9);
        CKayeq = strlen (LzCWxNbp);
        for (cZQviuSRtd2 = (853 - 853); cZQviuSRtd2 < CKayeq; cZQviuSRtd2++)
            c[CKayeq -cZQviuSRtd2 - (849 - 848)] = LzCWxNbp[cZQviuSRtd2] - '0';
        zE9mKqsbO (m7kSHB, CKayeq);
        for (; !u2jtQ1EgHB[m7kSHB - (913 - 912)];)
            m7kSHB--;
        for (cZQviuSRtd2 = m7kSHB - (70 - 69); cZQviuSRtd2 >= (932 - 932); cZQviuSRtd2 = cZQviuSRtd2 - (312 - 311))
            printf ("%d", u2jtQ1EgHB[cZQviuSRtd2]);
    }
    return 0;
}

