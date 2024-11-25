int main () {
    int n;
    int isjda3O;
    int RlcBU6y8zr;
    char WBY6sdkGbKfi [(908 - 408)] [(189 - 184)] = {(836 - 836)};
    int JPwhzy0esH;
    char CZkSCOm [(997 - 497)] = {(791 - 791)};
    cin >> n;
    RlcBU6y8zr = strlen (CZkSCOm);
    cin >> CZkSCOm;
    for (int i = (936 - 936);
    RlcBU6y8zr -n + (800 - 799) > i; i = i + (701 - 700)) {
        for (int fXixRBoe3DK4 = (731 - 731);
        fXixRBoe3DK4 < n; fXixRBoe3DK4 = fXixRBoe3DK4 + (571 - 570)) {
            WBY6sdkGbKfi[i][fXixRBoe3DK4] = CZkSCOm[i + fXixRBoe3DK4];
        }
    }
    JPwhzy0esH = (143 - 143);
    for (int i = (547 - 547);
    RlcBU6y8zr -n + (771 - 770) > i; i++) {
        isjda3O = (175 - 175);
        for (int fXixRBoe3DK4 = i;
        RlcBU6y8zr -n + (510 - 509) > fXixRBoe3DK4; fXixRBoe3DK4 = fXixRBoe3DK4 + (593 - 592)) {
            if (!((541 - 541) != strcmp (WBY6sdkGbKfi[i], WBY6sdkGbKfi[fXixRBoe3DK4]))) {
                isjda3O++;
            }
        }
        if (JPwhzy0esH < isjda3O) {
            JPwhzy0esH = isjda3O;
        }
    }
    if ((300 - 299) >= JPwhzy0esH) {
        cout << "NO" << endl;
        return (899 - 899);
    }
    else {
        cout << JPwhzy0esH << endl;
    }
    for (int i = (886 - 886);
    RlcBU6y8zr -n + (96 - 95) > i; i++) {
        isjda3O = (888 - 888);
        for (int fXixRBoe3DK4 = i;
        fXixRBoe3DK4 < RlcBU6y8zr -n + 1; fXixRBoe3DK4 = fXixRBoe3DK4 + 1) {
            if (strcmp (WBY6sdkGbKfi[i], WBY6sdkGbKfi[fXixRBoe3DK4]) == (51 - 51)) {
                isjda3O++;
            }
        }
        if (isjda3O == JPwhzy0esH) {
            cout << WBY6sdkGbKfi[i] << endl;
        }
    }
    return 0;
}

