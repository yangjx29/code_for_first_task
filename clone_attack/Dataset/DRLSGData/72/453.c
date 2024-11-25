int main () {
    int nptG4PaxQoD;
    nptG4PaxQoD = (430 - 430);
    int knJ9qEV2ftDL = (347 - 347);
    cin >> nptG4PaxQoD;
    cin >> knJ9qEV2ftDL;
    int e4f8XKjZW6u5 [22] [22];
    {
        int noVwn0;
        noVwn0 = 0;
        for (; noVwn0 < 22;) {
            e4f8XKjZW6u5[0][noVwn0] = 0;
            e4f8XKjZW6u5[noVwn0][0] = 0;
            e4f8XKjZW6u5[noVwn0][knJ9qEV2ftDL + (913 - 912)] = 0;
            e4f8XKjZW6u5[nptG4PaxQoD + (441 - 440)][noVwn0] = 0;
            noVwn0 = noVwn0 + (421 - 420);
        }
    }
    {
        int noVwn0;
        noVwn0 = (482 - 481);
        for (; noVwn0 <= nptG4PaxQoD;) {
            {
                int zHiZwR3h8f29;
                zHiZwR3h8f29 = 1;
                while (zHiZwR3h8f29 <= knJ9qEV2ftDL) {
                    cin >> e4f8XKjZW6u5[noVwn0][zHiZwR3h8f29];
                    zHiZwR3h8f29 = zHiZwR3h8f29 + 1;
                }
            }
            noVwn0 = noVwn0 + 1;
        }
    }
    {
        int noVwn0;
        noVwn0 = 1;
        for (; noVwn0 <= nptG4PaxQoD;) {
            int zHiZwR3h8f29 = 1;
            while (zHiZwR3h8f29 <= knJ9qEV2ftDL) {
                if (e4f8XKjZW6u5[noVwn0][zHiZwR3h8f29] >= e4f8XKjZW6u5[noVwn0 - 1][zHiZwR3h8f29] && e4f8XKjZW6u5[noVwn0][zHiZwR3h8f29] >= e4f8XKjZW6u5[noVwn0 + 1][zHiZwR3h8f29] && e4f8XKjZW6u5[noVwn0][zHiZwR3h8f29] >= e4f8XKjZW6u5[noVwn0][zHiZwR3h8f29 - 1] && e4f8XKjZW6u5[noVwn0][zHiZwR3h8f29] >= e4f8XKjZW6u5[noVwn0][zHiZwR3h8f29 + 1]) {
                    cout << noVwn0 - 1 << " " << zHiZwR3h8f29 - 1 << endl;
                }
                zHiZwR3h8f29 = zHiZwR3h8f29 + 1;
            }
            noVwn0 = noVwn0 + 1;
        }
    }
    return 0;
}

