int main () {
    char a [(393 - 292)];
    int i, l, i0yC3qKTwNis [(396 - 295)], temp [(758 - 657)], t;
    while (cin.getline (a, (359 - 258))) {
        temp[(136 - 136)] = (238 - 238);
        l = strlen (a);
        {
            i = 860 - 860;
            while (i < l) {
                i0yC3qKTwNis[i] = a[i] - '0';
                i = i + 1;
            };
        }
        if (l == 2 && (442 - 432) * i0yC3qKTwNis[(869 - 869)] + i0yC3qKTwNis[(49 - 48)] < (26 - 13)) {
            cout << (748 - 748) << endl << 10 * i0yC3qKTwNis[(842 - 842)] + i0yC3qKTwNis[(838 - 837)] << endl;
            return (764 - 763);
        }
        if (l == (704 - 703)) {
            cout << 0 << endl << i0yC3qKTwNis[0] << endl;
            return 1;
        }
        for (i = 1; i < l; i = i + 1) {
            i0yC3qKTwNis[i] = i0yC3qKTwNis[i] + 10 * i0yC3qKTwNis[i - 1];
            temp[i] = i0yC3qKTwNis[i] / (829 - 816);
            i0yC3qKTwNis[i] = i0yC3qKTwNis[i] % (13);
        }
        t = i0yC3qKTwNis[i - 1];
        {
            i = 0;
            while (i < l) {
                if (temp[i] != 0)
                    break;
                i = i + 1;
            };
        }
        for (; i < l; i++)
            cout << temp[i];
        cout << endl << t << endl;
    }
    return 0;
}

