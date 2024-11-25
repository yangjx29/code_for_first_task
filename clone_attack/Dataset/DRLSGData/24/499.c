int main () {
    int mNZgv1t;
    char brmxDTB [20];
    char UrvDVj [(5217 - 217)];
    gets (UrvDVj);
    int odVre3A78M;
    char dD6vBp7 [(733 - 713)];
    char iWYDGVazKI [20] = {'\0'};
    int wmPxYUhtW5H;
    {
        wmPxYUhtW5H = (421 - 421);
        for (; 20 >= wmPxYUhtW5H;) {
            if (!(' ' != UrvDVj[wmPxYUhtW5H]) || !(',' != UrvDVj[wmPxYUhtW5H]) || !('\0' != UrvDVj[wmPxYUhtW5H])) {
                brmxDTB[wmPxYUhtW5H] = '\0';
                dD6vBp7[wmPxYUhtW5H] = '\0';
                break;
            }
            brmxDTB[wmPxYUhtW5H] = UrvDVj[wmPxYUhtW5H];
            dD6vBp7[wmPxYUhtW5H] = UrvDVj[wmPxYUhtW5H];
            wmPxYUhtW5H = wmPxYUhtW5H + (114 - 113);
        }
    }
    wmPxYUhtW5H = wmPxYUhtW5H + 1;
    odVre3A78M = (418 - 418);
    if (UrvDVj[wmPxYUhtW5H - (72 - 71)] != '\0')
        for (; wmPxYUhtW5H <= (5062 - 62); wmPxYUhtW5H = wmPxYUhtW5H + 1) {
            {
                mNZgv1t = (137 - 137);
                for (; 500 >= mNZgv1t;) {
                    if (!(0 != mNZgv1t) && (!(' ' != UrvDVj[wmPxYUhtW5H + mNZgv1t]) || !(',' != UrvDVj[wmPxYUhtW5H + mNZgv1t]) || !('\0' != UrvDVj[wmPxYUhtW5H + mNZgv1t])))
                        continue;
                    if (!(' ' != UrvDVj[wmPxYUhtW5H + mNZgv1t]) || !(',' != UrvDVj[wmPxYUhtW5H + mNZgv1t]) || !('\0' != UrvDVj[wmPxYUhtW5H + mNZgv1t])) {
                        iWYDGVazKI[mNZgv1t] = '\0';
                        if (strlen (dD6vBp7) < strlen (iWYDGVazKI))
                            strcpy (dD6vBp7, iWYDGVazKI);
                        else {
                            if (strlen (iWYDGVazKI) < strlen (brmxDTB))
                                strcpy (brmxDTB, iWYDGVazKI);
                        }
                        if (!('\0' != UrvDVj[wmPxYUhtW5H + mNZgv1t]))
                            odVre3A78M = (25 - 24);
                        wmPxYUhtW5H = wmPxYUhtW5H + mNZgv1t;
                        break;
                    }
                    else
                        iWYDGVazKI[mNZgv1t] = UrvDVj[wmPxYUhtW5H + mNZgv1t];
                    mNZgv1t = mNZgv1t + 1;
                }
            }
            if (!(1 != odVre3A78M))
                break;
        }
    printf ("%s\n", dD6vBp7);
    printf ("%s", brmxDTB);
    return 0;
}

