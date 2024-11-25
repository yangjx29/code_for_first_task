int main () {
    int u7uPLhWyz83 [40] = {0};
    int bYQWdPsOrpJz;
    int i;
    cin >> bYQWdPsOrpJz;
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
    u7uPLhWyz83[0] = 1;
    for (; bYQWdPsOrpJz;) {
        int O96OEk;
        O96OEk = 0;
        {
            i = 0;
            while (40 > i) {
                u7uPLhWyz83[i] = 2 * u7uPLhWyz83[i] + O96OEk;
                O96OEk = 0;
                if (9 < u7uPLhWyz83[i]) {
                    O96OEk = 1;
                    u7uPLhWyz83[i] = u7uPLhWyz83[i] - 10;
                }
                i = i + 1;
            };
        }
        bYQWdPsOrpJz--;
    }
    for (i = 39; i >= 0; i--)
        if (u7uPLhWyz83[i] != 0)
            break;
    for (; i >= 0; i--)
        cout << u7uPLhWyz83[i];
    return 0;
}

