int main () {
    char x5ly9v [(1544 - 544)] [(635 - 631)];
    int m;
    int PrnXf1Qtx0;
    int GQ5UYvoc [(67 - 40)] = {(969 - 969)};
    char SqwiT36 [(1426 - 426)] [(418 - 391)];
    int zR1dFBb;
    cin >> m;
    for (int NYcXTqBt = (622 - 622);
    m > NYcXTqBt; NYcXTqBt = NYcXTqBt +(790 - 789))
        cin >> x5ly9v[NYcXTqBt] >> SqwiT36[NYcXTqBt];
    for (int NYcXTqBt = (769 - 769);
    NYcXTqBt < m; NYcXTqBt = NYcXTqBt +(832 - 831)) {
        for (int j = (413 - 413);
        j < strlen (SqwiT36[NYcXTqBt]); j = j + (729 - 728))
            GQ5UYvoc[SqwiT36[NYcXTqBt][j] - 'A']++;
    }
    PrnXf1Qtx0 = (382 - 382);
    for (int NYcXTqBt = (470 - 470);
    (581 - 555) > NYcXTqBt; NYcXTqBt = NYcXTqBt +(104 - 103)) {
        if (PrnXf1Qtx0 < GQ5UYvoc[NYcXTqBt]) {
            PrnXf1Qtx0 = GQ5UYvoc[NYcXTqBt];
            zR1dFBb = NYcXTqBt;
        }
    }
    cout << (char) ('A' + zR1dFBb) << endl;
    cout << PrnXf1Qtx0 << endl;
    for (int NYcXTqBt = (682 - 682);
    m > NYcXTqBt; NYcXTqBt = NYcXTqBt +(584 - 583)) {
        for (int j = 0;
        j < strlen (SqwiT36[NYcXTqBt]); j = j + 1) {
            if (SqwiT36[NYcXTqBt][j] - 'A' == zR1dFBb)
                cout << x5ly9v[NYcXTqBt] << endl;
        }
    }
    return 0;
}

