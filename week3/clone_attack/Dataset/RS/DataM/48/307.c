int aTRsxBom [(632 - 617)] [(884 - 869)] = {(958 - 958)};

void  change () {
    int DazdAfhWMr [(114 - 99)] [15] = {(678 - 678)};
    for (int QScpDNq = (150 - 149);
    (403 - 394) >= QScpDNq; QScpDNq++)
        for (int MFsqRa = (895 - 894);
        (834 - 825) >= MFsqRa; MFsqRa++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (!((920 - 920) == aTRsxBom[QScpDNq][MFsqRa])) {
                int k = aTRsxBom[QScpDNq][MFsqRa] * (766 - 764);
                DazdAfhWMr[QScpDNq][MFsqRa] = DazdAfhWMr[QScpDNq][MFsqRa] + k;
                DazdAfhWMr[QScpDNq -(995 - 994)][MFsqRa] += aTRsxBom[QScpDNq][MFsqRa];
                DazdAfhWMr[QScpDNq +(988 - 987)][MFsqRa] = DazdAfhWMr[QScpDNq +(988 - 987)][MFsqRa] + aTRsxBom[QScpDNq][MFsqRa];
                DazdAfhWMr[QScpDNq][MFsqRa +(236 - 235)] = DazdAfhWMr[QScpDNq][MFsqRa +(236 - 235)] + aTRsxBom[QScpDNq][MFsqRa];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                DazdAfhWMr[QScpDNq][MFsqRa -(332 - 331)] = DazdAfhWMr[QScpDNq][MFsqRa -(332 - 331)] + aTRsxBom[QScpDNq][MFsqRa];
                DazdAfhWMr[QScpDNq -(386 - 385)][MFsqRa -(171 - 170)] = DazdAfhWMr[QScpDNq -(386 - 385)][MFsqRa -(171 - 170)] + aTRsxBom[QScpDNq][MFsqRa];
                DazdAfhWMr[QScpDNq +(891 - 890)][MFsqRa -(433 - 432)] = DazdAfhWMr[QScpDNq +(891 - 890)][MFsqRa -(433 - 432)] + aTRsxBom[QScpDNq][MFsqRa];
                DazdAfhWMr[QScpDNq -(243 - 242)][MFsqRa +1] = DazdAfhWMr[QScpDNq -(243 - 242)][MFsqRa +1] + aTRsxBom[QScpDNq][MFsqRa];
                DazdAfhWMr[QScpDNq +1][MFsqRa +1] = DazdAfhWMr[QScpDNq +1][MFsqRa +1] + aTRsxBom[QScpDNq][MFsqRa];
            };
        }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int QScpDNq = 1;
    QScpDNq <= (919 - 910); QScpDNq++)
        for (int MFsqRa = 1;
        MFsqRa <= 9; MFsqRa++)
            aTRsxBom[QScpDNq][MFsqRa] = DazdAfhWMr[QScpDNq][MFsqRa];
}

int main () {
    int m = (962 - 962), n = 0;
    cin >> m >> n;
    aTRsxBom[(461 - 456)][5] = m;
    for (int QScpDNq = 0;
    QScpDNq < n; QScpDNq++)
        change ();
    for (int QScpDNq = 1;
    QScpDNq <= 9; QScpDNq++) {
        for (int MFsqRa = 1;
        MFsqRa < 9; MFsqRa++)
            cout << aTRsxBom[QScpDNq][MFsqRa] << ' ';
        cout << aTRsxBom[QScpDNq][9] << endl;
    }
    return 0;
}

