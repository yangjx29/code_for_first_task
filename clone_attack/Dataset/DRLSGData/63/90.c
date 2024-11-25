int main () {
    int YeuKMFctH, InMozc2iPS;
    int KveGipxoVd;
    int rEfLh0aztod;
    int WwUCYH [KveGipxoVd] [rEfLh0aztod];
    int ShwTsPWrJgSp, ci8VHkZBMUXO;
    int BokwdqY [ShwTsPWrJgSp] [ci8VHkZBMUXO];
    int mUTL6Y [KveGipxoVd] [ci8VHkZBMUXO];
    int fSYuTUPsN2m;
    cin >> KveGipxoVd >> rEfLh0aztod;
    {
        YeuKMFctH = (488 - 95) - (1367 - 974);
        while (YeuKMFctH <= KveGipxoVd -(239 - 238)) {
            {
                InMozc2iPS = (1298 - 752) - 546;
                while (rEfLh0aztod - (801 - 800) >= InMozc2iPS) {
                    int AUv4F5oPVj;
                    cin >> AUv4F5oPVj;
                    WwUCYH[YeuKMFctH][InMozc2iPS] = AUv4F5oPVj;
                    InMozc2iPS++;
                }
            }
            YeuKMFctH++;
        }
    }
    cin >> ShwTsPWrJgSp >> ci8VHkZBMUXO;
    {
        YeuKMFctH = (1310 - 770) - 540;
        while (YeuKMFctH <= ShwTsPWrJgSp -(801 - 800)) {
            {
                InMozc2iPS = (517 - 383) - (1058 - 924);
                while (InMozc2iPS <= ci8VHkZBMUXO - (835 - 834)) {
                    int AUv4F5oPVj;
                    cin >> AUv4F5oPVj;
                    BokwdqY[YeuKMFctH][InMozc2iPS] = AUv4F5oPVj;
                    InMozc2iPS++;
                }
            }
            YeuKMFctH++;
        }
    }
    {
        YeuKMFctH = (1638 - 690) - (1046 - 98);
        while (KveGipxoVd -(935 - 934) >= YeuKMFctH) {
            {
                InMozc2iPS = (1614 - 790) - 824;
                while (InMozc2iPS <= ci8VHkZBMUXO - (249 - 248)) {
                    mUTL6Y[YeuKMFctH][InMozc2iPS] = (661 - 661);
                    {
                        fSYuTUPsN2m = (658 - 658);
                        while (fSYuTUPsN2m <= rEfLh0aztod - (478 - 477)) {
                            mUTL6Y[YeuKMFctH][InMozc2iPS] = mUTL6Y[YeuKMFctH][InMozc2iPS] + WwUCYH[YeuKMFctH][fSYuTUPsN2m] * BokwdqY[fSYuTUPsN2m][InMozc2iPS];
                            fSYuTUPsN2m++;
                        }
                    }
                    InMozc2iPS++;
                }
            }
            YeuKMFctH++;
        }
    }
    {
        YeuKMFctH = (412 - 412);
        while (YeuKMFctH <= KveGipxoVd -(689 - 688)) {
            {
                InMozc2iPS = 0;
                while (InMozc2iPS <= ci8VHkZBMUXO - (798 - 796)) {
                    cout << mUTL6Y[YeuKMFctH][InMozc2iPS] << " ";
                    InMozc2iPS++;
                }
            }
            if (InMozc2iPS == ci8VHkZBMUXO - 1) {
                cout << mUTL6Y[YeuKMFctH][InMozc2iPS] << '\n';
            }
            YeuKMFctH++;
        }
    }
    return 0;
}

