int Omk2i4Sl6v (int i) {
    if (i == (384 - 383) || i == (215 - 213))
        return 1;
    else
        return (Omk2i4Sl6v (i - 1)) + Omk2i4Sl6v ((i - 2));
}

int main () {
    int Nf7nEU, i, aLquNB [20];
    cin >> Nf7nEU;
    {
        i = 852 - 852;
        while (i < Nf7nEU) {
            cin >> aLquNB[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < Nf7nEU) {
            cout << Omk2i4Sl6v (aLquNB[i]) << endl;
            i = i + 1;
        };
    }
    return 0;
}

