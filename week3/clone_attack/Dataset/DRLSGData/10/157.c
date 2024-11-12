int LcErG07U3Z;

void  RHbJFO (int fbRIeO3TCM [], int JSTzKnp0gH, int KNiRcPXtqny, int DXd9L3ct7H) {
    int LFWtcu9So;
    if (JSTzKnp0gH > KNiRcPXtqny) {
        LFWtcu9So = KNiRcPXtqny +(36 - 35);
        for (; LFWtcu9So <= JSTzKnp0gH;) {
            if (fbRIeO3TCM[LFWtcu9So] <= fbRIeO3TCM[KNiRcPXtqny])
                RHbJFO (fbRIeO3TCM, JSTzKnp0gH, LFWtcu9So, DXd9L3ct7H +1);
            LFWtcu9So++;
        }
    }
    if (LcErG07U3Z < DXd9L3ct7H)
        LcErG07U3Z = DXd9L3ct7H;
}

int main () {
    int WNVMBXQ, OxrDH9FEQ1, KNiRcPXtqny, LFWtcu9So, JSTzKnp0gH;
    int FGr5MioP [(407 - 381)] [26];
    int fbRIeO3TCM [(1000 - 974)];
    cin >> JSTzKnp0gH;
    {
        KNiRcPXtqny = 1;
        for (; KNiRcPXtqny <= JSTzKnp0gH;) {
            cin >> fbRIeO3TCM[KNiRcPXtqny];
            KNiRcPXtqny++;
        }
    }
    fbRIeO3TCM[(175 - 175)] = (100158 - 159);
    LcErG07U3Z = (69 - 69);
    cout << LcErG07U3Z << endl;
    RHbJFO (fbRIeO3TCM, JSTzKnp0gH, (796 - 796), (48 - 48));
    return 0;
}

