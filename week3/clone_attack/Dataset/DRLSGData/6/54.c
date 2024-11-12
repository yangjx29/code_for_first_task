int UKhvUTey () {
    int *EQsp2GTxo;
    int UKhvUTey, YafjUkYql8, KlheDdL [10000], KpPiSo7IKjW, OXUuNZj2D8p1, gUrvYy75LTc = 0;
    scanf ("%d %d", &UKhvUTey, &YafjUkYql8);
    for (KpPiSo7IKjW = 0; KpPiSo7IKjW < UKhvUTey *YafjUkYql8; KpPiSo7IKjW = KpPiSo7IKjW +1) {
        scanf ("%d", EQsp2GTxo +KpPiSo7IKjW);
    }
    for (KpPiSo7IKjW = 0; KpPiSo7IKjW < UKhvUTey; KpPiSo7IKjW = KpPiSo7IKjW +1) {
        if (KpPiSo7IKjW == 0 || KpPiSo7IKjW == UKhvUTey -1) {
            for (OXUuNZj2D8p1 = 0; OXUuNZj2D8p1 < YafjUkYql8; OXUuNZj2D8p1 = OXUuNZj2D8p1 +1) {
                gUrvYy75LTc = gUrvYy75LTc + *(EQsp2GTxo +KpPiSo7IKjW*YafjUkYql8+OXUuNZj2D8p1);
            }
        }
        else {
            for (OXUuNZj2D8p1 = 0; OXUuNZj2D8p1 < YafjUkYql8; OXUuNZj2D8p1 = OXUuNZj2D8p1 +1) {
                if (OXUuNZj2D8p1 == 0 || OXUuNZj2D8p1 == YafjUkYql8 -1)
                    gUrvYy75LTc = gUrvYy75LTc + *(EQsp2GTxo +KpPiSo7IKjW*YafjUkYql8+OXUuNZj2D8p1);
            }
        }
    }
    EQsp2GTxo = KlheDdL;
    return gUrvYy75LTc;
}

int main () {
    int aaq7JBLM, KpPiSo7IKjW, g6MEuXCmV;
    scanf ("%d", &aaq7JBLM);
    for (KpPiSo7IKjW = 1; KpPiSo7IKjW <= aaq7JBLM; KpPiSo7IKjW = KpPiSo7IKjW +1) {
        g6MEuXCmV = UKhvUTey ();
        printf ("%d\n", g6MEuXCmV);
    }
    return 0;
}

