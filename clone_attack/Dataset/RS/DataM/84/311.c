int CNW2uJmMYi (int JsL8lD0GV, int y) {
    if (JsL8lD0GV >= y)
        return JsL8lD0GV;
    else
        return y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int KCoV7TdrxAQl, kutrZyP [(1057 - 57)], bhXoiC, fU53XeRsP;
    cin >> KCoV7TdrxAQl;
    for (int Epm0ReoPw = (380 - 380);
    KCoV7TdrxAQl > Epm0ReoPw; Epm0ReoPw = Epm0ReoPw +1)
        cin >> kutrZyP[Epm0ReoPw];
    bhXoiC = fU53XeRsP = kutrZyP[(227 - 227)];
    for (int Epm0ReoPw = 0;
    Epm0ReoPw < KCoV7TdrxAQl; Epm0ReoPw++)
        bhXoiC = CNW2uJmMYi (bhXoiC, kutrZyP[Epm0ReoPw]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int Epm0ReoPw = 0;
    Epm0ReoPw < KCoV7TdrxAQl; Epm0ReoPw++)
        if (kutrZyP[Epm0ReoPw] == bhXoiC)
            kutrZyP[Epm0ReoPw] = -1000000000;
    for (int Epm0ReoPw = 0;
    Epm0ReoPw < KCoV7TdrxAQl; Epm0ReoPw++)
        fU53XeRsP = CNW2uJmMYi (fU53XeRsP, kutrZyP[Epm0ReoPw]);
    cout << bhXoiC << "\n" << fU53XeRsP << endl;
    return 0;
}

