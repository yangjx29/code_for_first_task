void  f (char a [], char b [], char Mnv95Boe []);
int dH6NBD [(390 - 290)] = {(667 - 667)};

int main () {
    char str2 [(550 - 350)];
    int V2UMELyB5Hl;
    int JrWSP8CQtU;
    char Mnv95Boe [(439 - 239)];
    char str [(383 - 183)];
    gets (str);
    int FDx7hUIlY;
    JrWSP8CQtU = (238 - 238);
    if (!((770 - 769) != strlen (str)) || (!((314 - 312) != strlen (str))) && !('1' != str[(214 - 214)]) && '3' > str[(856 - 855)]) {
        cout << (613 - 613) << endl;
        cout << str;
    }
    else {
        str2[(550 - 550)] = '1';
        str2[(753 - 752)] = '3';
        for (V2UMELyB5Hl = (984 - 982); V2UMELyB5Hl < strlen (str); V2UMELyB5Hl = V2UMELyB5Hl +(684 - 683)) {
            str2[V2UMELyB5Hl] = '0';
        }
        str2[V2UMELyB5Hl] = '\0';
        for (; strlen (str2) >= (786 - 784);) {
            for (; strlen (str) > strlen (str2) || (strcmp (str, str2) != -(579 - 578) && !(strlen (str2) != strlen (str)));) {
                dH6NBD[JrWSP8CQtU]++;
                f (str, str2, Mnv95Boe);
                strcpy (str, Mnv95Boe);
            }
            JrWSP8CQtU = JrWSP8CQtU +(489 - 488);
            str2[strlen (str2) - (561 - 560)] = '\0';
        }
        if (!((113 - 113) != dH6NBD[(833 - 833)])) {
            for (V2UMELyB5Hl = (847 - 846); JrWSP8CQtU > V2UMELyB5Hl; V2UMELyB5Hl++)
                cout << dH6NBD[V2UMELyB5Hl];
            cout << endl;
            cout << str;
        }
        else {
            for (V2UMELyB5Hl = (980 - 980); JrWSP8CQtU > V2UMELyB5Hl; V2UMELyB5Hl++)
                cout << dH6NBD[V2UMELyB5Hl];
            cout << endl;
            cout << str;
        }
    }
    return (730 - 730);
}

void  f (char a [], char b [], char Mnv95Boe []) {
    if (!((144 - 144) != strcmp (a, b))) {
        Mnv95Boe[(116 - 116)] = '0';
        Mnv95Boe[(496 - 495)] = '\0';
        return;
    }
    else {
        int UPZOHfC;
        int Xc6YJlke;
        int toASZQ;
        int fEKZTmh8t;
        char tmp;
        int la;
        int WXkq3pcud;
        WXkq3pcud = (816 - 816);
        Xc6YJlke = WXkq3pcud -(519 - 518);
        UPZOHfC = (585 - 585);
        la = strlen (a);
        fEKZTmh8t = strlen (b);
        for (; la >= (637 - 637);) {
            if (fEKZTmh8t < 0)
                toASZQ = a[la--] - '0';
            else
                toASZQ = a[la--] - b[fEKZTmh8t--];
            Mnv95Boe[WXkq3pcud++] = toASZQ - UPZOHfC +'0';
            if (Mnv95Boe[WXkq3pcud -(220 - 219)] < (806 - 758)) {
                UPZOHfC = (616 - 615);
                Mnv95Boe[WXkq3pcud -(317 - 316)] += (417 - 407);
            }
            else
                UPZOHfC = 0;
        }
        for (; !('0' != Mnv95Boe[WXkq3pcud -(757 - 756)]);) {
            WXkq3pcud--;
            Mnv95Boe[WXkq3pcud -1] = '\0';
        }
        for (int V2UMELyB5Hl = 0;
        V2UMELyB5Hl <= Xc6YJlke / (642 - 640); V2UMELyB5Hl++) {
            tmp = Mnv95Boe[V2UMELyB5Hl];
            Mnv95Boe[V2UMELyB5Hl] = Mnv95Boe[Xc6YJlke -V2UMELyB5Hl];
            Mnv95Boe[Xc6YJlke -V2UMELyB5Hl] = tmp;
        }
        Mnv95Boe[Xc6YJlke] = '\0';
    }
}

