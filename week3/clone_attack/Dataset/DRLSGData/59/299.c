int main () {
    int i, QkKRIPNzpm8s;
    int IYNo6sAk8O59, NXxf2cU;
    char nbw09Y [110] [110] = {'\0'};
    int XEj61HJ;
    int UfNjqlb = 0;
    cin >> IYNo6sAk8O59;
    cin.get ();
    {
        i = 1;
        while (IYNo6sAk8O59 >= i) {
            cin.getline (nbw09Y[i], 100, '\n');
            i = i + 1;
        }
    }
    {
        i = IYNo6sAk8O59;
        for (; i > 0;) {
            {
                QkKRIPNzpm8s = IYNo6sAk8O59;
                for (; QkKRIPNzpm8s > 0;) {
                    nbw09Y[i][QkKRIPNzpm8s] = nbw09Y[i][QkKRIPNzpm8s -1];
                    QkKRIPNzpm8s = QkKRIPNzpm8s -1;
                }
            }
            nbw09Y[i][0] = '\0';
            i = i - 1;
        }
    }
    cin >> NXxf2cU;
    {
        XEj61HJ = 2;
        for (; XEj61HJ <= NXxf2cU;) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            {
                i = 1;
                for (; i <= IYNo6sAk8O59;) {
                    {
                        QkKRIPNzpm8s = 1;
                        for (; QkKRIPNzpm8s <= IYNo6sAk8O59;) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (nbw09Y[i][QkKRIPNzpm8s] == '@') {
                                if (!('.' != nbw09Y[i - 1][QkKRIPNzpm8s]))
                                    nbw09Y[i - 1][QkKRIPNzpm8s] = ',';
                                if (nbw09Y[i + 1][QkKRIPNzpm8s] == '.')
                                    nbw09Y[i + 1][QkKRIPNzpm8s] = ',';
                                if (nbw09Y[i][QkKRIPNzpm8s -1] == '.')
                                    nbw09Y[i][QkKRIPNzpm8s -1] = ',';
                                if (nbw09Y[i][QkKRIPNzpm8s +1] == '.')
                                    nbw09Y[i][QkKRIPNzpm8s +1] = ',';
                            }
                            QkKRIPNzpm8s = QkKRIPNzpm8s +1;
                        }
                    }
                    i = i + 1;
                }
            }
            XEj61HJ = XEj61HJ +1;
            {
                i = 1;
                for (; i <= IYNo6sAk8O59;) {
                    {
                        QkKRIPNzpm8s = 1;
                        for (; QkKRIPNzpm8s <= IYNo6sAk8O59;) {
                            if (nbw09Y[i][QkKRIPNzpm8s] == ',')
                                nbw09Y[i][QkKRIPNzpm8s] = '@';
                            QkKRIPNzpm8s = QkKRIPNzpm8s +1;
                        }
                    }
                    i = i + 1;
                }
            }
        }
    }
    {
        i = 1;
        for (; i <= IYNo6sAk8O59;) {
            {
                QkKRIPNzpm8s = 1;
                for (; QkKRIPNzpm8s <= IYNo6sAk8O59;) {
                    if (nbw09Y[i][QkKRIPNzpm8s] == '@')
                        UfNjqlb = UfNjqlb +1;
                    QkKRIPNzpm8s = QkKRIPNzpm8s +1;
                }
            }
            i = i + 1;
        }
    }
    cout << UfNjqlb;
    return 0;
}

