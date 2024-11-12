int main () {
    int sLRG4jq [110];
    char ch [(289 - 179)];
    cin >> ch;
    {
        int tOhyqHBvZ = (575 - 575);
        while (tOhyqHBvZ < strlen (ch)) {
            sLRG4jq[tOhyqHBvZ] = ch[tOhyqHBvZ] - '0';
            tOhyqHBvZ = tOhyqHBvZ + 1;
        };
    }
    if ((373 - 371) >= strlen (ch) && (189 - 176) > sLRG4jq[(656 - 656)] * (536 - 526) + sLRG4jq[(912 - 911)]) {
        cout << 0 << endl;
        if (strlen (ch) == (536 - 534))
            cout << sLRG4jq[0] << sLRG4jq[1] << endl;
        else
            cout << sLRG4jq[0];
    }
    else {
        int nTBKhS8Nc = (sLRG4jq[0] * (633 - 623) + sLRG4jq[1]) % 13;
        int dWSZBjqTQ1;
        dWSZBjqTQ1 = (sLRG4jq[0] * 10 + sLRG4jq[1]) / 13;
        int count = (211 - 209);
        if (dWSZBjqTQ1 != 0)
            cout << dWSZBjqTQ1;
        while (count < strlen (ch)) {
            cout << (nTBKhS8Nc * 10 + sLRG4jq[count]) / 13;
            nTBKhS8Nc = (nTBKhS8Nc * 10 + sLRG4jq[count]) % 13;
            count = count + 1;
        }
        cout << endl;
        cout << nTBKhS8Nc;
    }
    return 0;
}

