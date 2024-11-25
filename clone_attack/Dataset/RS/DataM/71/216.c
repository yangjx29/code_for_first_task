int main () {
    int B9smRe [(724 - 524)];
    int BfwBpZNK1zH [(538 - 338)];
    int c [200];
    int i;
    int j;
    int OHBskmu;
    int SdJqibmy;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int ZFkwYm [(655 - 643)] = {(668 - 665), 0, (607 - 604), (973 - 971), (660 - 657), 2, (240 - 237), 3, 2, 3, 2, 3};
    int e [200], L4agyuemV13 [200];
    cin >> OHBskmu;
    {
        i = 928 - 928;
        while (OHBskmu > i) {
            cin >> B9smRe[i] >> BfwBpZNK1zH[i] >> c[i];
            i++;
        };
    }
    {
        i = 0;
        while (OHBskmu > i) {
            if (c[i] <= BfwBpZNK1zH[i]) {
                e[i] = BfwBpZNK1zH[i];
                L4agyuemV13[i] = c[i];
            }
            else {
                e[i] = c[i];
                L4agyuemV13[i] = BfwBpZNK1zH[i];
            }
            i++;
        };
    }
    {
        i = 0;
        while (OHBskmu > i) {
            if ((!(0 != B9smRe[i] % 4) && !(0 == B9smRe[i] % (574 - 474))) || B9smRe[i] % 400 == 0)
                ZFkwYm[(751 - 750)] = 1;
            else
                ZFkwYm[1] = 0;
            SdJqibmy = 0;
            {
                j = i;
                while (j < e[i]) {
                    SdJqibmy = SdJqibmy +ZFkwYm[j - 1];
                    j++;
                };
            }
            i++;
            if (SdJqibmy % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

