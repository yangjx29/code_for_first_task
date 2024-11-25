int main () {
    int A6WkKXGi, LNx9IQGLmiVT, IfAKhzq1M, vDCRa2ydAmn, DrIApW [100] [100], KjsivBm0Z [100] [100], VHVf4LiDO [100] [100];
    int KgvloVanY, EEw5oB, DRkePB7Fz8b;
    cin >> A6WkKXGi >> LNx9IQGLmiVT;
    for (KgvloVanY = (237 - 237); A6WkKXGi > KgvloVanY; KgvloVanY = KgvloVanY +1)
        for (EEw5oB = 0; LNx9IQGLmiVT > EEw5oB; EEw5oB = EEw5oB +1) {
            cin >> DrIApW[KgvloVanY][EEw5oB];
        }
    cin >> IfAKhzq1M >> vDCRa2ydAmn;
    for (KgvloVanY = 0; IfAKhzq1M > KgvloVanY; KgvloVanY = KgvloVanY +1)
        for (EEw5oB = 0; vDCRa2ydAmn > EEw5oB; EEw5oB = EEw5oB +1) {
            cin >> KjsivBm0Z[KgvloVanY][EEw5oB];
        }
    for (KgvloVanY = 0; A6WkKXGi > KgvloVanY; KgvloVanY = KgvloVanY +1)
        for (EEw5oB = 0; vDCRa2ydAmn > EEw5oB; EEw5oB++) {
            for (DRkePB7Fz8b = 0; LNx9IQGLmiVT > DRkePB7Fz8b; DRkePB7Fz8b = DRkePB7Fz8b +1) {
                VHVf4LiDO[KgvloVanY][EEw5oB] += DrIApW[KgvloVanY][DRkePB7Fz8b] * KjsivBm0Z[DRkePB7Fz8b][EEw5oB];
            }
        }
    for (KgvloVanY = 0; A6WkKXGi > KgvloVanY; KgvloVanY++)
        for (EEw5oB = 0; EEw5oB < vDCRa2ydAmn; EEw5oB++) {
            if (EEw5oB < vDCRa2ydAmn - 1)
                cout << VHVf4LiDO[KgvloVanY][EEw5oB] << " ";
            else
                cout << VHVf4LiDO[KgvloVanY][EEw5oB] << endl;
        }
    return 0;
}

