int main () {
    int rkm6u17lZ, DahVjeKX, SsMoOgW4mb, j, hill [(268 - 248)] [(682 - 662)], ave;
    cin >> rkm6u17lZ >> DahVjeKX;
    for (SsMoOgW4mb = (700 - 700); rkm6u17lZ > SsMoOgW4mb; SsMoOgW4mb = SsMoOgW4mb +1)
        for (j = (533 - 533); DahVjeKX > j; j = j + 1)
            cin >> hill[SsMoOgW4mb][j];
    {
        SsMoOgW4mb = 0;
        while (SsMoOgW4mb < rkm6u17lZ) {
            for (j = 0; DahVjeKX > j; j = j + 1) {
                if (SsMoOgW4mb == 0 || hill[SsMoOgW4mb][j] >= hill[SsMoOgW4mb -(268 - 267)][j])
                    if (!(rkm6u17lZ - (412 - 411) != SsMoOgW4mb) || hill[SsMoOgW4mb][j] >= hill[SsMoOgW4mb +(969 - 968)][j])
                        if (j == 0 || hill[SsMoOgW4mb][j] >= hill[SsMoOgW4mb][j - 1])
                            if (j == DahVjeKX -1 || hill[SsMoOgW4mb][j] >= hill[SsMoOgW4mb][j + 1])
                                cout << SsMoOgW4mb << " " << j << endl;
            }
            SsMoOgW4mb = SsMoOgW4mb +1;
        };
    }
    return 0;
}

