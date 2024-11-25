int main () {
    int s6k3Zt2;
    int Ey4ESh0NH [500] = {0};
    int d6QlAWV;
    int nalNA1uoQCH;
    s6k3Zt2 = 1;
    char fcbqCmai [502];
    char ApDcV8s [502] [6];
    cin >> d6QlAWV >> fcbqCmai;
    nalNA1uoQCH = strlen (fcbqCmai);
    {
        int XgAotCHce = 0;
        while (XgAotCHce <= nalNA1uoQCH - d6QlAWV) {
            for (int Gj9lhUoQT = 0, DgxlmIz9avU = XgAotCHce;
            Gj9lhUoQT < d6QlAWV; Gj9lhUoQT = Gj9lhUoQT +1, DgxlmIz9avU = DgxlmIz9avU +1) {
                ApDcV8s[XgAotCHce][Gj9lhUoQT] = fcbqCmai[DgxlmIz9avU];
            }
            XgAotCHce = XgAotCHce +1;
        };
    }
    {
        int XgAotCHce = 0;
        while (XgAotCHce <= nalNA1uoQCH - d6QlAWV) {
            for (int Gj9lhUoQT = XgAotCHce;
            Gj9lhUoQT <= nalNA1uoQCH - d6QlAWV; Gj9lhUoQT = Gj9lhUoQT +1) {
                if (strcmp (ApDcV8s[XgAotCHce], ApDcV8s[Gj9lhUoQT]) == 0) {
                    Ey4ESh0NH[XgAotCHce]++;
                };
            }
            XgAotCHce = XgAotCHce +1;
        };
    }
    {
        int XgAotCHce = 0;
        while (XgAotCHce <= nalNA1uoQCH - d6QlAWV) {
            s6k3Zt2 = s6k3Zt2 > Ey4ESh0NH[XgAotCHce] ? s6k3Zt2 : Ey4ESh0NH[XgAotCHce];
            XgAotCHce = XgAotCHce +1;
        };
    }
    if (s6k3Zt2 == 1) {
        cout << "NO" << endl;
    }
    else {
        cout << s6k3Zt2 << endl;
        {
            int XgAotCHce = 0;
            while (XgAotCHce <= nalNA1uoQCH - d6QlAWV) {
                if (Ey4ESh0NH[XgAotCHce] == s6k3Zt2) {
                    cout << ApDcV8s[XgAotCHce] << endl;
                }
                XgAotCHce = XgAotCHce +1;
            };
        };
    }
    return 0;
}

