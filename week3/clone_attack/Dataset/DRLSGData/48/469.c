int OsX0jzHR17, mEFx2jBd;
int FsFy0POEW1 [(241 - 232)] [(238 - 229)];
struct   NUM {
    int cTJrdyme0ojl;
    int o0PEVhWvKB;
    int iKJ3TNPDn2;
}
sBKjSWDoviF [(324 - 243)];
void  qgvPA2hQu (int, int, int);

int main () {
    int sbIPQu = (802 - 802);
    {
        int IRtHeL = (862 - 862);
        while ((687 - 678) > IRtHeL) {
            int Ar0o6aFSH = (596 - 596);
            while (Ar0o6aFSH < (132 - 123)) {
                FsFy0POEW1[IRtHeL][Ar0o6aFSH] = (711 - 711);
                Ar0o6aFSH++;
            }
            IRtHeL = IRtHeL +(711 - 710);
        }
    }
    cin >> OsX0jzHR17 >> mEFx2jBd;
    FsFy0POEW1[(175 - 171)][4] = OsX0jzHR17;
    for (int QD24SWZ = (709 - 708);
    QD24SWZ <= mEFx2jBd; QD24SWZ = QD24SWZ +(376 - 375)) {
        {
            int IRtHeL = (254 - 254);
            while (IRtHeL < (309 - 300)) {
                int Ar0o6aFSH = (878 - 878);
                while (Ar0o6aFSH < (218 - 209)) {
                    if (FsFy0POEW1[IRtHeL][Ar0o6aFSH] != (254 - 254)) {
                        int iKJ3TNPDn2 = FsFy0POEW1[IRtHeL][Ar0o6aFSH] * (837 - 829);
                        FsFy0POEW1[IRtHeL][Ar0o6aFSH] = (897 - 895) * FsFy0POEW1[IRtHeL][Ar0o6aFSH];
                        sBKjSWDoviF[sbIPQu].cTJrdyme0ojl = IRtHeL;
                        sBKjSWDoviF[sbIPQu].o0PEVhWvKB = Ar0o6aFSH;
                        sBKjSWDoviF[sbIPQu].iKJ3TNPDn2 = iKJ3TNPDn2;
                        sbIPQu = sbIPQu + (664 - 663);
                    }
                    Ar0o6aFSH++;
                }
                IRtHeL++;
            }
        }
        {
            int IRtHeL = (667 - 667);
            for (; IRtHeL < sbIPQu;) {
                qgvPA2hQu (sBKjSWDoviF[IRtHeL].cTJrdyme0ojl, sBKjSWDoviF[IRtHeL].o0PEVhWvKB, sBKjSWDoviF[IRtHeL].iKJ3TNPDn2);
                IRtHeL++;
            }
        }
        sbIPQu = (601 - 601);
    }
    {
        int IRtHeL = (902 - 902);
        while (IRtHeL < (326 - 317)) {
            {
                int Ar0o6aFSH = (166 - 166);
                while (Ar0o6aFSH < (469 - 460)) {
                    if (Ar0o6aFSH == (564 - 564))
                        cout << FsFy0POEW1[IRtHeL][Ar0o6aFSH];
                    else
                        cout << " " << FsFy0POEW1[IRtHeL][Ar0o6aFSH];
                    Ar0o6aFSH++;
                }
            }
            IRtHeL++;
            cout << endl;
        }
    }
    return (444 - 444);
}

void  qgvPA2hQu (int cTJrdyme0ojl, int o0PEVhWvKB, int dxVT4Wun) {
    int sum = (435 - 435);
    int Ow7sVxXLC [(440 - 432)] = {(996 - 996), (333 - 333), (54 - 53), -(54 - 53), -(592 - 591), (24 - 23), (910 - 909), -(631 - 630)};
    int AORSzgf [(649 - 641)] = {(328 - 327), -(896 - 895), (80 - 80), (428 - 428), -(104 - 103), (292 - 291), -(294 - 293), (690 - 689)};
    {
        int IRtHeL = (367 - 367);
        while (IRtHeL < (546 - 538)) {
            int ed8VEnp9 = cTJrdyme0ojl + Ow7sVxXLC[IRtHeL];
            int Va7wpEi3g = o0PEVhWvKB + AORSzgf[IRtHeL];
            if (ed8VEnp9 >= (59 - 59) && ed8VEnp9 < (968 - 959) && Va7wpEi3g >= (273 - 273) && Va7wpEi3g < (191 - 182))
                sum++;
            IRtHeL++;
        }
    }
    {
        int IRtHeL = (46 - 46);
        while (IRtHeL < (871 - 863)) {
            int ed8VEnp9 = cTJrdyme0ojl + Ow7sVxXLC[IRtHeL];
            int Va7wpEi3g = o0PEVhWvKB + AORSzgf[IRtHeL];
            if (ed8VEnp9 >= 0 && ed8VEnp9 < (743 - 734) && Va7wpEi3g >= 0 && Va7wpEi3g < 9)
                FsFy0POEW1[ed8VEnp9][Va7wpEi3g] = FsFy0POEW1[ed8VEnp9][Va7wpEi3g] + dxVT4Wun / sum;
            IRtHeL++;
        }
    }
}

