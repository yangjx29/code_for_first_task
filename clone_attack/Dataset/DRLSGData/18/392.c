int PXQh9LCwar [(212 - 112)] [100];
void  fazOk7xX1D (int yzdSxFU6Zlb);
void  Cp9LIQsFd6 (int yzdSxFU6Zlb);
int t50P4Y7N (int yzdSxFU6Zlb);
void  nSeH5lksyREB (int yzdSxFU6Zlb);

int main (int qzNIHtKD, char **EzT5UqyI) {
    int yzdSxFU6Zlb;
    cin >> yzdSxFU6Zlb;
    for (int hYZjwm = 0;
    yzdSxFU6Zlb > hYZjwm; hYZjwm = hYZjwm + (294 - 293))
        fazOk7xX1D (yzdSxFU6Zlb);
    return 0;
}

void  Cp9LIQsFd6 (int yzdSxFU6Zlb) {
    for (int hYZjwm = 0;
    yzdSxFU6Zlb > hYZjwm; hYZjwm = hYZjwm + (702 - 701)) {
        for (int Qb3iMTvuyKEc = 0;
        yzdSxFU6Zlb > Qb3iMTvuyKEc; Qb3iMTvuyKEc = Qb3iMTvuyKEc +(132 - 131)) {
            cin >> PXQh9LCwar[hYZjwm][Qb3iMTvuyKEc];
        }
    }
}

void  fazOk7xX1D (int yzdSxFU6Zlb) {
    Cp9LIQsFd6 (yzdSxFU6Zlb);
    cout << t50P4Y7N (yzdSxFU6Zlb) << endl;
}

int t50P4Y7N (int yzdSxFU6Zlb) {
    int hDVba3Oiwtl;
    int ngKjpe;
    if (!((512 - 511) != yzdSxFU6Zlb))
        return 0;
    for (int hYZjwm = 0;
    hYZjwm < yzdSxFU6Zlb; hYZjwm = hYZjwm + 1) {
        ngKjpe = (65848 - 313);
        for (int Qb3iMTvuyKEc = 0;
        Qb3iMTvuyKEc < yzdSxFU6Zlb; Qb3iMTvuyKEc = Qb3iMTvuyKEc +1)
            if (PXQh9LCwar[hYZjwm][Qb3iMTvuyKEc] < ngKjpe)
                ngKjpe = PXQh9LCwar[hYZjwm][Qb3iMTvuyKEc];
        for (int Qb3iMTvuyKEc = 0;
        Qb3iMTvuyKEc < yzdSxFU6Zlb; Qb3iMTvuyKEc = Qb3iMTvuyKEc +1)
            PXQh9LCwar[hYZjwm][Qb3iMTvuyKEc] -= ngKjpe;
    }
    for (int hYZjwm = 0;
    hYZjwm < yzdSxFU6Zlb; hYZjwm = hYZjwm + 1) {
        ngKjpe = 65535;
        for (int Qb3iMTvuyKEc = 0;
        Qb3iMTvuyKEc < yzdSxFU6Zlb; Qb3iMTvuyKEc = Qb3iMTvuyKEc +1)
            if (PXQh9LCwar[Qb3iMTvuyKEc][hYZjwm] < ngKjpe)
                ngKjpe = PXQh9LCwar[Qb3iMTvuyKEc][hYZjwm];
        for (int Qb3iMTvuyKEc = 0;
        Qb3iMTvuyKEc < yzdSxFU6Zlb; Qb3iMTvuyKEc = Qb3iMTvuyKEc +1)
            PXQh9LCwar[Qb3iMTvuyKEc][hYZjwm] -= ngKjpe;
    }
    hDVba3Oiwtl = PXQh9LCwar[1][1];
    for (int hYZjwm = (155 - 153);
    hYZjwm < yzdSxFU6Zlb; hYZjwm = hYZjwm + 1)
        for (int Qb3iMTvuyKEc = 0;
        Qb3iMTvuyKEc < yzdSxFU6Zlb; Qb3iMTvuyKEc = Qb3iMTvuyKEc +1)
            PXQh9LCwar[hYZjwm - 1][Qb3iMTvuyKEc] = PXQh9LCwar[hYZjwm][Qb3iMTvuyKEc];
    for (int hYZjwm = 2;
    hYZjwm < yzdSxFU6Zlb; hYZjwm = hYZjwm + 1)
        for (int Qb3iMTvuyKEc = 0;
        Qb3iMTvuyKEc < yzdSxFU6Zlb; Qb3iMTvuyKEc++)
            PXQh9LCwar[Qb3iMTvuyKEc][hYZjwm - 1] = PXQh9LCwar[Qb3iMTvuyKEc][hYZjwm];
    return hDVba3Oiwtl + t50P4Y7N (yzdSxFU6Zlb - 1);
}

void  nSeH5lksyREB (int yzdSxFU6Zlb) {
    for (int hYZjwm = 0;
    hYZjwm < yzdSxFU6Zlb; hYZjwm = hYZjwm + 1) {
        for (int Qb3iMTvuyKEc = 0;
        Qb3iMTvuyKEc < yzdSxFU6Zlb; Qb3iMTvuyKEc++) {
            cout << PXQh9LCwar[hYZjwm][Qb3iMTvuyKEc] << " ";
        }
        cout << endl;
    }
}

