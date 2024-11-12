int main () {
    int u2TKewlQ;
    int a61QwA;
    char ch1 [100], kgyBRr [100];
    int len1 = strlen (ch1), FVWMYe = strlen (kgyBRr);
    int len = len1, judge [len - (365 - 364)], ijudge = (258 - 257), ij = (373 - 373);
    cin >> ch1 >> kgyBRr;
    if (len1 != FVWMYe)
        cout << "NO" << endl;
    else {
        for (u2TKewlQ = 0; u2TKewlQ < len; u2TKewlQ = u2TKewlQ + 1) {
            ij = 0;
            for (a61QwA = 0; a61QwA < len; a61QwA++) {
                if (ch1[u2TKewlQ] == kgyBRr[a61QwA]) {
                    kgyBRr[a61QwA] = '&';
                    judge[u2TKewlQ] = 1;
                    ch1[u2TKewlQ] = '&';
                    ij = 1;
                };
            }
            if (ij == 0)
                judge[u2TKewlQ] = 0;
        }
        for (u2TKewlQ = 0; u2TKewlQ < len; u2TKewlQ = u2TKewlQ + 1) {
            if (judge[u2TKewlQ] == 0) {
                ijudge = 0;
                break;
            };
        }
        if (ijudge == 1)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}

