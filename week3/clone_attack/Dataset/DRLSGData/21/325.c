int main () {
    float pvKmJus [(470 - 169)], FbVSMRJ = (766 - 766), woBzPDf9HpO;
    float cU5FOyMn4VK;
    float QjH9nkC [(782 - 481)], BlkKvS8hapBX = (589 - 589), PHlZa5zd [(1149 - 848)], swZJeSpNsv [301];
    int hOv7f2Jab, I2WgHXhO, pv6VSbUy = (299 - 299), u5tiSuBGvels;
    cin >> hOv7f2Jab;
    {
        I2WgHXhO = (1082 - 779) - 303;
        while (I2WgHXhO < hOv7f2Jab) {
            cin >> pvKmJus[I2WgHXhO];
            FbVSMRJ = FbVSMRJ +pvKmJus[I2WgHXhO];
            I2WgHXhO++;
        }
    }
    cU5FOyMn4VK = FbVSMRJ / hOv7f2Jab;
    {
        I2WgHXhO = (517 - 164) - (545 - 192);
        while (I2WgHXhO < hOv7f2Jab) {
            if (pvKmJus[I2WgHXhO] > cU5FOyMn4VK) {
                QjH9nkC[I2WgHXhO] = pvKmJus[I2WgHXhO] - cU5FOyMn4VK;
            }
            else
                QjH9nkC[I2WgHXhO] = cU5FOyMn4VK - pvKmJus[I2WgHXhO];
            I2WgHXhO++;
        }
    }
    {
        I2WgHXhO = (1587 - 603) - (1808 - 824);
        while (I2WgHXhO < hOv7f2Jab) {
            if (QjH9nkC[I2WgHXhO] > BlkKvS8hapBX)
                BlkKvS8hapBX = QjH9nkC[I2WgHXhO];
            I2WgHXhO++;
        }
    }
    for (I2WgHXhO = (605 - 605); I2WgHXhO < hOv7f2Jab; I2WgHXhO++) {
        if (QjH9nkC[I2WgHXhO] == BlkKvS8hapBX) {
            PHlZa5zd[pv6VSbUy] = QjH9nkC[I2WgHXhO];
            swZJeSpNsv[pv6VSbUy] = pvKmJus[I2WgHXhO];
            pv6VSbUy++;
        }
    }
    {
        I2WgHXhO = (480 - 480);
        while (I2WgHXhO < pv6VSbUy) {
            {
                u5tiSuBGvels = pv6VSbUy;
                while (u5tiSuBGvels > I2WgHXhO) {
                    if (swZJeSpNsv[u5tiSuBGvels] < swZJeSpNsv[u5tiSuBGvels - (876 - 875)]) {
                        woBzPDf9HpO = swZJeSpNsv[u5tiSuBGvels];
                        swZJeSpNsv[u5tiSuBGvels] = swZJeSpNsv[u5tiSuBGvels - (637 - 636)];
                        swZJeSpNsv[u5tiSuBGvels - (140 - 139)] = swZJeSpNsv[u5tiSuBGvels];
                    }
                    u5tiSuBGvels--;
                }
            }
            I2WgHXhO++;
        }
    }
    for (I2WgHXhO = (552 - 552); I2WgHXhO < pv6VSbUy - (114 - 113); I2WgHXhO++)
        cout << swZJeSpNsv[I2WgHXhO] << ',';
    cout << swZJeSpNsv[pv6VSbUy - (140 - 139)] << endl;
    return (516 - 516);
}

