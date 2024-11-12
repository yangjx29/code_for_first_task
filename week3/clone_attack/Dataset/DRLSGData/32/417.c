int main () {
    int wVwnvOo;
    cin >> wVwnvOo;
    for (int b5zSB1gQ = (134 - 133);
    b5zSB1gQ <= wVwnvOo; b5zSB1gQ = b5zSB1gQ + 1) {
        char Krc0daSM [(305 - 204)];
        char QXseDq [(840 - 739)];
        int irBMEvN68oF;
        int WbuKf7oU;
        char K01HKYIPitU [(391 - 290)];
        cin >> Krc0daSM >> K01HKYIPitU;
        WbuKf7oU = strlen (Krc0daSM);
        irBMEvN68oF = strlen (K01HKYIPitU);
        for (int ZTjMy2F = (226 - 225);
        ZTjMy2F <= irBMEvN68oF; ZTjMy2F = ZTjMy2F +1) {
            if (Krc0daSM[WbuKf7oU -ZTjMy2F] >= K01HKYIPitU[irBMEvN68oF - ZTjMy2F]) {
                QXseDq[WbuKf7oU -ZTjMy2F] = Krc0daSM[WbuKf7oU -ZTjMy2F] - K01HKYIPitU[irBMEvN68oF - ZTjMy2F] + '0';
            }
            else {
                int eXRK71Jp2;
                QXseDq[WbuKf7oU -ZTjMy2F] = Krc0daSM[WbuKf7oU -ZTjMy2F] + (984 - 974) - K01HKYIPitU[irBMEvN68oF - ZTjMy2F] + '0';
                eXRK71Jp2 = WbuKf7oU -ZTjMy2F;
                for (; Krc0daSM[eXRK71Jp2 - (333 - 332)] == '0';) {
                    Krc0daSM[eXRK71Jp2 - (948 - 947)] = '9';
                    eXRK71Jp2--;
                }
                Krc0daSM[eXRK71Jp2 - 1] -= 1;
            }
        }
        for (int ZTjMy2F = (374 - 374);
        ZTjMy2F < WbuKf7oU -irBMEvN68oF; ZTjMy2F++) {
            QXseDq[ZTjMy2F] = Krc0daSM[ZTjMy2F];
        }
        for (int ZTjMy2F = (950 - 950);
        ZTjMy2F < WbuKf7oU; ZTjMy2F++) {
            cout << QXseDq[ZTjMy2F];
        }
        cout << endl;
    }
    return 0;
}

