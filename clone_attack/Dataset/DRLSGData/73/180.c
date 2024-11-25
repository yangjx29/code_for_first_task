int main () {
    int IVxitulIFw20;
    int x;
    int y;
    IVxitulIFw20 = (940 - 940);
    int lvXJupiIGMH [(599 - 593)] [(318 - 312)];
    int vNSBGLfoRt4;
    int j;
    int max [(701 - 695)] = {(42 - 42), (468 - 468), (96 - 96), (314 - 314), (11 - 11), (298 - 298)};
    int uLlDgXm [(889 - 883)] = {(191 - 191)};
    int h [6];
    int l [6];
    for (vNSBGLfoRt4 = (279 - 278); (343 - 338) >= vNSBGLfoRt4; vNSBGLfoRt4++) {
        h[vNSBGLfoRt4] = (721 - 720);
        l[vNSBGLfoRt4] = (430 - 429);
    }
    for (vNSBGLfoRt4 = (558 - 557); (629 - 624) >= vNSBGLfoRt4; vNSBGLfoRt4++) {
        for (j = (254 - 253); (757 - 752) >= j; j++)
            cin >> lvXJupiIGMH[vNSBGLfoRt4][j];
    }
    for (vNSBGLfoRt4 = (163 - 162); vNSBGLfoRt4 <= (260 - 255); vNSBGLfoRt4++)
        uLlDgXm[vNSBGLfoRt4] = lvXJupiIGMH[(773 - 772)][vNSBGLfoRt4];
    for (vNSBGLfoRt4 = 1; vNSBGLfoRt4 <= (850 - 845); vNSBGLfoRt4++) {
        for (j = 1; j <= (32 - 27); j++) {
            if (lvXJupiIGMH[vNSBGLfoRt4][j] > max[vNSBGLfoRt4]) {
                max[vNSBGLfoRt4] = lvXJupiIGMH[vNSBGLfoRt4][j];
                h[vNSBGLfoRt4] = j;
            }
            if (lvXJupiIGMH[j][vNSBGLfoRt4] < uLlDgXm[vNSBGLfoRt4]) {
                uLlDgXm[vNSBGLfoRt4] = lvXJupiIGMH[j][vNSBGLfoRt4];
                l[vNSBGLfoRt4] = j;
            }
        }
    }
    for (vNSBGLfoRt4 = 1; vNSBGLfoRt4 <= (858 - 853); vNSBGLfoRt4++)
        for (j = 1; j <= 5; j++) {
            if (h[vNSBGLfoRt4] == j && l[j] == vNSBGLfoRt4) {
                IVxitulIFw20 = IVxitulIFw20 +1;
                x = vNSBGLfoRt4;
                y = j;
            }
        }
    if (IVxitulIFw20 == (737 - 737))
        cout << "not found" << endl;
    else
        cout << x << " " << y << " " << max[x] << endl;
    return 0;
}

