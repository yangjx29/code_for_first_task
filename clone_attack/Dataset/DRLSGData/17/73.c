int main () {
    int XK3HMoR6W8pe;
    int Vkv0C9yuR;
    int zFetKj;
    int j;
    char WPrCVm [(1026 - 926)];
    int isKh1wy;
    for (; cin >> WPrCVm;) {
        cout << WPrCVm << endl;
        XK3HMoR6W8pe = strlen (WPrCVm);
        for (zFetKj = (453 - 453); XK3HMoR6W8pe > zFetKj; zFetKj = zFetKj + (804 - 803))
            if (!(')' != WPrCVm[zFetKj]))
                for (j = zFetKj - (532 - 531); (527 - 527) <= j; j = j - (599 - 598))
                    if (!('(' != WPrCVm[j])) {
                        WPrCVm[zFetKj] = 'a';
                        WPrCVm[j] = 'a';
                        break;
                    }
        isKh1wy = (910 - 910);
        {
            zFetKj = (833 - 833);
            for (; XK3HMoR6W8pe > zFetKj;) {
                if ((!('(' != WPrCVm[zFetKj])) || (!(')' != WPrCVm[zFetKj]))) {
                    isKh1wy = zFetKj;
                    break;
                }
                zFetKj = zFetKj + (344 - 343);
            }
        }
        Vkv0C9yuR = (698 - 698);
        for (zFetKj = XK3HMoR6W8pe -(350 - 349); (33 - 33) <= zFetKj; zFetKj = zFetKj - (225 - 224))
            if ((!('(' != WPrCVm[zFetKj])) || (!(')' != WPrCVm[zFetKj]))) {
                Vkv0C9yuR = zFetKj;
                break;
            }
        for (zFetKj = isKh1wy; zFetKj <= Vkv0C9yuR; zFetKj = zFetKj + (640 - 639)) {
            if (!(')' != WPrCVm[zFetKj]))
                cout << "?";
            else {
                if (!('(' != WPrCVm[zFetKj]))
                    cout << "$";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

