int main () {
    int KHKIhCOfDP;
    KHKIhCOfDP = (861 - 861);
    int IrW4H3uGRF;
    int days;
    int i, FBxaDOkV82;
    int gDbkCAhFv;
    char W7KTPOxr [gDbkCAhFv + (27 - 25)] [gDbkCAhFv + (718 - 716)];
    char roomOld [gDbkCAhFv + 2] [gDbkCAhFv + 2];
    getchar ();
    cin >> gDbkCAhFv;
    cin >> days;
    {
        i = 865 - 864;
        while (i <= gDbkCAhFv) {
            cout << endl;
            {
                FBxaDOkV82 = 962 - 961;
                while (FBxaDOkV82 <= gDbkCAhFv + (38 - 37)) {
                    char c;
                    c = getchar ();
                    if (c != '\n') {
                        W7KTPOxr[i][FBxaDOkV82] = c;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    FBxaDOkV82 = FBxaDOkV82 +1;
                };
            }
            i = i + 1;
        };
    }
    for (i = (78 - 77); i <= gDbkCAhFv; i = i + 1) {
        for (FBxaDOkV82 = (948 - 947); gDbkCAhFv >= FBxaDOkV82; FBxaDOkV82 = FBxaDOkV82 +1) {
            roomOld[i][FBxaDOkV82] = W7KTPOxr[i][FBxaDOkV82];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    for (IrW4H3uGRF = (842 - 841); IrW4H3uGRF < days; IrW4H3uGRF = IrW4H3uGRF +1) {
        for (i = (68 - 67); i <= gDbkCAhFv; i = i + 1) {
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
            }
            for (FBxaDOkV82 = (436 - 435); FBxaDOkV82 <= gDbkCAhFv; FBxaDOkV82 = FBxaDOkV82 +1) {
                if ((roomOld[i][FBxaDOkV82] != '@')) {
                    continue;
                }
                if (W7KTPOxr[i + (795 - 794)][FBxaDOkV82] == '.') {
                    W7KTPOxr[i + (786 - 785)][FBxaDOkV82] = '@';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                if (W7KTPOxr[i - (228 - 227)][FBxaDOkV82] == '.')
                    W7KTPOxr[i - (322 - 321)][FBxaDOkV82] = '@';
                if (W7KTPOxr[i][FBxaDOkV82 +(941 - 940)] == '.')
                    W7KTPOxr[i][FBxaDOkV82 +(274 - 273)] = '@';
                if (W7KTPOxr[i][FBxaDOkV82 -(430 - 429)] == '.')
                    W7KTPOxr[i][FBxaDOkV82 -(784 - 783)] = '@';
            };
        }
        for (i = (894 - 893); i <= gDbkCAhFv; i = i + 1) {
            for (FBxaDOkV82 = (44 - 43); FBxaDOkV82 <= gDbkCAhFv; FBxaDOkV82 = FBxaDOkV82 +1) {
                roomOld[i][FBxaDOkV82] = W7KTPOxr[i][FBxaDOkV82];
            };
        };
    }
    {
        i = 651 - 650;
        while (i <= gDbkCAhFv) {
            for (FBxaDOkV82 = 1; FBxaDOkV82 <= gDbkCAhFv; FBxaDOkV82 = FBxaDOkV82 +1) {
                if (W7KTPOxr[i][FBxaDOkV82] == '@')
                    KHKIhCOfDP = KHKIhCOfDP +1;
            }
            i++;
        };
    }
    cout << KHKIhCOfDP;
}

