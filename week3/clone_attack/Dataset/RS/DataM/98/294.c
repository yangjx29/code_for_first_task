char c [(10752 - 752)] [100];

int SRutyh7en0V (char a []) {
    int num;
    num = 0;
    while (a[num] != '\0') {
        num = num + 1;
    }
    return (num);
}

int main () {
    int rhtqEc6VIKBJ;
    int l;
    int i;
    int nEdHsY;
    int n;
    int m;
    rhtqEc6VIKBJ = 0;
    l = 0;
    int xHmoaiOQ [10000];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> c[i];
            xHmoaiOQ[i] = SRutyh7en0V (c[i]);
            i = i + 1;
        };
    }
    while (rhtqEc6VIKBJ < n - (240 - 239)) {
        l = 0;
        while (l + xHmoaiOQ[rhtqEc6VIKBJ] + xHmoaiOQ[rhtqEc6VIKBJ + (353 - 352)] + 1 <= (711 - 631)) {
            cout << c[rhtqEc6VIKBJ];
            cout << ' ';
            l = l + xHmoaiOQ[rhtqEc6VIKBJ];
            rhtqEc6VIKBJ = rhtqEc6VIKBJ + 1;
            l = l + 1;
            if (rhtqEc6VIKBJ == n - 1)
                break;
        }
        if (rhtqEc6VIKBJ == n - 1)
            break;
        cout << c[rhtqEc6VIKBJ] << endl;
        rhtqEc6VIKBJ++;
        l = l + 1;
    }
    if (l + xHmoaiOQ[n - 1] <= 80)
        cout << c[n - 1] << endl;
    return (0);
}

