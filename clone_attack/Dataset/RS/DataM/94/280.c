int main () {
    int KGg43Niz;
    int BmuPZod;
    int N;
    int num;
    int x47jHBS [500];
    int i;
    int k;
    int temp;
    KGg43Niz = (859 - 859);
    BmuPZod = (931 - 930);
    cin >> N;
    for (i = 0; N > i; i = i + 1) {
        cin >> num;
        if (!(0 == num % 2)) {
            x47jHBS[KGg43Niz++] = num;
        };
    }
    for (i = 0; KGg43Niz > i; i = i + 1) {
        for (k = 0; KGg43Niz -1 - i > k; k = k + 1) {
            if (x47jHBS[k] > x47jHBS[k + 1]) {
                temp = x47jHBS[k];
                x47jHBS[k] = x47jHBS[k + 1];
                x47jHBS[k + 1] = temp;
            };
        };
    }
    for (i = 0; i < KGg43Niz; i++) {
        BmuPZod = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        cout << x47jHBS[i];
        if (BmuPZod == 0 && i != KGg43Niz -1) {
            cout << ",";
        };
    }
    return 0;
}

