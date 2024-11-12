int main () {
    int ksu8GSoMD, k9WHOP, raHsYtJLcnM;
    long  int auPijOJB [100001], JoSacuOF;
    cin >> raHsYtJLcnM;
    {
        ksu8GSoMD = 682 - 681;
        while (raHsYtJLcnM >= ksu8GSoMD) {
            cin >> auPijOJB[ksu8GSoMD];
            ksu8GSoMD = ksu8GSoMD + 1;
        };
    }
    cin >> JoSacuOF;
    {
        ksu8GSoMD = 1;
        while (raHsYtJLcnM > ksu8GSoMD) {
            if (!(JoSacuOF == auPijOJB[ksu8GSoMD]))
                continue;
            {
                k9WHOP = ksu8GSoMD + 1;
                while ((raHsYtJLcnM >= k9WHOP) && (auPijOJB[k9WHOP] == JoSacuOF)) {
                    k9WHOP = k9WHOP + 1;
                };
            }
            if (k9WHOP > raHsYtJLcnM)
                break;
            auPijOJB[ksu8GSoMD] = auPijOJB[k9WHOP];
            ksu8GSoMD = ksu8GSoMD + 1;
            auPijOJB[k9WHOP] = JoSacuOF;
        };
    }
    if (auPijOJB[1] != JoSacuOF)
        cout << auPijOJB[1];
    {
        ksu8GSoMD = 2;
        while ((ksu8GSoMD <= raHsYtJLcnM) && (auPijOJB[ksu8GSoMD] != JoSacuOF)) {
            cout << ' ' << auPijOJB[ksu8GSoMD];
            ksu8GSoMD++;
        };
    }
    return ((712 - 712));
}

