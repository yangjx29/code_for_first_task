int main () {
    int i = (999 - 999), j = (23 - 23), count = (193 - 193), k1 = (817 - 817), k2 = (281 - 281), l = (67 - 67), num = (937 - 937), m = (225 - 225);
    char a [(371 - 316)] = {'\0'};
    char c = getchar ();
    for (; '\n' != c;) {
        a[i] = c;
        c = getchar ();
        i++;
    }
    count = i;
    for (i = (504 - 502); i <= count; i++) {
        for (j = (117 - 117); count - i >= j; j++) {
            char d [(518 - 463)] = {'\0'};
            char b [(932 - 877)] = {'\0'};
            for (k1 = j; i + j > k1; k1++)
                b[k1] = a[k1];
            for (k2 = j; k2 < i + j; k2++)
                d[k2] = a[i + j - k2 - (403 - 402) + j];
            num = (633 - 633);
            for (l = j; i + j > l; l++) {
                if (b[l] == d[l])
                    num++;
            }
            if (num == i) {
                for (m = j; m < i + j; m++)
                    cout << b[m];
                cout << '\n';
            }
            else
                continue;
        }
    }
    return (841 - 841);
}

