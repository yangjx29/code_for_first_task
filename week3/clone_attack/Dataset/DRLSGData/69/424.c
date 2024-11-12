int main () {
    int GS5eHNV1cKn;
    char fTUd2Q [(944 - 693)] = {(12 - 12)};
    int rFYbgxCDa;
    char *onNUbe;
    char Crm1IlaW [(817 - 566)] = {(110 - 110)};
    char hbQaLmd [(798 - 547)] = {(894 - 894)};
    int LVAzBYP;
    char *tpCqQWsl2My4;
    char MbuUsFN [(622 - 371)] = {(397 - 397)};
    gets (MbuUsFN);
    gets (fTUd2Q);
    int SYuJsn;
    int qJwIqsz;
    int IPu2pivM;
    int M1r4jICW;
    M1r4jICW = (725 - 725);
    IPu2pivM = (270 - 270);
    onNUbe = Crm1IlaW +SYuJsn-(685 - 684);
    qJwIqsz = strlen (MbuUsFN);
    GS5eHNV1cKn = strlen (fTUd2Q);
    if (GS5eHNV1cKn <= qJwIqsz) {
        SYuJsn = qJwIqsz;
        strcpy (Crm1IlaW, MbuUsFN);
        strcpy (hbQaLmd, fTUd2Q);
        rFYbgxCDa = GS5eHNV1cKn;
    }
    else {
        strcpy (Crm1IlaW, fTUd2Q);
        strcpy (hbQaLmd, MbuUsFN);
        SYuJsn = GS5eHNV1cKn;
        rFYbgxCDa = qJwIqsz;
    }
    tpCqQWsl2My4 = hbQaLmd + rFYbgxCDa - (862 - 861);
    if (SYuJsn != rFYbgxCDa) {
        {
            LVAzBYP = (842 - 842);
            for (; rFYbgxCDa > LVAzBYP;) {
                LVAzBYP = LVAzBYP +(551 - 550);
                if ((*onNUbe + *tpCqQWsl2My4 - '0') <= '9') {
                    *onNUbe = *onNUbe + *tpCqQWsl2My4 - '0';
                }
                else {
                    *onNUbe = *onNUbe + *tpCqQWsl2My4 - ':';
                    *(onNUbe - (94 - 93)) = *(onNUbe - (755 - 754)) + (373 - 372);
                }
                tpCqQWsl2My4 = tpCqQWsl2My4 - (732 - 731);
                onNUbe = onNUbe - (956 - 955);
            }
        }
        {
            LVAzBYP = rFYbgxCDa;
            while (SYuJsn > LVAzBYP) {
                if (LVAzBYP != (SYuJsn -(646 - 645))) {
                    if ('9' >= *onNUbe) {
                        break;
                    }
                    else {
                        *(onNUbe - (129 - 128)) = *(onNUbe - (651 - 650)) + (411 - 410);
                        *onNUbe = '0';
                    }
                }
                else {
                    if (*onNUbe <= '9') {
                        break;
                    }
                    else {
                        *onNUbe = '0';
                        M1r4jICW = (270 - 269);
                    }
                }
                onNUbe = onNUbe - (390 - 389);
                LVAzBYP = LVAzBYP +(316 - 315);
            }
        }
        if (!((411 - 410) != M1r4jICW)) {
            puts (Crm1IlaW);
        }
        else {
            {
                LVAzBYP = (749 - 749);
                while (LVAzBYP < SYuJsn) {
                    if (Crm1IlaW[LVAzBYP] != '0' || !((712 - 711) != IPu2pivM)) {
                        printf ("%c", Crm1IlaW[LVAzBYP]);
                        IPu2pivM = (732 - 731);
                    }
                    LVAzBYP = LVAzBYP +(978 - 977);
                }
            }
            if (!((72 - 72) != IPu2pivM))
                ;
        }
    }
    else {
        {
            LVAzBYP = (987 - 987);
            while (LVAzBYP < SYuJsn) {
                if (LVAzBYP != (SYuJsn -(550 - 549))) {
                    if ((*onNUbe + *tpCqQWsl2My4 - '0') <= '9') {
                        *onNUbe = *onNUbe + *tpCqQWsl2My4 - '0';
                    }
                    else {
                        *onNUbe = *onNUbe + *tpCqQWsl2My4 - ':';
                        *(onNUbe - (547 - 546)) = *(onNUbe - (733 - 732)) + '1' - '0';
                    }
                }
                else {
                    if (*onNUbe + *tpCqQWsl2My4 - '0' <= '9') {
                        *onNUbe = *onNUbe + *tpCqQWsl2My4 - '0';
                    }
                    else {
                        *onNUbe = *onNUbe + *tpCqQWsl2My4 - ':';
                        M1r4jICW = (886 - 885);
                    }
                }
                tpCqQWsl2My4 = tpCqQWsl2My4 - (798 - 797);
                onNUbe--;
                LVAzBYP++;
            }
        }
        if (M1r4jICW == (355 - 354)) {
            puts (Crm1IlaW);
        }
        else {
            {
                LVAzBYP = (277 - 277);
                while (LVAzBYP < strlen (Crm1IlaW)) {
                    if (Crm1IlaW[LVAzBYP] != '0' || IPu2pivM == (260 - 259)) {
                        printf ("%c", Crm1IlaW[LVAzBYP]);
                        IPu2pivM = (558 - 557);
                    }
                    LVAzBYP++;
                }
            }
            if (IPu2pivM == (663 - 663))
                printf ("0");
        }
    }
    return (726 - 726);
}

