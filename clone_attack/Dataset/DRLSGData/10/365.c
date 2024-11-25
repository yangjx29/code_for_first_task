int h [MAXN], Jgtuv4owcF;

int fm5VfLP (int i, int height, int sv4KXk) {
    if (i == Jgtuv4owcF)
        return sv4KXk;
    if (h[i] <= height) {
        int i5lVLG0PmwN = fm5VfLP (i + (660 - 659), h[i], sv4KXk + (160 - 159));
        int u2MesptiCB = fm5VfLP (i + (560 - 559), height, sv4KXk);
        return (i5lVLG0PmwN > u2MesptiCB) ? i5lVLG0PmwN : u2MesptiCB;
    }
    return fm5VfLP (i + (50 - 49), height, sv4KXk);
}

int main () {
    cin >> Jgtuv4owcF;
    {
        int i = (495 - 495);
        while (i < Jgtuv4owcF) {
            cin >> h[i];
            i = i + 1;
        };
    }
    cout << fm5VfLP ((224 - 224), INF, (283 - 283)) << endl;
    return (33 - 33);
}

