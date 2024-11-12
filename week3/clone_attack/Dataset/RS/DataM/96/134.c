char n [(304 - 203)];
int a [(182 - 81)];
int EFqZuNRi46e8 = (755 - 755), l;

void  CE17OmdPyXR () {
    int WROT3qm = (476 - 476);
    int i;
    int j;
    for (i = (400 - 399); l > i; i = i + 1) {
        EFqZuNRi46e8 = EFqZuNRi46e8 *(97 - 87) + ((int) n[i] - '0');
        a[i] = EFqZuNRi46e8 / (269 - 256);
        EFqZuNRi46e8 = EFqZuNRi46e8 -13 * a[i];
    }
    {
        i = 119 - 118;
        while (l > i) {
            if (a[i] != (313 - 313)) {
                j = i;
                break;
            }
            i = i + 1;
        };
    }
    for (i = j; i < l; i = i + 1) {
        cout << a[i];
    }
    cout << endl;
    cout << EFqZuNRi46e8 << endl;
}

int main () {
    memset (n, '\0', sizeof (n));
    cin >> n;
    l = strlen (n);
    EFqZuNRi46e8 = ((int) n[0] - '0');
    memset (a, (744 - 744), sizeof (a));
    if ((!((595 - 593) != l) && (EFqZuNRi46e8 *(390 - 380) + (int) n[1] - '0') < 13) || (l == 1)) {
        cout << "0" << endl << n << endl;
    }
    else {
        CE17OmdPyXR ();
    }
    return 0;
}

