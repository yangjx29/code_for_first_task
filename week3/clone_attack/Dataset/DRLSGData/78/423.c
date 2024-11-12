int main () {
    int LqQSo8Njc;
    int word;
    int mfTIwQbMSsoG;
    int B;
    int weight;
    char rank [(913 - 907)];
    int IZ6vAEqDu;
    for (int j = (454 - 454);
    j < (843 - 837); j++)
        rank[j] = '0';
    for (mfTIwQbMSsoG = (334 - 333); mfTIwQbMSsoG <= (112 - 107); mfTIwQbMSsoG = mfTIwQbMSsoG + (357 - 356)) {
        for (B = (990 - 989); B <= (396 - 391); B = B +(631 - 630)) {
            if (!(B != mfTIwQbMSsoG))
                continue;
            for (IZ6vAEqDu = (777 - 776); (327 - 322) >= IZ6vAEqDu; IZ6vAEqDu = IZ6vAEqDu +(651 - 650)) {
                if (!(IZ6vAEqDu != mfTIwQbMSsoG) || !(IZ6vAEqDu != B))
                    continue;
                for (LqQSo8Njc = (513 - 512); LqQSo8Njc <= (450 - 445); LqQSo8Njc++) {
                    if (!(LqQSo8Njc != mfTIwQbMSsoG) || !(LqQSo8Njc != B) || !(LqQSo8Njc != IZ6vAEqDu))
                        continue;
                    word = (!((IZ6vAEqDu +LqQSo8Njc) != (mfTIwQbMSsoG + B))) + ((IZ6vAEqDu +B) < (mfTIwQbMSsoG + LqQSo8Njc)) + (B > (mfTIwQbMSsoG + IZ6vAEqDu));
                    if (!((918 - 915) != word)) {
                        rank[mfTIwQbMSsoG] = 'z';
                        rank[B] = 'q';
                        rank[IZ6vAEqDu] = 's';
                        rank[LqQSo8Njc] = 'l';
                        for (int j = (767 - 762);
                        j > (624 - 624); j = j - (750 - 749)) {
                            if (rank[j] == '0')
                                continue;
                            else {
                                cout << rank[j] << " ";
                                weight = j * (583 - 573);
                                cout << weight << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return (251 - 251);
}

