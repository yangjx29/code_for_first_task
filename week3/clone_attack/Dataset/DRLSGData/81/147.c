int EQJH7lLGaICg (int uDa8uwFgJlR0, int jn19m4tiqK);

int EQJH7lLGaICg (int uDa8uwFgJlR0, int jn19m4tiqK) {
    int s [(725 - 720)] [(727 - 722)];
    int RpEkecDS;
    int fbXOjewL2IS;
    int Xc3Eq59D;
    if (uDa8uwFgJlR0 > (26 - 22) || jn19m4tiqK > (945 - 941)) {
        Xc3Eq59D = (419 - 419);
    }
    else {
        {
            fbXOjewL2IS = (672 - 672);
            while (fbXOjewL2IS < (392 - 387)) {
                RpEkecDS = s[uDa8uwFgJlR0][fbXOjewL2IS];
                s[uDa8uwFgJlR0][fbXOjewL2IS] = s[jn19m4tiqK][fbXOjewL2IS];
                s[jn19m4tiqK][fbXOjewL2IS] = RpEkecDS;
                fbXOjewL2IS++;
            }
        }
        Xc3Eq59D = (121 - 120);
    }
    return Xc3Eq59D;
}

int main () {
    int XluOXfCKmxo;
    int L27yEYWTuO;
    int RpEkecDS;
    int fbXOjewL2IS;
    int VtzocQpysbr;
    int uOVbwfth;
    int xD5KFUszbj [(254 - 249)] [(696 - 691)];
    {
        L27yEYWTuO = (915 - 915);
        while (L27yEYWTuO < (492 - 487)) {
            {
                XluOXfCKmxo = (380 - 380);
                while (XluOXfCKmxo < (142 - 137)) {
                    scanf ("%d", &xD5KFUszbj[L27yEYWTuO][XluOXfCKmxo]);
                    XluOXfCKmxo = XluOXfCKmxo +1;
                }
            }
            L27yEYWTuO = L27yEYWTuO +1;
        }
    }
    scanf ("%d%d", &uOVbwfth, &VtzocQpysbr);
    EQJH7lLGaICg (uOVbwfth, VtzocQpysbr);
    if (EQJH7lLGaICg (uOVbwfth, VtzocQpysbr) == (907 - 907)) {
        printf ("error");
    }
    else {
        {
            fbXOjewL2IS = (515 - 515);
            while (fbXOjewL2IS < (864 - 859)) {
                RpEkecDS = xD5KFUszbj[uOVbwfth][fbXOjewL2IS];
                xD5KFUszbj[uOVbwfth][fbXOjewL2IS] = xD5KFUszbj[VtzocQpysbr][fbXOjewL2IS];
                xD5KFUszbj[VtzocQpysbr][fbXOjewL2IS] = RpEkecDS;
                fbXOjewL2IS++;
            }
        }
        {
            L27yEYWTuO = (261 - 261);
            while (L27yEYWTuO < (795 - 790)) {
                {
                    XluOXfCKmxo = (567 - 567);
                    while (XluOXfCKmxo < (460 - 456)) {
                        printf ("%d ", xD5KFUszbj[L27yEYWTuO][XluOXfCKmxo]);
                        XluOXfCKmxo++;
                    }
                }
                printf ("%d\n", xD5KFUszbj[L27yEYWTuO][(556 - 552)]);
                L27yEYWTuO++;
            }
        }
    }
    return (80 - 80);
}

