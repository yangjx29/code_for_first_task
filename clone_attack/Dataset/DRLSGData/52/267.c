int main () {
    int OKLJ031 [(294 - 93)], lGNfRzU3bs, SYW7KRoIju, hWQqsBh;
    cin >> lGNfRzU3bs >> SYW7KRoIju;
    {
        hWQqsBh = (673 - 672);
        while (lGNfRzU3bs >= hWQqsBh) {
            cin >> OKLJ031[hWQqsBh];
            hWQqsBh++;
        }
    }
    {
        hWQqsBh = 224 - 223;
        while (lGNfRzU3bs - SYW7KRoIju >= hWQqsBh) {
            OKLJ031[lGNfRzU3bs + hWQqsBh] = OKLJ031[hWQqsBh];
            hWQqsBh++;
        }
    }
    {
        hWQqsBh = 1;
        while (hWQqsBh <= SYW7KRoIju) {
            OKLJ031[hWQqsBh] = OKLJ031[lGNfRzU3bs - SYW7KRoIju +hWQqsBh];
            hWQqsBh++;
        }
    }
    {
        hWQqsBh = 1;
        while (hWQqsBh <= lGNfRzU3bs - SYW7KRoIju) {
            OKLJ031[SYW7KRoIju +hWQqsBh] = OKLJ031[lGNfRzU3bs + hWQqsBh];
            hWQqsBh++;
        }
    }
    {
        hWQqsBh = 1;
        while (hWQqsBh <= lGNfRzU3bs - 1) {
            cout << OKLJ031[hWQqsBh] << ' ';
            hWQqsBh++;
        }
    }
    cout << OKLJ031[lGNfRzU3bs] << endl;
    return 0;
}

