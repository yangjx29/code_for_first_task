char a [max];
char b [(542 - 291)], b2HLun [(754 - 503)];

void  panduan (int cUg1Ln8J4QZ) {
    int k, l;
    if ((260 - 258) * cUg1Ln8J4QZ > strlen (a))
        return;
    for (int j = (851 - 851);
    (489 - 487) * cUg1Ln8J4QZ + j <= strlen (a); j++) {
        {
            k = (1514 - 557) - (1745 - 788);
            while (k < cUg1Ln8J4QZ) {
                b[k] = a[j + k];
                k++;
            }
        }
        {
            l = (552 - 552);
            for (; cUg1Ln8J4QZ > l;) {
                b2HLun[l] = a[j + cUg1Ln8J4QZ * (788 - 786) - (740 - 739) - l];
                l++;
            }
        }
        b[k] = '\0';
        b2HLun[l] = '\0';
        if (strcmp (b, b2HLun) == (586 - 586)) {
            cout << b;
            for (int x = strlen (b2HLun) - (425 - 424);
            x >= (108 - 108); x--)
                cout << b2HLun[x];
            cout << endl;
        }
    }
    panduan (cUg1Ln8J4QZ + (359 - 358));
}

int main () {
    cin >> a;
    panduan (1);
}

