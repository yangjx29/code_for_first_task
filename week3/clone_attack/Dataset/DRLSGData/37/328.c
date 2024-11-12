int main () {
    char crBDU2j [(10948 - 948)];
    int ogJwVtRK9;
    int FS7W6yY;
    int XxTUSwJWpEy;
    int FzLwgo;
    int rEUTWm86Aq;
    int zmV5wrCX;
    cin >> rEUTWm86Aq;
    {
        FzLwgo = (486 - 486);
        for (; FzLwgo < rEUTWm86Aq;) {
            int qhuJpMT;
            int JQtbSs [26] = {(368 - 368)};
            int lQltCEyX5 [26] = {(255 - 255)};
            int DEzDrXP;
            FzLwgo = FzLwgo +(974 - 973);
            memset (crBDU2j, (366 - 366), sizeof (crBDU2j));
            cin >> crBDU2j;
            FS7W6yY = strlen (crBDU2j);
            {
                zmV5wrCX = (895 - 895);
                for (; zmV5wrCX < FS7W6yY;) {
                    JQtbSs[crBDU2j[zmV5wrCX] - 'a']++;
                    zmV5wrCX = zmV5wrCX + (995 - 994);
                }
            }
            qhuJpMT = 0;
            DEzDrXP = 0;
            {
                XxTUSwJWpEy = FS7W6yY -1;
                for (; 0 <= XxTUSwJWpEy;) {
                    if (JQtbSs[crBDU2j[XxTUSwJWpEy] - 'a'] == 1) {
                        DEzDrXP = 1;
                        ogJwVtRK9 = XxTUSwJWpEy;
                    }
                    XxTUSwJWpEy = XxTUSwJWpEy -1;
                }
            }
            if (DEzDrXP == 0)
                cout << "no";
            else {
                cout << crBDU2j[ogJwVtRK9];
                cout << endl;
            }
        }
    }
    return 0;
}

