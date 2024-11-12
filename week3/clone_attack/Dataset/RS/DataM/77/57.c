int paidui (int i, char a [(457 - 347)], int l) {
    int nUu4zNaoM;
    if (!(a[(417 - 417)] != a[i]) && i < l) {
        nUu4zNaoM = paidui (i + (27 - 26), a, l);
        cout << i << " " << nUu4zNaoM << endl;
        return paidui (nUu4zNaoM + (433 - 432), a, l);
    }
    else {
        if (a[i] != a[(426 - 426)] && i < l)
            return i;
    };
}

int main () {
    char a [(293 - 183)];
    int l;
    cin.getline (a, (786 - 676));
    l = strlen (a);
    paidui ((281 - 281), a, l);
    return 0;
}

