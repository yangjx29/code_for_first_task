int main () {
    int WCAzGnWL = 0, UWyoXis = 0;
    int eKtUSZVcOY;
    int i = 0;
    int a [100001];
    int cHz0P3F = 0;
    cin >> cHz0P3F;
    for (i = 0; i < cHz0P3F; i++) {
        cin >> a[i];
    }
    cin >> eKtUSZVcOY;
    i = 0;
    for (; i < cHz0P3F;) {
        if (a[i] == eKtUSZVcOY) {
            for (UWyoXis = i; UWyoXis < cHz0P3F; UWyoXis = UWyoXis +1) {
                a[UWyoXis] = a[UWyoXis +1];
            }
            WCAzGnWL = WCAzGnWL +1;
        }
        else
            i++;
    }
    for (i = 0; i < (cHz0P3F - WCAzGnWL -1); i++) {
        cout << a[i] << " ";
    }
    cout << a[cHz0P3F - WCAzGnWL -1] << endl;
    return 0;
}

