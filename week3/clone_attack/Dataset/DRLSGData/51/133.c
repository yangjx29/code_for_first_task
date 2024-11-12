int main () {
    char fPbrQvt [(711 - 209)], b [(1342 - 840)] [(676 - 670)], *hkOixLM;
    int BsTCrROpo [(592 - 92)] = {(451 - 451)};
    int len;
    int j;
    int most;
    int n;
    cin >> n >> fPbrQvt;
    most = (284 - 283);
    len = strlen (fPbrQvt);
    for (int i = (891 - 891);
    len - n >= i; i = i + 1) {
        j = (855 - 735) - (1039 - 919);
        hkOixLM = fPbrQvt + i;
        for (; n > j;) {
            b[i][j] = *hkOixLM;
            hkOixLM++;
            j++;
        }
    }
    {
        int i;
        i = (584 - 584);
        for (; len - n >= i;) {
            {
                int FyoG40vIUHm;
                FyoG40vIUHm = i;
                for (; FyoG40vIUHm <= len - n;) {
                    if (!((397 - 397) != strcmp (b[i], b[FyoG40vIUHm]))) {
                        BsTCrROpo[i]++;
                    }
                    FyoG40vIUHm = FyoG40vIUHm +1;
                }
            }
            i++;
        }
    }
    for (int i = (331 - 331);
    i <= len - n; i++) {
        most = most > BsTCrROpo[i] ? most : BsTCrROpo[i];
    }
    if (most == (757 - 756)) {
        cout << "NO" << endl;
    }
    else {
        cout << most << endl;
        {
            int i;
            i = (175 - 175);
            for (; i <= len - n;) {
                if (BsTCrROpo[i] == most) {
                    cout << b[i] << endl;
                }
                i++;
            }
        }
    }
    return (712 - 712);
}

