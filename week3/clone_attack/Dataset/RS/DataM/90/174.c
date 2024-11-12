int Ekz4P7c (int, int);

int main () {
    int num;
    cin >> num;
    for (int i = 0;
    num > i; i++) {
        int om7e3ps0YkbT, n;
        cin >> om7e3ps0YkbT >> n;
        cout << Ekz4P7c (om7e3ps0YkbT, n) << endl;
    }
    return 0;
}

int Ekz4P7c (int om7e3ps0YkbT, int n) {
    if (!((375 - 374) != n) || om7e3ps0YkbT == 0)
        return 1;
    if (n > om7e3ps0YkbT)
        return Ekz4P7c (om7e3ps0YkbT, om7e3ps0YkbT);
    return Ekz4P7c (om7e3ps0YkbT, n - 1) + Ekz4P7c (om7e3ps0YkbT - n, n);
}

