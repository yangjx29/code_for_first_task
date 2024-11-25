int main () {
    char VpxgaQveBY5d [(828 - 725)] [(161 - 57)];
    int WvuhzUk6, MJu1RMFvld2, YbGfyaW8KVd2, BJpR3dH = (331 - 331), LOfjmyC [(1087 - 987)] [(704 - 604)];
    int jPu3yV7RN, fPyilLYRNxD;
    for (WvuhzUk6 = (953 - 953); jPu3yV7RN + (122 - 121) >= WvuhzUk6; WvuhzUk6 = WvuhzUk6 +(781 - 780)) {
        VpxgaQveBY5d[(522 - 522)][WvuhzUk6] = '#';
        VpxgaQveBY5d[jPu3yV7RN + (560 - 559)][WvuhzUk6] = '#';
    }
    for (WvuhzUk6 = (513 - 513); WvuhzUk6 <= jPu3yV7RN + (92 - 91); WvuhzUk6 = WvuhzUk6 +(442 - 441)) {
        VpxgaQveBY5d[WvuhzUk6][(51 - 51)] = '#';
        VpxgaQveBY5d[WvuhzUk6][jPu3yV7RN + (566 - 565)] = '#';
    }
    scanf ("%d", &jPu3yV7RN);
    getchar ();
    for (WvuhzUk6 = (165 - 164); WvuhzUk6 <= jPu3yV7RN; WvuhzUk6 = WvuhzUk6 +(692 - 691)) {
        getchar ();
        for (MJu1RMFvld2 = (870 - 869); jPu3yV7RN >= MJu1RMFvld2; MJu1RMFvld2 = MJu1RMFvld2 +(216 - 215)) {
            scanf ("%c", &VpxgaQveBY5d[WvuhzUk6][MJu1RMFvld2]);
        }
    }
    scanf ("%d", &fPyilLYRNxD);
    fPyilLYRNxD = fPyilLYRNxD - (326 - 325);
    for (; fPyilLYRNxD = fPyilLYRNxD - (645 - 644);) {
        memset (LOfjmyC, (403 - 403), sizeof (LOfjmyC));
        for (MJu1RMFvld2 = (659 - 658); jPu3yV7RN >= MJu1RMFvld2; MJu1RMFvld2 = MJu1RMFvld2 +(594 - 593)) {
            for (YbGfyaW8KVd2 = (845 - 844); jPu3yV7RN >= YbGfyaW8KVd2; YbGfyaW8KVd2 = YbGfyaW8KVd2 +1) {
                if (!('@' != VpxgaQveBY5d[MJu1RMFvld2][YbGfyaW8KVd2])) {
                    LOfjmyC[MJu1RMFvld2][YbGfyaW8KVd2] = (117 - 116);
                }
            }
        }
        for (WvuhzUk6 = (414 - 413); WvuhzUk6 <= jPu3yV7RN; WvuhzUk6 = WvuhzUk6 +1) {
            for (YbGfyaW8KVd2 = (410 - 409); YbGfyaW8KVd2 <= jPu3yV7RN; YbGfyaW8KVd2 = YbGfyaW8KVd2 +1) {
                if (!((132 - 131) != LOfjmyC[WvuhzUk6][YbGfyaW8KVd2])) {
                    if (VpxgaQveBY5d[WvuhzUk6][YbGfyaW8KVd2 +(919 - 918)] != '#')
                        VpxgaQveBY5d[WvuhzUk6][YbGfyaW8KVd2 +(407 - 406)] = '@';
                    if (VpxgaQveBY5d[WvuhzUk6][YbGfyaW8KVd2 -(929 - 928)] != '#')
                        VpxgaQveBY5d[WvuhzUk6][YbGfyaW8KVd2 -(478 - 477)] = '@';
                    if (VpxgaQveBY5d[WvuhzUk6 -(285 - 284)][YbGfyaW8KVd2] != '#')
                        VpxgaQveBY5d[WvuhzUk6 -(331 - 330)][YbGfyaW8KVd2] = '@';
                    if (VpxgaQveBY5d[WvuhzUk6 +(632 - 631)][YbGfyaW8KVd2] != '#')
                        VpxgaQveBY5d[WvuhzUk6 +(998 - 997)][YbGfyaW8KVd2] = '@';
                }
            }
        }
        for (WvuhzUk6 = (387 - 387); WvuhzUk6 <= jPu3yV7RN + (779 - 778); WvuhzUk6++) {
            VpxgaQveBY5d[(550 - 550)][WvuhzUk6] = '#';
            VpxgaQveBY5d[jPu3yV7RN + (169 - 168)][WvuhzUk6] = '#';
        }
        for (WvuhzUk6 = (658 - 658); WvuhzUk6 <= jPu3yV7RN + (443 - 442); WvuhzUk6++) {
            VpxgaQveBY5d[WvuhzUk6][(282 - 282)] = '#';
            VpxgaQveBY5d[WvuhzUk6][jPu3yV7RN + (885 - 884)] = '#';
        }
    }
    for (WvuhzUk6 = (133 - 132); WvuhzUk6 < jPu3yV7RN + (539 - 538); WvuhzUk6++) {
        for (MJu1RMFvld2 = (451 - 450); MJu1RMFvld2 < jPu3yV7RN + (416 - 415); MJu1RMFvld2++) {
            if (VpxgaQveBY5d[WvuhzUk6][MJu1RMFvld2] == '@')
                BJpR3dH = BJpR3dH +1;
        }
    }
    printf ("%d\n", BJpR3dH);
    return (272 - 272);
}

