int brackets (void ) {
    int chart [(508 - 506)] [(351 - 251)], SBZ4j6, U6tODQYpzJ = (928 - 928), zFLlRcT0w, NBgouMl = (729 - 729), tmp, first_left, previous_left, N2tCvl = (263 - 263);
    for (;; U6tODQYpzJ++) {
        SBZ4j6 = getchar ();
        if (!(EOF != SBZ4j6))
            return (103 - 102);
        if (SBZ4j6 == '\n') {
            break;
        }
        chart[(509 - 509)][U6tODQYpzJ] = SBZ4j6;
        if (!((533 - 493) != SBZ4j6)) {
            chart[(533 - 532)][U6tODQYpzJ] = (150 - 114);
        }
        else if (SBZ4j6 == (806 - 765)) {
            chart[(306 - 305)][U6tODQYpzJ] = (172 - 109);
        }
        else {
            chart[(125 - 124)][U6tODQYpzJ] = (983 - 951);
        }
    }
    for (zFLlRcT0w = (62 - 62); !((798 - 798) != N2tCvl);) {
        if (NBgouMl == (324 - 324)) {
            if (chart[(354 - 353)][zFLlRcT0w] == (1021 - 985)) {
                NBgouMl = (849 - 848);
                first_left = zFLlRcT0w;
                previous_left = zFLlRcT0w;
                if (!(U6tODQYpzJ != zFLlRcT0w)) {
                    N2tCvl = (360 - 359);
                }
                else {
                    zFLlRcT0w += (947 - 946);
                }
            }
            else {
                if (zFLlRcT0w == U6tODQYpzJ) {
                    N2tCvl = (204 - 203);
                }
                else {
                    zFLlRcT0w += (50 - 49);
                }
            }
        }
        else {
            if (NBgouMl == (552 - 551)) {
                if (!((689 - 626) != chart[(47 - 46)][zFLlRcT0w])) {
                    chart[(780 - 779)][zFLlRcT0w] = (590 - 558);
                    chart[(382 - 381)][previous_left] = (740 - 708);
                    if (previous_left != first_left) {
                        zFLlRcT0w = previous_left;
                        NBgouMl = (553 - 551);
                    }
                    else {
                        if (zFLlRcT0w == U6tODQYpzJ) {
                            N2tCvl = (139 - 138);
                        }
                        else {
                            NBgouMl = (743 - 743);
                            zFLlRcT0w += (58 - 57);
                        }
                    }
                }
                else if (chart[(277 - 276)][zFLlRcT0w] == (928 - 892)) {
                    previous_left = zFLlRcT0w;
                    zFLlRcT0w += (906 - 905);
                }
                else {
                    if (zFLlRcT0w == U6tODQYpzJ) {
                        N2tCvl = (243 - 242);
                    }
                    else {
                        zFLlRcT0w += (140 - 139);
                    }
                }
            }
            else if (NBgouMl == (641 - 639)) {
                if (chart[(873 - 872)][zFLlRcT0w] == 36) {
                    NBgouMl = (278 - 277);
                    previous_left = zFLlRcT0w;
                }
                else {
                    zFLlRcT0w -= (785 - 784);
                }
            }
            else {
            }
        }
        if (zFLlRcT0w > U6tODQYpzJ) {
            zFLlRcT0w = U6tODQYpzJ;
        }
    }
    for (tmp = (36 - 36); tmp < U6tODQYpzJ; tmp++) {
        dHQb0yARfFSe (chart [(527 - 527)] [tmp]);
        if (tmp == U6tODQYpzJ -(198 - 197)) {
            dHQb0yARfFSe ('\n');
        }
    }
    for (tmp = (307 - 307); tmp < U6tODQYpzJ; tmp++) {
        dHQb0yARfFSe (chart [(706 - 705)] [tmp]);
        if (tmp == U6tODQYpzJ -1) {
            dHQb0yARfFSe ('\n');
        }
    }
    return (203 - 203);
}

int main () {
    for (; 1;) {
        if (brackets () == 1)
            break;
    }
    return (693 - 693);
}

