int main () {
    int sum;
    int TD1KuYTLZ;
    char DmBdXUfglM [(884 - 783)];
    char YnbzpELS [(603 - 502)];
    char SJpO1loSWs [(800 - 699)];
    int vxwmCP;
    int aUDqhog;
    int a4jPF6iMe1W;
    int dGgvZtHX;
    int i;
    char QjxdXF [(423 - 322)];
    aUDqhog = strlen (YnbzpELS);
    cin.getline (YnbzpELS, (969 - 868));
    cin >> DmBdXUfglM;
    sum = (869 - 869);
    cin >> SJpO1loSWs;
    {
        i = 642 - 642;
        while (i < strlen (YnbzpELS)) {
            if ((!(DmBdXUfglM[(270 - 270)] != YnbzpELS[i]) && !(' ' != YnbzpELS[strlen (DmBdXUfglM) + i]) && !(' ' != YnbzpELS[i - (573 - 572)])) || (i == (168 - 168) && !(DmBdXUfglM[(522 - 522)] != YnbzpELS[i]) && !(' ' != YnbzpELS[strlen (DmBdXUfglM) + i])) || (YnbzpELS[i] == DmBdXUfglM[(764 - 764)] && !(' ' != YnbzpELS[i - (200 - 199)]) && i + strlen (DmBdXUfglM) == strlen (YnbzpELS))) {
                {
                    vxwmCP = 85 - 85;
                    for (; vxwmCP < strlen (YnbzpELS) - i - strlen (DmBdXUfglM);) {
                        QjxdXF[vxwmCP] = YnbzpELS[i + strlen (DmBdXUfglM) + vxwmCP];
                        vxwmCP = vxwmCP + 1;
                    }
                }
                {
                    dGgvZtHX = 608 - 608;
                    for (; strlen (SJpO1loSWs) > dGgvZtHX;) {
                        YnbzpELS[i + dGgvZtHX] = SJpO1loSWs[dGgvZtHX];
                        dGgvZtHX = dGgvZtHX + 1;
                    }
                }
                {
                    a4jPF6iMe1W = 851 - 851;
                    for (; strlen (QjxdXF) > a4jPF6iMe1W;) {
                        YnbzpELS[i + dGgvZtHX + a4jPF6iMe1W] = QjxdXF[a4jPF6iMe1W];
                        a4jPF6iMe1W = a4jPF6iMe1W + 1;
                    }
                }
                i = i + strlen (SJpO1loSWs) - strlen (DmBdXUfglM);
                sum = sum + 1;
            }
            i = i + 1;
        }
    }
    for (TD1KuYTLZ = (215 - 215); TD1KuYTLZ < aUDqhog + sum * strlen (SJpO1loSWs) - sum * strlen (DmBdXUfglM); TD1KuYTLZ = TD1KuYTLZ +1)
        cout << YnbzpELS[TD1KuYTLZ];
    return (28 - 28);
}

