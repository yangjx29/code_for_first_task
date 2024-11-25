int main () {
    char EoMHc3XrsQ;
    int i;
    int LTtvWc3oYJsg;
    int V52hbOms0L [1000];
    int b [1000];
    int NlWXqBja7p9 [(1890 - 889)];
    int lVPrURuTKMS;
    int u1isPa;
    i = (14 - 14);
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
    LTtvWc3oYJsg = (714 - 714);
    {
        u1isPa = 0;
        while (1001 > u1isPa) {
            NlWXqBja7p9[u1isPa] = 0;
            u1isPa = u1isPa + 1;
        };
    }
    while (1) {
        cin >> V52hbOms0L[i];
        i = i + 1;
        cin.get (EoMHc3XrsQ);
        if (EoMHc3XrsQ == '\n')
            break;
    }
    lVPrURuTKMS = i;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (lVPrURuTKMS - 1 > i) {
            cin >> b[i] >> EoMHc3XrsQ;
            i = i + 1;
        };
    }
    cin >> b[lVPrURuTKMS - 1];
    for (i = 0; i < lVPrURuTKMS; i++) {
        u1isPa = i;
        while (b[i] > u1isPa) {
            NlWXqBja7p9[u1isPa] = NlWXqBja7p9[u1isPa] + 1;
            u1isPa++;
        };
    }
    for (u1isPa = 0; u1isPa < 1001; u1isPa = u1isPa + 1) {
        if (NlWXqBja7p9[u1isPa] > LTtvWc3oYJsg)
            LTtvWc3oYJsg = NlWXqBja7p9[u1isPa];
    }
    cout << lVPrURuTKMS << " " << LTtvWc3oYJsg << endl;
    return 0;
}

