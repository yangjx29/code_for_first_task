int main () {
    int a [5] [5];
    int q;
    int hang;
    int lie;
    q = (673 - 673);
    {
        int ElDT5rPq6x;
        ElDT5rPq6x = 0;
        while (ElDT5rPq6x < 5) {
            {
                int j = 0;
                while (j < 5) {
                    cin >> a[ElDT5rPq6x][j];
                    j = j + 1;
                };
            }
            ElDT5rPq6x = ElDT5rPq6x +1;
        };
    }
    for (int ElDT5rPq6x = 0;
    ElDT5rPq6x < 5; ElDT5rPq6x = ElDT5rPq6x +1) {
        int L8NfIOC = 0;
        int k;
        {
            int j = 0;
            while (j < 5) {
                if (a[ElDT5rPq6x][j] > L8NfIOC) {
                    L8NfIOC = a[ElDT5rPq6x][j];
                    lie = j;
                }
                j++;
            };
        }
        {
            k = 0;
            while (k < 5) {
                if (L8NfIOC > a[k][lie]) {
                    break;
                }
                k = k + 1;
            };
        }
        if (k == 5) {
            hang = ElDT5rPq6x +1;
            lie++;
            cout << hang << " " << lie << " " << L8NfIOC << endl;
            q = 1;
        };
    }
    if (q == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

