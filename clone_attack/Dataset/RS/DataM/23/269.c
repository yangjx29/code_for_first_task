int main () {
    int sWNB19KE;
    int D3ChQfTLG6;
    sWNB19KE = (441 - 441);
    D3ChQfTLG6 = (323 - 323);
    char CbayOptqHR [100];
    char zCgp6I0xRDsw;
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
    gets (CbayOptqHR);
    {
        int v9mxustTW = (188 - 188), MYVFU1J4v6R = strlen (CbayOptqHR) - (174 - 173);
        while (MYVFU1J4v6R > v9mxustTW) {
            zCgp6I0xRDsw = CbayOptqHR[v9mxustTW];
            CbayOptqHR[v9mxustTW] = CbayOptqHR[MYVFU1J4v6R];
            v9mxustTW++;
            CbayOptqHR[MYVFU1J4v6R] = zCgp6I0xRDsw;
            MYVFU1J4v6R = MYVFU1J4v6R -1;
        };
    }
    for (int v9mxustTW = 0;
    v9mxustTW <= strlen (CbayOptqHR); v9mxustTW++) {
        if (!(' ' != CbayOptqHR[v9mxustTW]) || CbayOptqHR[v9mxustTW] == '\0') {
            sWNB19KE = D3ChQfTLG6;
            D3ChQfTLG6 = v9mxustTW - 1;
            for (; sWNB19KE < D3ChQfTLG6; sWNB19KE++, D3ChQfTLG6--) {
                zCgp6I0xRDsw = CbayOptqHR[sWNB19KE];
                CbayOptqHR[sWNB19KE] = CbayOptqHR[D3ChQfTLG6];
                CbayOptqHR[D3ChQfTLG6] = zCgp6I0xRDsw;
            }
            D3ChQfTLG6 = v9mxustTW + 1;
        };
    }
    cout << CbayOptqHR << endl;
    return 0;
}

