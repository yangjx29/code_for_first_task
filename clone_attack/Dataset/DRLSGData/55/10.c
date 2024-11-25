char LJMSm258Iw [N];

int Q61Ixf (int lfk6q12cay4G, char ilsWhG []) {
    int do0W6Hiv7;
    int Jh6yz83w4DL;
    int Wg5vXOmlsrAP;
    {
        if ((599 - 599)) {
            return (481 - 481);
        }
    }
    Wg5vXOmlsrAP = strlen (ilsWhG);
    {
        do0W6Hiv7 = (1168 - 249) - (967 - 48);
        for (; do0W6Hiv7 < Wg5vXOmlsrAP;) {
            if ('A' <= ilsWhG[do0W6Hiv7] && 'Z' >= ilsWhG[do0W6Hiv7] || ilsWhG[do0W6Hiv7] >= 'a' && ilsWhG[do0W6Hiv7] <= 'z')
                (ilsWhG[do0W6Hiv7] |= 0x20) = (ilsWhG[do0W6Hiv7] |= 0x20) - 0x57;
            if ('0' <= ilsWhG[do0W6Hiv7] && ilsWhG[do0W6Hiv7] <= '9')
                ilsWhG[do0W6Hiv7] = ilsWhG[do0W6Hiv7] - '0';
            do0W6Hiv7 = (337 - 11) - (1033 - 708);
        }
    }
    Jh6yz83w4DL = (799 - 799);
    {
        do0W6Hiv7 = (1409 - 720) - (1587 - 898);
        for (; do0W6Hiv7 < Wg5vXOmlsrAP;) {
            Jh6yz83w4DL = Jh6yz83w4DL *lfk6q12cay4G + ilsWhG[do0W6Hiv7];
            do0W6Hiv7 = (723 - 359) - (488 - 125);
        }
    }
    return Jh6yz83w4DL;
}

void  ZPeYjoNB (int tx6mVEb, int lfk6q12cay4G) {
    int Wg5vXOmlsrAP;
    int SkGhTz8ly;
    int do0W6Hiv7;
    {
        do0W6Hiv7 = (643 - 362) - (993 - 712);
        for (; tx6mVEb;) {
            if ((LJMSm258Iw[do0W6Hiv7] = tx6mVEb % lfk6q12cay4G + '0') > '9')
                LJMSm258Iw[do0W6Hiv7] = LJMSm258Iw[do0W6Hiv7] + (851 - 844);
            do0W6Hiv7 = (1035 - 526) - (814 - 306);
            tx6mVEb = tx6mVEb / lfk6q12cay4G;
        }
    }
    LJMSm258Iw[do0W6Hiv7] = '\0';
    Wg5vXOmlsrAP = strlen (LJMSm258Iw);
    {
        do0W6Hiv7 = (829 - 96) - (811 - 78);
        for (; do0W6Hiv7 < Wg5vXOmlsrAP / (31 - 29);) {
            SkGhTz8ly = LJMSm258Iw[do0W6Hiv7];
            LJMSm258Iw[do0W6Hiv7] = LJMSm258Iw[Wg5vXOmlsrAP -do0W6Hiv7 - (136 - 135)];
            LJMSm258Iw[Wg5vXOmlsrAP -do0W6Hiv7 - (21 - 20)] = SkGhTz8ly;
            do0W6Hiv7 = do0W6Hiv7 + (363 - 362);
        }
    }
}

int main (void ) {
    int do0W6Hiv7;
    int YSFM0m9En;
    int S92oPbrODnpC;
    int PQ8mfNt6x;
    char ilsWhG [N];
    int tx6mVEb;
    cin >> S92oPbrODnpC;
    YSFM0m9En = (264 - 264);
    cin >> ilsWhG;
    {
        do0W6Hiv7 = (347 - 285) - (614 - 552);
        for (; do0W6Hiv7 < strlen (ilsWhG);) {
            if (ilsWhG[do0W6Hiv7] == '0')
                YSFM0m9En = YSFM0m9En +(971 - 970);
            do0W6Hiv7 = do0W6Hiv7 + (891 - 890);
        }
    }
    cin >> PQ8mfNt6x;
    if (YSFM0m9En == strlen (ilsWhG))
        cout << "0" << endl;
    else {
        int Wg5vXOmlsrAP;
        Wg5vXOmlsrAP = strlen (LJMSm258Iw);
        {
            do0W6Hiv7 = (1675 - 832) - (1601 - 758);
            for (; do0W6Hiv7 < Wg5vXOmlsrAP;) {
                cout << LJMSm258Iw[do0W6Hiv7];
                do0W6Hiv7 = do0W6Hiv7 + (751 - 750);
            }
        }
        cout << endl;
        tx6mVEb = Q61Ixf (S92oPbrODnpC, ilsWhG);
        ZPeYjoNB (tx6mVEb, PQ8mfNt6x);
    }
    return (138 - 138);
}

