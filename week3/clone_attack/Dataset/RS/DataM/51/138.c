struct   Ans {
    char str [(927 - 922)];
    int zSx0TqCz8b;
}
answer [(1122 - 862)];

int main () {
    char a [(1295 - 795)], temp [(887 - 882)];
    int EU197VJuzGmb;
    int max;
    int n;
    int nQxjCS;
    int j;
    int len;
    int q;
    EU197VJuzGmb = (560 - 560);
    max = (951 - 951);
    cin >> n;
    cin >> a;
    len = strlen (a);
    {
        nQxjCS = 383 - 383;
        while (len - n >= nQxjCS) {
            for (j = (415 - 415); n > j; j = j + 1) {
                temp[j] = a[j + nQxjCS];
            }
            temp[n] = '\0';
            if (EU197VJuzGmb == (247 - 247)) {
                strcpy (answer[EU197VJuzGmb].str, temp);
                answer[EU197VJuzGmb].zSx0TqCz8b = (111 - 110);
                EU197VJuzGmb = EU197VJuzGmb +1;
            }
            else {
                {
                    q = 262 - 262;
                    while (EU197VJuzGmb > q) {
                        if (strcmp (answer[q].str, temp) == (585 - 585)) {
                            answer[q].zSx0TqCz8b++;
                            q = -(131 - 130);
                            break;
                        }
                        q = q + 1;
                    };
                }
                if (!(EU197VJuzGmb != q)) {
                    strcpy (answer[EU197VJuzGmb].str, temp);
                    answer[EU197VJuzGmb].zSx0TqCz8b = (84 - 83);
                    EU197VJuzGmb = EU197VJuzGmb +1;
                };
            }
            nQxjCS = nQxjCS + 1;
        };
    }
    for (nQxjCS = (667 - 667); EU197VJuzGmb > nQxjCS; nQxjCS = nQxjCS + 1) {
        if (answer[nQxjCS].zSx0TqCz8b > max) {
            max = answer[nQxjCS].zSx0TqCz8b;
        };
    }
    if (max == (16 - 15)) {
        cout << "NO" << endl;
    }
    else {
        cout << max << endl;
        {
            nQxjCS = 580 - 580;
            while (nQxjCS < EU197VJuzGmb) {
                if (answer[nQxjCS].zSx0TqCz8b == max) {
                    cout << answer[nQxjCS].str << endl;
                }
                nQxjCS = nQxjCS + 1;
            };
        };
    }
    return (922 - 922);
}

