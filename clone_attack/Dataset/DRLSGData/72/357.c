int main () {
    int IHoI8y, mGoyC6Tl;
    int ssEWfG [21] [21];
    cin >> IHoI8y;
    cin >> mGoyC6Tl;
    {
        int eZYDAjMp;
        eZYDAjMp = 0;
        for (; eZYDAjMp < IHoI8y;) {
            {
                int SY6EJMDOwL;
                SY6EJMDOwL = 0;
                for (; SY6EJMDOwL < mGoyC6Tl;) {
                    cin >> ssEWfG[eZYDAjMp][SY6EJMDOwL];
                    SY6EJMDOwL = SY6EJMDOwL +1;
                }
            }
            eZYDAjMp++;
        }
    }
    if (ssEWfG[1][0] <= ssEWfG[0][0] && ssEWfG[0][0] >= ssEWfG[0][1])
        cout << 0 << ' ' << 0 << endl;
    {
        int MQZ3IY8F27sW = 1;
        for (; mGoyC6Tl - 1 > MQZ3IY8F27sW;) {
            if (ssEWfG[0][MQZ3IY8F27sW -1] <= ssEWfG[0][MQZ3IY8F27sW] && ssEWfG[0][MQZ3IY8F27sW] >= ssEWfG[0][MQZ3IY8F27sW +1] && ssEWfG[1][MQZ3IY8F27sW] <= ssEWfG[0][MQZ3IY8F27sW])
                cout << 0 << ' ' << MQZ3IY8F27sW << endl;
            MQZ3IY8F27sW = MQZ3IY8F27sW +1;
        }
    }
    if (ssEWfG[0][mGoyC6Tl - 1] >= ssEWfG[0][mGoyC6Tl - 2] && ssEWfG[1][mGoyC6Tl - 1] <= ssEWfG[0][mGoyC6Tl - 1])
        cout << 0 << ' ' << mGoyC6Tl - 1 << endl;
    {
        int eZYDAjMp = 1;
        for (; eZYDAjMp < IHoI8y -1;) {
            {
                int SY6EJMDOwL = 0;
                for (; SY6EJMDOwL < mGoyC6Tl;) {
                    if (!(0 != SY6EJMDOwL)) {
                        if (ssEWfG[eZYDAjMp][SY6EJMDOwL] >= ssEWfG[eZYDAjMp][SY6EJMDOwL +1] && ssEWfG[eZYDAjMp + 1][SY6EJMDOwL] <= ssEWfG[eZYDAjMp][SY6EJMDOwL] && ssEWfG[eZYDAjMp - 1][SY6EJMDOwL] <= ssEWfG[eZYDAjMp][SY6EJMDOwL])
                            cout << eZYDAjMp << ' ' << SY6EJMDOwL << endl;
                    }
                    else if (SY6EJMDOwL == mGoyC6Tl - 1) {
                        if (ssEWfG[eZYDAjMp][SY6EJMDOwL -1] <= ssEWfG[eZYDAjMp][SY6EJMDOwL] && ssEWfG[eZYDAjMp][SY6EJMDOwL] >= ssEWfG[eZYDAjMp + 1][SY6EJMDOwL] && ssEWfG[eZYDAjMp][SY6EJMDOwL] >= ssEWfG[eZYDAjMp - 1][SY6EJMDOwL])
                            cout << eZYDAjMp << ' ' << SY6EJMDOwL << endl;
                    }
                    else if (ssEWfG[eZYDAjMp][SY6EJMDOwL] >= ssEWfG[eZYDAjMp][SY6EJMDOwL -1] && ssEWfG[eZYDAjMp][SY6EJMDOwL] >= ssEWfG[eZYDAjMp + 1][SY6EJMDOwL] && ssEWfG[eZYDAjMp][SY6EJMDOwL] >= ssEWfG[eZYDAjMp - 1][SY6EJMDOwL] && ssEWfG[eZYDAjMp][SY6EJMDOwL] >= ssEWfG[eZYDAjMp][SY6EJMDOwL +1])
                        cout << eZYDAjMp << ' ' << SY6EJMDOwL << endl;
                    else
                        ;
                    SY6EJMDOwL = SY6EJMDOwL +1;
                }
            }
            eZYDAjMp++;
        }
    }
    if (ssEWfG[IHoI8y -1][0] >= ssEWfG[IHoI8y -2][0] && ssEWfG[IHoI8y -1][0] >= ssEWfG[IHoI8y -1][1])
        cout << IHoI8y -1 << ' ' << 0 << endl;
    {
        int MQZ3IY8F27sW = 1;
        for (; MQZ3IY8F27sW < mGoyC6Tl - 1;) {
            if (ssEWfG[IHoI8y -1][MQZ3IY8F27sW] >= ssEWfG[IHoI8y -1][MQZ3IY8F27sW -1] && ssEWfG[IHoI8y -1][MQZ3IY8F27sW] >= ssEWfG[IHoI8y -1][MQZ3IY8F27sW +1] && ssEWfG[IHoI8y -1][MQZ3IY8F27sW] >= ssEWfG[IHoI8y -2][MQZ3IY8F27sW])
                cout << IHoI8y -1 << ' ' << MQZ3IY8F27sW << endl;
            MQZ3IY8F27sW++;
        }
    }
    if (ssEWfG[IHoI8y -1][mGoyC6Tl - 1] >= ssEWfG[IHoI8y -1][mGoyC6Tl - 2] && ssEWfG[IHoI8y -1][mGoyC6Tl - 1] >= ssEWfG[IHoI8y -2][mGoyC6Tl - 1])
        cout << IHoI8y -1 << ' ' << mGoyC6Tl - 1 << endl;
    return 0;
}

