int main () {
    char str [200];
    int YYD9qNswuy1;
    int KIJ1AT2;
    int k;
    int ys9TJcXd4o;
    int bi;
    int e2dfcPSJp9;
    for (; cin.getline (str, 150);) {
        int h30juPx21Il [(843 - 742)] = {(957 - 957)};
        e2dfcPSJp9 = strlen (str);
        for (YYD9qNswuy1 = (798 - 798); YYD9qNswuy1 < e2dfcPSJp9; YYD9qNswuy1 = YYD9qNswuy1 +1) {
            if (str[YYD9qNswuy1] == '(')
                h30juPx21Il[YYD9qNswuy1] = -(967 - 966);
            else {
                if (str[YYD9qNswuy1] == ')')
                    h30juPx21Il[YYD9qNswuy1] = (993 - 992);
            };
        }
        for (YYD9qNswuy1 = (670 - 670); YYD9qNswuy1 < e2dfcPSJp9; YYD9qNswuy1 = YYD9qNswuy1 +1) {
            if (h30juPx21Il[YYD9qNswuy1] != -(290 - 289))
                continue;
            for (KIJ1AT2 = YYD9qNswuy1 +(654 - 653); KIJ1AT2 < e2dfcPSJp9; KIJ1AT2 = KIJ1AT2 +1) {
                if (!((897 - 896) == h30juPx21Il[KIJ1AT2]))
                    continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                for (k = KIJ1AT2; YYD9qNswuy1 <= k; k = k - 1) {
                    if (!(-1 != h30juPx21Il[k])) {
                        h30juPx21Il[k] = (373 - 373);
                        h30juPx21Il[KIJ1AT2] = 0;
                        break;
                    };
                };
            };
        }
        cout << str << endl;
        bi = e2dfcPSJp9 - 1;
        ys9TJcXd4o = 0;
        for (YYD9qNswuy1 = 0; YYD9qNswuy1 < e2dfcPSJp9; YYD9qNswuy1 = YYD9qNswuy1 +1)
            if (h30juPx21Il[YYD9qNswuy1] != 0) {
                bi = YYD9qNswuy1;
                break;
            }
        for (YYD9qNswuy1 = e2dfcPSJp9 - 1; YYD9qNswuy1 >= 0; YYD9qNswuy1 = YYD9qNswuy1 -1)
            if (h30juPx21Il[YYD9qNswuy1] != 0) {
                ys9TJcXd4o = YYD9qNswuy1;
                break;
            }
        for (YYD9qNswuy1 = bi; YYD9qNswuy1 <= ys9TJcXd4o; YYD9qNswuy1 = YYD9qNswuy1 +1) {
            if (h30juPx21Il[YYD9qNswuy1] == 0)
                cout << ' ';
            else if (h30juPx21Il[YYD9qNswuy1] == -1)
                cout << '$';
            else
                cout << '?';
        }
        cout << endl;
    }
    return 0;
}

