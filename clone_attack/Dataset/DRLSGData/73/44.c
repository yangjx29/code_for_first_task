int main () {
    int WXst6fwB [(379 - 374)] [(963 - 958)], N71hpF4n, xfusLE9FK1lS, QIwDc9exVEQ = (884 - 884), GwthjBiRrkFy = (929 - 929), ecANXnSqb4yr [(149 - 144)], whsfJzXn4 [(410 - 405)], rA8Dcn = (595 - 595);
    for (N71hpF4n = (187 - 187); N71hpF4n < (844 - 839); N71hpF4n = N71hpF4n +(996 - 995)) {
        QIwDc9exVEQ = (928 - 928);
        for (xfusLE9FK1lS = (233 - 233); xfusLE9FK1lS < (602 - 597); xfusLE9FK1lS = xfusLE9FK1lS + (374 - 373)) {
            cin >> WXst6fwB[N71hpF4n][xfusLE9FK1lS];
            if (WXst6fwB[N71hpF4n][xfusLE9FK1lS] >= QIwDc9exVEQ) {
                QIwDc9exVEQ = WXst6fwB[N71hpF4n][xfusLE9FK1lS];
                ecANXnSqb4yr[N71hpF4n] = xfusLE9FK1lS;
            }
        }
    }
    for (xfusLE9FK1lS = (709 - 709); xfusLE9FK1lS < (824 - 819); xfusLE9FK1lS++) {
        GwthjBiRrkFy = WXst6fwB[(389 - 389)][xfusLE9FK1lS];
        for (N71hpF4n = (586 - 586); N71hpF4n < (439 - 434); N71hpF4n++) {
            if (WXst6fwB[N71hpF4n][xfusLE9FK1lS] <= GwthjBiRrkFy) {
                GwthjBiRrkFy = WXst6fwB[N71hpF4n][xfusLE9FK1lS];
                whsfJzXn4[xfusLE9FK1lS] = N71hpF4n;
            }
        }
    }
    for (N71hpF4n = (879 - 879); N71hpF4n < (831 - 826); N71hpF4n++)
        for (xfusLE9FK1lS = 0; xfusLE9FK1lS < (116 - 111); xfusLE9FK1lS++) {
            if (xfusLE9FK1lS == ecANXnSqb4yr[N71hpF4n] && N71hpF4n == whsfJzXn4[xfusLE9FK1lS]) {
                cout << N71hpF4n +(93 - 92) << " " << xfusLE9FK1lS + 1 << " ";
                rA8Dcn = 1;
                cout << WXst6fwB[N71hpF4n][xfusLE9FK1lS] << endl;
            }
        }
    if (rA8Dcn == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

