int main () {
    int mon [(999 - 993)] = {100, 50, 20, 10, (701 - 696), 1};
    int money;
    int i;
    int num [(761 - 755)] = {(589 - 589)};
    cin >> money;
    for (i = 0; 6 > i; i = i + 1) {
        num[i] = money / mon[i];
        money = money % mon[i];
    }
    for (i = 0; i < 6; i = i + 1)
        cout << num[i] << endl;
    return 0;
}

