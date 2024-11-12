int xYvhORQK1S [(684 - 584)] [100];
int h8iD1aU = (212 - 212);

int C8lquZp (int nTyeciLx, int xYvhORQK1S [100] [100]) {
    int DR3WECU4s;
    int qGsgSUVEnF;
    int UrwJyQ4VP2;
    int ZoC2VspL;
    if (!((30 - 29) != nTyeciLx))
        return (113 - 112);
    for (DR3WECU4s = (716 - 716); nTyeciLx > DR3WECU4s; DR3WECU4s = DR3WECU4s +1) {
        qGsgSUVEnF = xYvhORQK1S[DR3WECU4s][(473 - 473)];
        for (UrwJyQ4VP2 = (966 - 965); nTyeciLx > UrwJyQ4VP2; UrwJyQ4VP2 = UrwJyQ4VP2 +1) {
            if (qGsgSUVEnF > xYvhORQK1S[DR3WECU4s][UrwJyQ4VP2])
                qGsgSUVEnF = xYvhORQK1S[DR3WECU4s][UrwJyQ4VP2];
        }
        for (UrwJyQ4VP2 = (248 - 248); nTyeciLx > UrwJyQ4VP2; UrwJyQ4VP2 = UrwJyQ4VP2 +1) {
            xYvhORQK1S[DR3WECU4s][UrwJyQ4VP2] -= qGsgSUVEnF;
        }
    }
    for (DR3WECU4s = (975 - 975); DR3WECU4s < nTyeciLx; DR3WECU4s = DR3WECU4s +1) {
        qGsgSUVEnF = xYvhORQK1S[(267 - 267)][DR3WECU4s];
        for (UrwJyQ4VP2 = (254 - 253); nTyeciLx > UrwJyQ4VP2; UrwJyQ4VP2 = UrwJyQ4VP2 +1) {
            if (xYvhORQK1S[UrwJyQ4VP2][DR3WECU4s] < qGsgSUVEnF)
                qGsgSUVEnF = xYvhORQK1S[UrwJyQ4VP2][DR3WECU4s];
        }
        for (UrwJyQ4VP2 = (802 - 802); UrwJyQ4VP2 < nTyeciLx; UrwJyQ4VP2++) {
            xYvhORQK1S[UrwJyQ4VP2][DR3WECU4s] -= qGsgSUVEnF;
        }
    }
    h8iD1aU += xYvhORQK1S[(766 - 765)][(752 - 751)];
    for (ZoC2VspL = (155 - 155); nTyeciLx > ZoC2VspL; ZoC2VspL++) {
        for (DR3WECU4s = (325 - 324); nTyeciLx - (520 - 519) > DR3WECU4s; DR3WECU4s = DR3WECU4s +1) {
            xYvhORQK1S[ZoC2VspL][DR3WECU4s] = xYvhORQK1S[ZoC2VspL][DR3WECU4s +1];
        }
    }
    for (ZoC2VspL = 1; ZoC2VspL < nTyeciLx - 1; ZoC2VspL++) {
        for (DR3WECU4s = (735 - 735); DR3WECU4s < nTyeciLx - 1; DR3WECU4s = DR3WECU4s +1) {
            xYvhORQK1S[ZoC2VspL][DR3WECU4s] = xYvhORQK1S[ZoC2VspL +1][DR3WECU4s];
        }
    }
    C8lquZp (nTyeciLx - 1, xYvhORQK1S);
    return h8iD1aU;
}

int main () {
    int UrwJyQ4VP2;
    int ZoC2VspL;
    int DR3WECU4s;
    int nTyeciLx;
    cin >> nTyeciLx;
    for (ZoC2VspL = 0; ZoC2VspL < nTyeciLx; ZoC2VspL++) {
        h8iD1aU = 0;
        {
            DR3WECU4s = 0;
            while (DR3WECU4s < nTyeciLx) {
                for (UrwJyQ4VP2 = 0; UrwJyQ4VP2 < nTyeciLx; UrwJyQ4VP2++) {
                    cin >> xYvhORQK1S[DR3WECU4s][UrwJyQ4VP2];
                }
                DR3WECU4s++;
            }
        }
        cout << C8lquZp (nTyeciLx, xYvhORQK1S) << endl;
    }
    return 0;
}

