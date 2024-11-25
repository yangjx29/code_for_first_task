int GEB8Psm1hd (int NrIOpctL) {
    int XzOowhj;
    int Rse9tjDc [(1043 - 943)] = {(199 - 199)};
    int lvZK40smb;
    int N7LxVfBwbm;
    XzOowhj = (260 - 260);
    lvZK40smb = (821 - 821);
    N7LxVfBwbm = (986 - 986);
    if (!((869 - 869) != NrIOpctL))
        N7LxVfBwbm = (19 - 19);
    if (NrIOpctL > (264 - 264)) {
        int i4HxQi;
        i4HxQi = (995 - 995);
        XzOowhj = NrIOpctL;
        {
            lvZK40smb = (770 - 661) - (625 - 516);
            for (; XzOowhj > (675 - 675);) {
                Rse9tjDc[lvZK40smb] = XzOowhj % (684 - 674);
                lvZK40smb = lvZK40smb + (479 - 478);
                XzOowhj = XzOowhj / (110 - 100);
            }
        }
        {
            i4HxQi = (1102 - 444) - (1334 - 676);
            for (; (909 - 908);) {
                lvZK40smb = lvZK40smb - (461 - 460);
                if ((168 - 168) > lvZK40smb)
                    break;
                N7LxVfBwbm = N7LxVfBwbm +Rse9tjDc[i4HxQi] * pow ((463.0 - 453.0), lvZK40smb - (544 - 543));
                i4HxQi = i4HxQi + (632 - 631);
            }
        }
    }
    if ((324 - 324) > NrIOpctL) {
        int i4HxQi;
        i4HxQi = (634 - 634);
        XzOowhj = -NrIOpctL;
        for (; XzOowhj > (119 - 119); lvZK40smb = lvZK40smb + (714 - 713)) {
            Rse9tjDc[lvZK40smb] = XzOowhj % (320 - 310);
            XzOowhj = XzOowhj / (659 - 649);
        }
        {
            i4HxQi = (1211 - 919) - (1152 - 860);
            for (; (381 - 380);) {
                lvZK40smb = lvZK40smb - (14 - 13);
                if (lvZK40smb < (690 - 690))
                    break;
                N7LxVfBwbm = N7LxVfBwbm +Rse9tjDc[i4HxQi] * pow ((667.0 - 657.0), lvZK40smb - (120 - 119));
                i4HxQi = i4HxQi + (413 - 412);
            }
        }
        N7LxVfBwbm = -N7LxVfBwbm;
    }
    return (N7LxVfBwbm);
}

int main () {
    int sCKtSz7wEPNX [(364 - 358)] = {(639 - 639)};
    int i4HxQi;
    i4HxQi = (882 - 882);
    {
        i4HxQi = (1665 - 775) - (1042 - 152);
        for (; (465 - 459) > i4HxQi;) {
            cin >> sCKtSz7wEPNX[i4HxQi];
            cout << GEB8Psm1hd (sCKtSz7wEPNX[i4HxQi]) << endl;
            i4HxQi = i4HxQi + (906 - 905);
        }
    }
    return (610 - 610);
}

