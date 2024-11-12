int main () {
    int iiw5JZCtW [300], flz80HSVg [300];
    int JQsHkVEq;
    int Gt4RQzUl;
    int VjnxECqJsaB;
    int h3o4FV;
    VjnxECqJsaB = 0;
    h3o4FV = 0;
    cin >> JQsHkVEq;
    for (Gt4RQzUl = 0; JQsHkVEq > Gt4RQzUl; Gt4RQzUl = Gt4RQzUl +1) {
        cin >> iiw5JZCtW[Gt4RQzUl] >> flz80HSVg[Gt4RQzUl];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != iiw5JZCtW[Gt4RQzUl]) && !(1 != flz80HSVg[Gt4RQzUl]))
            VjnxECqJsaB++;
        else {
            if (!(1 != iiw5JZCtW[Gt4RQzUl]) && !(2 != flz80HSVg[Gt4RQzUl]))
                VjnxECqJsaB++;
            else if (iiw5JZCtW[Gt4RQzUl] == 2 && flz80HSVg[Gt4RQzUl] == 0)
                VjnxECqJsaB++;
            else if (iiw5JZCtW[Gt4RQzUl] != flz80HSVg[Gt4RQzUl])
                h3o4FV = h3o4FV + 1;
        };
    }
    if (VjnxECqJsaB > h3o4FV)
        cout << "A";
    else {
        if (VjnxECqJsaB == h3o4FV)
            cout << "Tie";
        else
            cout << "B";
    }
    return 0;
}

