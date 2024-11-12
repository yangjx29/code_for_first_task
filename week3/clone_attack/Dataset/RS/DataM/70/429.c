double  d (double  AjOCYgnUodTc, double  Hyzo8dCnUs, double  txNmHM, double  hoEwxCbOejG) {
    return (sqrt ((AjOCYgnUodTc -txNmHM) * (AjOCYgnUodTc -txNmHM) + (Hyzo8dCnUs -hoEwxCbOejG) * (Hyzo8dCnUs -hoEwxCbOejG)));
}

int main () {
    double  YPtIxp7D [100], zKlABE0I [100];
    int n;
    double  QfbscF2V0UdE;
    QfbscF2V0UdE = d (YPtIxp7D[(210 - 209)], zKlABE0I[(647 - 646)], YPtIxp7D[(954 - 952)], zKlABE0I[(798 - 796)]);
    cin >> n;
    for (int YEQhsyuD = (509 - 508);
    n >= YEQhsyuD; YEQhsyuD = YEQhsyuD +1) {
        cin >> YPtIxp7D[YEQhsyuD] >> zKlABE0I[YEQhsyuD];
    }
    for (int YEQhsyuD = 1;
    n >= YEQhsyuD; YEQhsyuD = YEQhsyuD +1) {
        for (int j = YEQhsyuD +1;
        j <= n; j = j + 1) {
            if (d (YPtIxp7D[YEQhsyuD], zKlABE0I[YEQhsyuD], YPtIxp7D[j], zKlABE0I[j]) > QfbscF2V0UdE)
                QfbscF2V0UdE = d (YPtIxp7D[YEQhsyuD], zKlABE0I[YEQhsyuD], YPtIxp7D[j], zKlABE0I[j]);
        };
    }
    printf ("%.4lf", QfbscF2V0UdE);
    return (311 - 311);
}

