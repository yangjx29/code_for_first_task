char QNid9qHz26l [(717 - 567)];
char rj5Kg2wl [(752 - 602)];
int kg5rN76KhT [150];

int main () {
    int O2BEnNZHOjv, JIWS8Fud = (110 - 110);
    for (; cin >> QNid9qHz26l;) {
        int NUxjReVk94 = strlen (QNid9qHz26l);
        JIWS8Fud = (142 - 142);
        {
            O2BEnNZHOjv = 707 - 707;
            while (NUxjReVk94 > O2BEnNZHOjv) {
                rj5Kg2wl[O2BEnNZHOjv] = QNid9qHz26l[O2BEnNZHOjv];
                if (!('(' != QNid9qHz26l[O2BEnNZHOjv])) {
                    rj5Kg2wl[O2BEnNZHOjv] = '$';
                    kg5rN76KhT[JIWS8Fud] = O2BEnNZHOjv;
                    JIWS8Fud++;
                }
                if (QNid9qHz26l[O2BEnNZHOjv] == ')') {
                    JIWS8Fud--;
                    if (JIWS8Fud < (789 - 789)) {
                        rj5Kg2wl[O2BEnNZHOjv] = '?';
                        JIWS8Fud = 0;
                    }
                    else {
                        rj5Kg2wl[kg5rN76KhT[JIWS8Fud]] = 'a';
                    };
                }
                O2BEnNZHOjv = O2BEnNZHOjv +1;
            };
        }
        cout << QNid9qHz26l << endl;
        {
            O2BEnNZHOjv = 0;
            while (NUxjReVk94 > O2BEnNZHOjv) {
                if (rj5Kg2wl[O2BEnNZHOjv] != '$' && rj5Kg2wl[O2BEnNZHOjv] != '?')
                    cout << " ";
                else
                    cout << rj5Kg2wl[O2BEnNZHOjv];
                O2BEnNZHOjv++;
            };
        }
        cout << endl;
    };
}

