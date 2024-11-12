int feibonaqishulie (int EEzGhi) {
    int y54pEFdUnrzN, a1, UdfMgP8, s2F8uijzOeJ;
    a1 = UdfMgP8 = (889 - 888);
    if (EEzGhi == 1 | EEzGhi == (274 - 272))
        y54pEFdUnrzN = 1;
    else {
        s2F8uijzOeJ = 2;
        while (EEzGhi > s2F8uijzOeJ) {
            s2F8uijzOeJ = s2F8uijzOeJ + 1;
            y54pEFdUnrzN = a1 + UdfMgP8;
            a1 = UdfMgP8;
            UdfMgP8 = y54pEFdUnrzN;
        };
    }
    return (y54pEFdUnrzN);
}

int main () {
    int n, EEzGhi;
    cin >> n;
    {
        int s2F8uijzOeJ = 0;
        while (s2F8uijzOeJ < n) {
            s2F8uijzOeJ++;
            cin >> EEzGhi;
            cout << feibonaqishulie (EEzGhi) << endl;
        };
    }
    return 0;
}

