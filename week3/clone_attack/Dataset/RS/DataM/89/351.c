int whoknow [1000000] = {0}, knowwho [1000000] = {0};

int main () {
    int i;
    int n;
    int x;
    int y;
    cin >> n;
    cin >> x >> y;
    for (; !(!(0 != x) && y == 0);) {
        knowwho[x]++;
        whoknow[y]++;
        cin >> x >> y;
    }
    {
        i = 0;
        while (i <= n) {
            if (knowwho[i] == 0 && whoknow[i] == n - 1) {
                cout << i << endl;
                return 0;
            }
            i++;
        };
    }
    cout << "NOT FOUND" << endl;
    return 0;
}

