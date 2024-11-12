int RbEMBaisCSDG (int, int);

int main () {
    int n, s6DBbcxfsJ2k, djVTwWh;
    cin >> n;
    {
        s6DBbcxfsJ2k = 0;
        while (s6DBbcxfsJ2k < n) {
            s6DBbcxfsJ2k++;
            cin >> djVTwWh;
            cout << RbEMBaisCSDG (djVTwWh, 2) << endl;
        };
    }
    return 0;
}

int RbEMBaisCSDG (int djVTwWh, int b) {
    int s6DBbcxfsJ2k, t = 0;
    {
        s6DBbcxfsJ2k = b;
        while (s6DBbcxfsJ2k < djVTwWh) {
            if (djVTwWh % s6DBbcxfsJ2k == 0 && djVTwWh / s6DBbcxfsJ2k >= s6DBbcxfsJ2k)
                t = t + RbEMBaisCSDG (djVTwWh / s6DBbcxfsJ2k, s6DBbcxfsJ2k);
            s6DBbcxfsJ2k++;
        };
    }
    return t + 1;
}

