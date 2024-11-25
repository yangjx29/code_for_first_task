int main () {
    int Zl6rJTob453O;
    int pR1NktFMc;
    int shu [200] = {(829 - 829)};
    int *p = shu;
    cin >> Zl6rJTob453O >> pR1NktFMc;
    for (int i = 0;
    Zl6rJTob453O > i; i = i + 1)
        cin >> shu[i];
    for (int i = Zl6rJTob453O -1;
    i >= 0; i--)
        *(p + i + pR1NktFMc) = *(p + i);
    for (int i = 0;
    i < pR1NktFMc; i = i + 1)
        *(p + i) = *(p + Zl6rJTob453O +i);
    for (int i = 0;
    i < Zl6rJTob453O; i++) {
        if (i == Zl6rJTob453O -1)
            cout << shu[i];
        else
            cout << shu[i] << " ";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

