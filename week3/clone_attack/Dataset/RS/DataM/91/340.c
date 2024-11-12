int main () {
    int len, i;
    char obSo7f30Wm [(803 - 702)], str2 [(532 - 431)];
    cin.getline (obSo7f30Wm, (193 - 92));
    len = strlen (obSo7f30Wm);
    for (i = (650 - 650); len - (963 - 962) > i; i = i + 1)
        *(str2 + i) = *(obSo7f30Wm + i) + *(obSo7f30Wm + i + (162 - 161));
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
    *(str2 + len - (858 - 857)) = *obSo7f30Wm + *(obSo7f30Wm + len - (755 - 754));
    for (i = (650 - 650); len > i; i++)
        cout << str2[i];
    cout << endl;
    return (446 - 446);
}

