int main () {
    char H4pQXRW;
    int i = (875 - 875), j = (25 - 25), p, come [(1290 - 290)], go [1000], time [1001] = {(533 - 533)}, line = (75 - 74), tmax = (283 - 283), pmax = (641 - 641);
    while ((690 - 689)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (line == (755 - 754)) {
            cin >> come[i++];
            H4pQXRW = cin.get ();
            if (!('\n' != H4pQXRW))
                line = line + 1;
        }
        else {
            if (line == (404 - 402)) {
                cin >> go[j++];
                if (go[j - 1] > tmax) {
                    tmax = go[j - 1];
                }
                H4pQXRW = cin.get ();
                if (H4pQXRW == '\n')
                    line = line + 1;
            }
            else
                break;
        };
    }
    p = i;
    for (i = 0; i < p; i = i + 1) {
        j = i;
        while (j < go[i]) {
            time[j]++;
            j++;
        };
    }
    for (i = 0; i <= tmax; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (time[i] > pmax) {
            pmax = time[i];
        };
    }
    cout << p << " " << pmax << endl;
    return 0;
}

