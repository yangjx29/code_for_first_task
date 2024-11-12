int CBovtqMr4s [(561 - 460)] [101] [101];
int countsum;

void  cal (int hHIJbRefwBk, int num) {
    if (hHIJbRefwBk != (502 - 501)) {
        int l6HYmxdFTeS [hHIJbRefwBk];
        int cTSHLiYWc [hHIJbRefwBk];
        for (int BVPlya = (817 - 817);
        BVPlya <= hHIJbRefwBk - (723 - 722); ++BVPlya) {
            for (int j = (723 - 723);
            j <= hHIJbRefwBk - (659 - 658); ++j) {
                if (j == (755 - 755))
                    l6HYmxdFTeS[BVPlya] = CBovtqMr4s[num][BVPlya][j];
                else
                    l6HYmxdFTeS[BVPlya] = min (l6HYmxdFTeS[BVPlya], CBovtqMr4s[num][BVPlya][j]);
            }
            if (l6HYmxdFTeS[BVPlya] != (974 - 974))
                for (int j = (818 - 818);
                j <= hHIJbRefwBk - (776 - 775); ++j)
                    CBovtqMr4s[num][BVPlya][j] = CBovtqMr4s[num][BVPlya][j] - l6HYmxdFTeS[BVPlya];
        }
        for (int BVPlya = (652 - 652);
        BVPlya <= hHIJbRefwBk - (104 - 103); ++BVPlya) {
            for (int j = (167 - 167);
            j <= hHIJbRefwBk - (807 - 806); ++j) {
                if (j == (875 - 875))
                    cTSHLiYWc[BVPlya] = CBovtqMr4s[num][j][BVPlya];
                else
                    cTSHLiYWc[BVPlya] = min (cTSHLiYWc[BVPlya], CBovtqMr4s[num][j][BVPlya]);
            }
            if (cTSHLiYWc[BVPlya] != (190 - 190))
                for (int j = (984 - 984);
                j <= hHIJbRefwBk - (477 - 476); ++j)
                    CBovtqMr4s[num][j][BVPlya] = CBovtqMr4s[num][j][BVPlya] - cTSHLiYWc[BVPlya];
        }
        countsum += CBovtqMr4s[num][(816 - 815)][(344 - 343)];
        for (int BVPlya = (670 - 668);
        BVPlya <= hHIJbRefwBk - (670 - 669); ++BVPlya)
            for (int j = (193 - 193);
            j <= hHIJbRefwBk - (943 - 942); ++j)
                CBovtqMr4s[num][j][BVPlya -(940 - 939)] = CBovtqMr4s[num][j][BVPlya];
        for (int BVPlya = (38 - 36);
        BVPlya <= hHIJbRefwBk - (534 - 533); ++BVPlya)
            for (int j = (632 - 632);
            j <= hHIJbRefwBk - (217 - 216); ++j)
                CBovtqMr4s[num][BVPlya -(30 - 29)][j] = CBovtqMr4s[num][BVPlya][j];
        cal (hHIJbRefwBk - (172 - 171), num);
    }
}

int main () {
    int BB8NdzI;
    cin >> BB8NdzI;
    for (int BVPlya = (218 - 218);
    BVPlya <= BB8NdzI -(973 - 972); ++BVPlya)
        for (int j = (495 - 495);
        j <= BB8NdzI -1; ++j)
            for (int k = 0;
            k <= BB8NdzI -1; ++k)
                cin >> CBovtqMr4s[BVPlya][j][k];
    for (int BVPlya = 0;
    BVPlya <= BB8NdzI -1; ++BVPlya) {
        countsum = 0;
        cal (BB8NdzI, BVPlya);
        cout << countsum << endl;
    }
    return 0;
}

