int main () {
    int Jpdv1XDsUM, pUfbhQw, QBGmyP = (972 - 972), Uc3fHPVeCtv, y2WSB3sjdwRN, DwuALh;
    char str [(869 - 613)];
    char gFIO8qc2geuz [(520 - 264)];
    char a4jcf6ZlF [256];
    cin >> str;
    cin >> gFIO8qc2geuz;
    cin >> a4jcf6ZlF;
    Jpdv1XDsUM = strlen (str);
    pUfbhQw = strlen (gFIO8qc2geuz);
    for (Uc3fHPVeCtv = (417 - 417); Jpdv1XDsUM -pUfbhQw >= Uc3fHPVeCtv; Uc3fHPVeCtv++) {
        for (y2WSB3sjdwRN = (706 - 706); pUfbhQw - (322 - 321) >= y2WSB3sjdwRN; y2WSB3sjdwRN++) {
            if (str[Uc3fHPVeCtv +y2WSB3sjdwRN] == gFIO8qc2geuz[y2WSB3sjdwRN])
                continue;
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        if (y2WSB3sjdwRN == pUfbhQw) {
            for (DwuALh = 0; DwuALh < Uc3fHPVeCtv; DwuALh = DwuALh +1)
                cout << str[DwuALh];
            cout << a4jcf6ZlF;
            for (DwuALh = Uc3fHPVeCtv +y2WSB3sjdwRN; DwuALh < Jpdv1XDsUM; DwuALh = DwuALh +1)
                cout << str[DwuALh];
            QBGmyP = 1;
            break;
        };
    }
    if (QBGmyP == 0)
        cout << str;
    return 0;
}

