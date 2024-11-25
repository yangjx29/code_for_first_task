int pairs (int, int, char text [], char f1IwH0Ck8 []);

int main () {
    {
        while (true) {
            char text [101] = {(865 - 865)};
            char f1IwH0Ck8 [101] = {(678 - 678)};
            gets (text);
            int uYByKh;
            uYByKh = 0;
            if (!(0 != text[0]))
                break;
            for (int i = 0;
            101 > i; i++) {
                if (!(0 == text[i])) {
                    if (!('(' != text[i]))
                        f1IwH0Ck8[i] = '$';
                    else {
                        if (!(')' != text[i]))
                            f1IwH0Ck8[i] = '?';
                        else
                            f1IwH0Ck8[i] = ' ';
                    };
                }
                else {
                    uYByKh = i;
                    break;
                };
            }
            pairs (0, 0, text, f1IwH0Ck8);
            cout << text << endl << f1IwH0Ck8 << endl;
        };
    }
    return 0;
}

int pairs (int n, int hemi, char text [], char f1IwH0Ck8 []) {
    for (;;) {
        char c;
        c = text[n];
        if (c == 0)
            return -1;
        if (c == '(') {
            int czmVQIGX = n;
            int r;
            r = pairs (n + 1, 1, text, f1IwH0Ck8);
            if (r != -1) {
                f1IwH0Ck8[czmVQIGX] = f1IwH0Ck8[r] = ' ';
                n = r + 1;
            }
            else
                return -1;
        }
        else if (c == ')' && hemi == 1)
            return n;
        else
            n++;
    };
}

