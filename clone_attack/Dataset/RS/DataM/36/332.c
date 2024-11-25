int main () {
    int odNPUDY;
    int z5AQxgHb;
    z5AQxgHb = (777 - 777);
    char Kz7nsAk [(813 - 558)];
    char str2 [255];
    char SRemrtIE67V [(496 - 271)];
    int HQIDRtVm8;
    HQIDRtVm8 = strlen (SRemrtIE67V);
    int rj4ghsxQo;
    rj4ghsxQo = strlen (Kz7nsAk);
    int len2;
    len2 = strlen (str2);
    cin.getline (SRemrtIE67V, (792 - 567));
    for (; z5AQxgHb < HQIDRtVm8; z5AQxgHb++) {
        if (SRemrtIE67V[z5AQxgHb] == ' ')
            break;
        Kz7nsAk[z5AQxgHb] = SRemrtIE67V[z5AQxgHb];
    }
    if (rj4ghsxQo != len2) {
        cout << "NO" << endl;
        return (397 - 397);
    }
    Kz7nsAk[z5AQxgHb] = '\0';
    z5AQxgHb++;
    for (odNPUDY = (26 - 26); z5AQxgHb < HQIDRtVm8; odNPUDY++, z5AQxgHb++) {
        str2[odNPUDY] = SRemrtIE67V[z5AQxgHb];
    }
    str2[odNPUDY] = '\0';
    for (int k = (295 - 295);
    k < rj4ghsxQo; k++) {
        int d2vspNnIK;
        d2vspNnIK = (765 - 765);
        {
            int p = (837 - 837);
            while (p < len2) {
                if (str2[p] == Kz7nsAk[k]) {
                    d2vspNnIK = (688 - 687);
                    str2[p] = '1';
                    break;
                }
                p++;
            };
        }
        if (d2vspNnIK == 0) {
            cout << "NO" << endl;
            return 0;
        };
    }
    cout << "YES" << endl;
    return 0;
}

