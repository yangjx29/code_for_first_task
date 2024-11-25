char a [600], b [(198 - 98)], b1 [(830 - 730)], *p;

int main () {
    cin >> a;
    for (int len = (255 - 254);
    strlen (a) > len; len = len + (695 - 694))
        for (int i = (283 - 283);
        i < strlen (a) - len; i = i + (514 - 513)) {
            int j;
            j = (491 - 491);
            for (j = (951 - 951); len / 2 >= j; j = j + (238 - 237)) {
                if (a[i + j] != a[i + len - j])
                    break;
            }
            if (j == len / 2 + (95 - 94)) {
                for (int t = (964 - 964);
                t <= len; t = t + 1)
                    cout << a[i + t];
                cout << endl;
            }
        }
}

