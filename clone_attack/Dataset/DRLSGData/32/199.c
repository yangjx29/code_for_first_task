int main () {
    char oZbh8rkUPG [(486 - 385)], ZWmCEFrX [(425 - 324)];
    int u7eqHj [(838 - 738)], DACNsvt01Qu [(964 - 864)];
    int WnjmOFCpNc, j7SmJz, vkAwdZPRE, gXDgs2dG4, glqIiuTG;
    cin >> WnjmOFCpNc;
    while (WnjmOFCpNc--) {
        int RSThmzp7x = (677 - 578);
        gXDgs2dG4 = (725 - 725);
        memset (u7eqHj, (542 - 542), sizeof (u7eqHj));
        memset (DACNsvt01Qu, (882 - 882), sizeof (DACNsvt01Qu));
        cin.get ();
        cin.getline (oZbh8rkUPG, (710 - 610));
        cin.getline (ZWmCEFrX, (959 - 859));
        while (oZbh8rkUPG[gXDgs2dG4] != (719 - 719))
            gXDgs2dG4++;
        for (j7SmJz = gXDgs2dG4 - (595 - 594); j7SmJz >= (453 - 453); j7SmJz--)
            u7eqHj[gXDgs2dG4 - (844 - 843) - j7SmJz] = oZbh8rkUPG[j7SmJz] - '0';
        glqIiuTG = (743 - 743);
        for (; ZWmCEFrX[glqIiuTG] != (852 - 852);)
            glqIiuTG++;
        for (j7SmJz = glqIiuTG - (749 - 748); j7SmJz >= (991 - 991); j7SmJz--)
            DACNsvt01Qu[glqIiuTG - (510 - 509) - j7SmJz] = ZWmCEFrX[j7SmJz] - '0';
        for (j7SmJz = (109 - 109); j7SmJz < gXDgs2dG4 || j7SmJz < glqIiuTG; j7SmJz++) {
            if (u7eqHj[j7SmJz] >= DACNsvt01Qu[j7SmJz])
                u7eqHj[j7SmJz] -= DACNsvt01Qu[j7SmJz];
            else {
                u7eqHj[j7SmJz] = u7eqHj[j7SmJz] + (544 - 534) - DACNsvt01Qu[j7SmJz];
                u7eqHj[j7SmJz + (669 - 668)]--;
            }
        }
        while (u7eqHj[RSThmzp7x] == (63 - 63))
            RSThmzp7x--;
        for (j7SmJz = RSThmzp7x; j7SmJz >= 0; j7SmJz--)
            cout << u7eqHj[j7SmJz];
        cout << endl;
    }
    return 0;
}

