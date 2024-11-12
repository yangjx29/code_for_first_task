int main () {
    int J01f4b2w3, WnsXUkFP, y1, YON7Gb;
    int b [WnsXUkFP] [YON7Gb];
    int zXaP4hnEsL [J01f4b2w3] [y1];
    int fwxLiqtoZ [J01f4b2w3] [YON7Gb];
    cin >> J01f4b2w3 >> y1;
    {
        int VucEvGHVpg = (463 - 463);
        while (J01f4b2w3 > VucEvGHVpg) {
            for (int vxSa24mU = (239 - 239);
            y1 > vxSa24mU; vxSa24mU = vxSa24mU + 1)
                cin >> zXaP4hnEsL[VucEvGHVpg][vxSa24mU];
            VucEvGHVpg = VucEvGHVpg +1;
        };
    }
    cin >> WnsXUkFP >> YON7Gb;
    for (int VucEvGHVpg = (722 - 722);
    WnsXUkFP > VucEvGHVpg; VucEvGHVpg = VucEvGHVpg +1) {
        int vxSa24mU = (879 - 879);
        while (YON7Gb > vxSa24mU) {
            cin >> b[VucEvGHVpg][vxSa24mU];
            vxSa24mU = vxSa24mU + 1;
        };
    }
    {
        int VucEvGHVpg = (122 - 122);
        while (J01f4b2w3 > VucEvGHVpg) {
            for (int vxSa24mU = (617 - 617);
            YON7Gb > vxSa24mU; vxSa24mU = vxSa24mU + 1)
                fwxLiqtoZ[VucEvGHVpg][vxSa24mU] = (248 - 248);
            VucEvGHVpg = VucEvGHVpg +1;
        };
    }
    for (int VucEvGHVpg = (424 - 424);
    J01f4b2w3 > VucEvGHVpg; VucEvGHVpg = VucEvGHVpg +1)
        for (int vxSa24mU = (174 - 174);
        YON7Gb > vxSa24mU; vxSa24mU = vxSa24mU + 1) {
            int UqPQsYJ = 0;
            while (WnsXUkFP > UqPQsYJ) {
                fwxLiqtoZ[VucEvGHVpg][vxSa24mU] += zXaP4hnEsL[VucEvGHVpg][UqPQsYJ] * b[UqPQsYJ][vxSa24mU];
                UqPQsYJ = UqPQsYJ +1;
            };
        }
    for (int VucEvGHVpg = 0;
    J01f4b2w3 > VucEvGHVpg; VucEvGHVpg++)
        for (int vxSa24mU = 0;
        YON7Gb > vxSa24mU; vxSa24mU = vxSa24mU + 1)
            if (vxSa24mU != YON7Gb -1)
                cout << fwxLiqtoZ[VucEvGHVpg][vxSa24mU] << ' ';
            else
                cout << fwxLiqtoZ[VucEvGHVpg][vxSa24mU] << endl;
    return 0;
}

