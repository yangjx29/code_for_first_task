int SKsuGV = (937 - 937), cfozTWCsBJ9 = (721 - 721);

void  t3Rr0b2 (char a [], int k, char ch) {
    int longth;
    longth = strlen (a);
    int BBsC4zRQ;
    int j;
    {
        BBsC4zRQ = k;
        while (1) {
            if (!(ch == a[BBsC4zRQ]) && a[BBsC4zRQ] != '0') {
                a[BBsC4zRQ] = '0';
                for (j = BBsC4zRQ -1;; j = j - 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (a[j] == ch && a[j] != '0') {
                        a[j] = '0';
                        cout << j << ' ' << BBsC4zRQ << endl;
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
                        break;
                    };
                }
                break;
            }
            BBsC4zRQ = BBsC4zRQ +1;
        };
    }
    if (BBsC4zRQ == longth - 1)
        return;
    else
        t3Rr0b2 (a, BBsC4zRQ +1, ch);
}

int main () {
    char a [200];
    char ch;
    ch = a[0];
    cin >> a;
    t3Rr0b2 (a, 0, ch);
    return 0;
}

