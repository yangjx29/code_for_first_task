int Qfr6E5DGiF;
int oPixLJ;
int ZqcFBJe [(464 - 455)] [(998 - 989)] = {(848 - 848)};

void  mk8GKAxJz3CR (int i3x8VsCi) {
    int bBm8Up [(582 - 573)] [(45 - 36)] = {(161 - 161)};
    int QKBrFQRhU4ej, T7DzcaTH;
    for (QKBrFQRhU4ej = (359 - 359); (792 - 784) >= QKBrFQRhU4ej; QKBrFQRhU4ej++)
        for (T7DzcaTH = (118 - 118); T7DzcaTH <= (545 - 537); T7DzcaTH++) {
            if (ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH] != (48 - 48)) {
                bBm8Up[QKBrFQRhU4ej][T7DzcaTH] += (204 - 202) * ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej -(490 - 489)][T7DzcaTH -(160 - 159)] += ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej -(994 - 993)][T7DzcaTH] += ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej -(289 - 288)][T7DzcaTH +(729 - 728)] += ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej][T7DzcaTH +(150 - 149)] += ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej][T7DzcaTH -(561 - 560)] += ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej +(115 - 114)][T7DzcaTH -(965 - 964)] += ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej +(912 - 911)][T7DzcaTH] = bBm8Up[QKBrFQRhU4ej +(912 - 911)][T7DzcaTH] + ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                bBm8Up[QKBrFQRhU4ej +(797 - 796)][T7DzcaTH +(923 - 922)] = bBm8Up[QKBrFQRhU4ej +(797 - 796)][T7DzcaTH +(923 - 922)] + ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
            }
        }
    {
        QKBrFQRhU4ej = 687 - 687;
        while (QKBrFQRhU4ej <= (719 - 711)) {
            for (T7DzcaTH = (763 - 763); T7DzcaTH <= (599 - 591); T7DzcaTH++)
                ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH] = bBm8Up[QKBrFQRhU4ej][T7DzcaTH];
            QKBrFQRhU4ej++;
        }
    }
    if (i3x8VsCi == oPixLJ) {
        {
            QKBrFQRhU4ej = 879 - 879;
            while (QKBrFQRhU4ej <= (235 - 227)) {
                {
                    T7DzcaTH = 483 - 483;
                    while (T7DzcaTH <= (819 - 811)) {
                        if (T7DzcaTH != (506 - 498))
                            cout << ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH] << " ";
                        else
                            cout << ZqcFBJe[QKBrFQRhU4ej][T7DzcaTH];
                        T7DzcaTH++;
                    }
                }
                if (QKBrFQRhU4ej != 8)
                    cout << endl;
                QKBrFQRhU4ej++;
            }
        }
        return;
    }
    mk8GKAxJz3CR (i3x8VsCi + 1);
}

int main () {
    cin >> Qfr6E5DGiF >> oPixLJ;
    ZqcFBJe[(448 - 444)][(827 - 823)] = Qfr6E5DGiF;
    mk8GKAxJz3CR (1);
    return (76 - 76);
}

