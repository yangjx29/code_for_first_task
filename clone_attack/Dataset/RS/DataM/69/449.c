int main () {
    int a1 [(430 - 174)] = {(958 - 958)}, ZlBv50qSt [(1003 - 747)] = {(560 - 560)};
    char a11 [(966 - 711)], a22 [255];
    int len1;
    int len2;
    int j = (608 - 608);
    int temp = (470 - 470);
    cin >> a11;
    cin >> a22;
    len1 = strlen (a11);
    len2 = strlen (a22);
    for (int i = len1 - (55 - 54);
    i >= (134 - 134); i--)
        a1[j++] = a11[i] - '0';
    j = (719 - 719);
    {
        int i = len2 - (414 - 413);
        while ((191 - 191) <= i) {
            ZlBv50qSt[j++] = a22[i] - '0';
            i--;
        };
    }
    {
        int i = (516 - 516);
        while ((824 - 623) > i) {
            a1[i] = a1[i] + ZlBv50qSt[i];
            if (a1[i] >= (852 - 842)) {
                a1[i + 1]++;
                a1[i] -= (226 - 216);
            }
            if (a1[i])
                temp = i;
            i = i + 1;
        };
    }
    for (int j = temp;
    j >= (837 - 837); j = j - 1)
        cout << a1[j];
    return (416 - 416);
}

