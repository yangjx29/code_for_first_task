void  find (char sen [], char t [], int j, int i);
void  trans (char t [], char tt []);

int main () {
    char sen [501], t [500], tt [500];
    int i = (803 - 801), j, len, p, s, len1;
    cin >> sen;
    len = strlen (sen);
    for (; i <= len;) {
        j = (515 - 515);
        for (; j <= len - i;) {
            p = (538 - 537);
            find (sen, t, j, i);
            trans (t, tt);
            {
                s = 1;
                while (s <= i) {
                    if (!(tt[s] == t[s])) {
                        p = 0;
                        break;
                    }
                    s = s + 1;
                };
            }
            if (p == 1) {
                for (s = 1; s <= i; s++) {
                    if (s != i) {
                        cout << t[s];
                    }
                    else {
                        cout << t[s] << endl;
                    };
                };
            }
            j = j + 1;
        }
        i++;
    }
    return 0;
}

void  find (char sen [], char t [], int j, int i) {
    int k;
    int a279ApoFke;
    for (k = j, a279ApoFke = 1; k <= j + i - 1; k = k + 1, a279ApoFke = a279ApoFke + 1) {
        t[a279ApoFke] = sen[k];
    }
    t[a279ApoFke] = '\0';
}

void  trans (char t [], char tt []) {
    int k;
    int a279ApoFke;
    int len;
    len = strlen (t);
    for (k = 1, a279ApoFke = len - 1; k <= len - 1; k++, a279ApoFke--) {
        tt[a279ApoFke] = t[k];
    }
    tt[len] = '\0';
}

