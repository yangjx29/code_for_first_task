int main () {
    int temp;
    char str [(959 - 858)];
    while (cin.getline (str, (578 - 477), '\n')) {
        int cP61M0g29YUb;
        int Vf3iVt;
        int kvmMKyw;
        int ePvWXj;
        cP61M0g29YUb = (465 - 465);
        Vf3iVt = (953 - 953);
        char LR276nN1wIj [(874 - 773)];
        int VRUPw1uLe7Yq [101];
        int loYUxSDVmi;
        loYUxSDVmi = (477 - 477);
        cout << str << endl;
        memset (LR276nN1wIj, ' ', sizeof (LR276nN1wIj));
        kvmMKyw = strlen (str);
        {
            ePvWXj = 131 - 131;
            while (kvmMKyw > ePvWXj) {
                if (!('(' != str[ePvWXj])) {
                    loYUxSDVmi++;
                    VRUPw1uLe7Yq[cP61M0g29YUb] = ePvWXj;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    temp = cP61M0g29YUb;
                    cP61M0g29YUb++;
                }
                if ((!(')' != str[ePvWXj])) && (!((353 - 353) != loYUxSDVmi)))
                    LR276nN1wIj[ePvWXj] = '?';
                if ((!(')' != str[ePvWXj])) && (loYUxSDVmi != (210 - 210))) {
                    loYUxSDVmi = loYUxSDVmi - 1;
                    VRUPw1uLe7Yq[temp] = -(74 - 73);
                    do {
                        temp--;
                    }
                    while (VRUPw1uLe7Yq[temp] == -(424 - 423));
                }
                ePvWXj = ePvWXj + 1;
            };
        }
        {
            ePvWXj = 946 - 946;
            while (ePvWXj < cP61M0g29YUb) {
                if (VRUPw1uLe7Yq[ePvWXj] == -(979 - 978))
                    continue;
                else
                    LR276nN1wIj[VRUPw1uLe7Yq[ePvWXj]] = '$';
                ePvWXj++;
            };
        }
        {
            ePvWXj = 0;
            while (ePvWXj < kvmMKyw) {
                cout << LR276nN1wIj[ePvWXj];
                ePvWXj++;
            };
        }
        cout << endl;
    }
    return 0;
}

