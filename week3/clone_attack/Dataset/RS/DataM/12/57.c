int main () {
    int ZSCKIVHgAbo;
    int rdV6gZyT;
    int u73GUSk [(78 - 63)];
    int irUniZ;
    ZSCKIVHgAbo = 0;
    rdV6gZyT = 0;
    for (; cin >> irUniZ;) {
        if (irUniZ == -1)
            break;
        else {
            if (irUniZ == 0) {
                {
                    int vBAQuDv9IV = 0;
                    while (vBAQuDv9IV < ZSCKIVHgAbo) {
                        {
                            int cadqF3 = vBAQuDv9IV;
                            while (cadqF3 < ZSCKIVHgAbo) {
                                if (u73GUSk[vBAQuDv9IV] == 2 * u73GUSk[cadqF3] || u73GUSk[cadqF3] == 2 * u73GUSk[vBAQuDv9IV])
                                    rdV6gZyT++;
                                cadqF3 = cadqF3 + 1;
                            };
                        }
                        vBAQuDv9IV = vBAQuDv9IV + 1;
                    };
                }
                cout << rdV6gZyT << endl;
                ZSCKIVHgAbo = 0;
                rdV6gZyT = 0;
            }
            else {
                u73GUSk[ZSCKIVHgAbo] = irUniZ;
                ZSCKIVHgAbo = ZSCKIVHgAbo +1;
            };
        };
    }
    return 0;
}

