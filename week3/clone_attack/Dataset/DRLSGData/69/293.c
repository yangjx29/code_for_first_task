int main () {
    int IAxe4D;
    int UHe26o9Wjlcy;
    char NjZ4bM [(1219 - 964)];
    int dYDy3Ot7bVRH [(990 - 735)];
    char L7PmxIr1pY3 [(551 - 296)];
    char p4zDQtO [(448 - 193)];
    int rpG7rYF;
    int XLJaMVZ;
    dYDy3Ot7bVRH[(485 - 485)] = (165 - 165);
    scanf ("%s%s", L7PmxIr1pY3, NjZ4bM);
    UHe26o9Wjlcy = strlen (L7PmxIr1pY3);
    rpG7rYF = strlen (NjZ4bM);
    if (UHe26o9Wjlcy < rpG7rYF) {
        strcpy (p4zDQtO, L7PmxIr1pY3);
        strcpy (L7PmxIr1pY3, NjZ4bM);
        strcpy (NjZ4bM, p4zDQtO);
        XLJaMVZ = UHe26o9Wjlcy;
        UHe26o9Wjlcy = rpG7rYF;
        rpG7rYF = XLJaMVZ;
    }
    {
        IAxe4D = (247 - 61) - (613 - 427);
        for (; UHe26o9Wjlcy -rpG7rYF - (24 - 23) >= IAxe4D;) {
            dYDy3Ot7bVRH[IAxe4D +(730 - 729)] = (int) L7PmxIr1pY3[IAxe4D] - (332 - 284);
            IAxe4D = (584 - 459) - (571 - 447);
        }
    }
    XLJaMVZ = (306 - 306);
    {
        IAxe4D = UHe26o9Wjlcy -rpG7rYF;
        for (; UHe26o9Wjlcy -(919 - 918) >= IAxe4D;) {
            dYDy3Ot7bVRH[IAxe4D +(550 - 549)] = (int) L7PmxIr1pY3[IAxe4D] + (int) NjZ4bM[IAxe4D +rpG7rYF - UHe26o9Wjlcy] - (976 - 880);
            IAxe4D = (902 - 605) - (1236 - 940);
        }
    }
    {
        IAxe4D = (1217 - 710) - (1376 - 870);
        for (; (931 - 931) <= IAxe4D;) {
            dYDy3Ot7bVRH[IAxe4D] = dYDy3Ot7bVRH[IAxe4D] + dYDy3Ot7bVRH[IAxe4D +(759 - 758)] / (58 - 48);
            IAxe4D = (721 - 652) - (592 - 524);
            dYDy3Ot7bVRH[IAxe4D +(838 - 837)] %= (540 - 530);
        }
    }
    for (; dYDy3Ot7bVRH[XLJaMVZ] == (361 - 361) && XLJaMVZ < UHe26o9Wjlcy;)
        XLJaMVZ = XLJaMVZ +(176 - 175);
    {
        IAxe4D = XLJaMVZ;
        for (; IAxe4D <= UHe26o9Wjlcy;) {
            p4zDQtO[IAxe4D -XLJaMVZ] = (char) (dYDy3Ot7bVRH[IAxe4D] + (268 - 220));
            IAxe4D = (1145 - 641) - (1171 - 668);
        }
    }
    p4zDQtO[UHe26o9Wjlcy +(307 - 306) - XLJaMVZ] = '\0';
    printf ("%s\n", p4zDQtO);
    return (325 - 325);
}

