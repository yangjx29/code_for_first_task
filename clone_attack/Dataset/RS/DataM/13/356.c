int main () {
    int YdwPy3iUM7sW;
    int SaM3xUcS4k2;
    int i;
    int L2BnRgz;
    YdwPy3iUM7sW = 0;
    int s [(20129 - 128)];
    int sMDzRCkUV4QN [20001];
    cin >> SaM3xUcS4k2;
    {
        i = 1;
        while (i <= 20001) {
            s[i] = 0;
            sMDzRCkUV4QN[i] = 0;
            i++;
        };
    }
    {
        i = 1;
        while (i <= SaM3xUcS4k2) {
            cin >> L2BnRgz;
            if (sMDzRCkUV4QN[L2BnRgz] == 0) {
                YdwPy3iUM7sW++;
                sMDzRCkUV4QN[L2BnRgz] = 1;
                s[YdwPy3iUM7sW] = L2BnRgz;
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= YdwPy3iUM7sW -1) {
            cout << s[i] << ' ';
            i++;
        };
    }
    cout << s[YdwPy3iUM7sW];
    return 0;
}

