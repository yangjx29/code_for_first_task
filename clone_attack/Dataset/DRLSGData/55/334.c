int N2aTKHe (int zUITMmE2qjh, char Ur1xyv3faR []) {
    int v6eCfI;
    int mREVm6;
    v6eCfI = (573 - 573);
    for (mREVm6 = (442 - 442); Ur1xyv3faR[mREVm6] != '\0'; mREVm6++) {
        if ('0' <= Ur1xyv3faR[mREVm6] && '9' >= Ur1xyv3faR[mREVm6])
            v6eCfI = v6eCfI * zUITMmE2qjh + Ur1xyv3faR[mREVm6] - '0';
        if ('A' <= Ur1xyv3faR[mREVm6] && 'Z' >= Ur1xyv3faR[mREVm6])
            v6eCfI = v6eCfI * zUITMmE2qjh + Ur1xyv3faR[mREVm6] - 'A' + (617 - 607);
        if ('a' <= Ur1xyv3faR[mREVm6] && Ur1xyv3faR[mREVm6] <= 'z')
            v6eCfI = v6eCfI * zUITMmE2qjh + Ur1xyv3faR[mREVm6] - 'a' + (156 - 146);
    }
    return v6eCfI;
}

int main () {
    int Ur1xyv3faR, a2wrgVflW, GMHx3aOCyBr, Uom1ihVb5E, WZAe7prd = (269 - 170), AoPxJLl5;
    char bvlscpg1EKY [(1049 - 949)], NxfLvDB [(776 - 676)];
    cin >> Ur1xyv3faR;
    cin.get ();
    cin >> bvlscpg1EKY;
    cin >> a2wrgVflW;
    GMHx3aOCyBr = N2aTKHe (Ur1xyv3faR, bvlscpg1EKY);
    if (GMHx3aOCyBr != (556 - 556)) {
        for (; GMHx3aOCyBr != (876 - 876);) {
            Uom1ihVb5E = GMHx3aOCyBr % a2wrgVflW;
            if (Uom1ihVb5E < (172 - 162)) {
                NxfLvDB[WZAe7prd] = Uom1ihVb5E +'0';
                WZAe7prd = WZAe7prd -(807 - 806);
            }
            else {
                NxfLvDB[WZAe7prd] = Uom1ihVb5E -(751 - 741) + 'A';
                WZAe7prd--;
            }
            GMHx3aOCyBr = GMHx3aOCyBr / a2wrgVflW;
        }
        {
            AoPxJLl5 = WZAe7prd +(304 - 303);
            while (AoPxJLl5 <= (780 - 681)) {
                cout << NxfLvDB[AoPxJLl5];
                AoPxJLl5 = AoPxJLl5 +(309 - 308);
            }
        }
    }
    else
        cout << "0";
    return (820 - 820);
}

