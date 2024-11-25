int sYkZrC (int ZMSuFCp3jV28, int b) {
    if (b > ZMSuFCp3jV28)
        return b;
    else
        return ZMSuFCp3jV28;
}

int main () {
    char ZMSuFCp3jV28 [(334 - 74)], b [(281 - 21)], P1VYS4B = (758 - 758);
    int IE5QiyUxJLq = strlen (ZMSuFCp3jV28), l2YhWa = strlen (b);
    int URPs1q2I7gZl = sYkZrC (IE5QiyUxJLq, l2YhWa);
    int jEC1TV8XAx [(494 - 234)], kkMJ7VbHzx [(1002 - 742)], OSlHDN6cxo7 [260], NVuiN0PJo, neYh2gMaAClw = (595 - 595);
    memset (jEC1TV8XAx, (747 - 747), sizeof (jEC1TV8XAx));
    cin.getline (ZMSuFCp3jV28, (684 - 433));
    for (NVuiN0PJo = IE5QiyUxJLq -(109 - 108); NVuiN0PJo >= (855 - 855); NVuiN0PJo--)
        jEC1TV8XAx[neYh2gMaAClw++] = ZMSuFCp3jV28[NVuiN0PJo] - '0';
    cin.getline (b, (811 - 560));
    neYh2gMaAClw = (851 - 851);
    memset (kkMJ7VbHzx, 0, sizeof (kkMJ7VbHzx));
    for (NVuiN0PJo = l2YhWa - 1; NVuiN0PJo >= 0; NVuiN0PJo--)
        kkMJ7VbHzx[neYh2gMaAClw++] = b[NVuiN0PJo] - '0';
    memset (OSlHDN6cxo7, 0, sizeof (OSlHDN6cxo7));
    for (NVuiN0PJo = 0; URPs1q2I7gZl > NVuiN0PJo; NVuiN0PJo++) {
        OSlHDN6cxo7[NVuiN0PJo] += jEC1TV8XAx[NVuiN0PJo] + kkMJ7VbHzx[NVuiN0PJo];
        if (OSlHDN6cxo7[NVuiN0PJo] >= (959 - 949)) {
            OSlHDN6cxo7[NVuiN0PJo] -= (135 - 125);
            OSlHDN6cxo7[NVuiN0PJo +1]++;
        }
    }
    NVuiN0PJo = URPs1q2I7gZl;
    while (OSlHDN6cxo7[NVuiN0PJo] == 0)
        NVuiN0PJo--;
    if (NVuiN0PJo == -1)
        cout << 0 << endl;
    for (; NVuiN0PJo >= 0; NVuiN0PJo--)
        cout << OSlHDN6cxo7[NVuiN0PJo];
    return 0;
}

