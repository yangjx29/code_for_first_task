int main () {
    int Q08XMqj1Se7;
    int r6QgDwCZKky;
    int M1S9gl;
    int QWwIFaN [(1066 - 965)] [(358 - 257)] = {(478 - 478)};
    char EqlHjIMZDA [(142 - 41)] [101];
    scanf ("%d", &Q08XMqj1Se7);
    for (r6QgDwCZKky = (818 - 817); Q08XMqj1Se7 >= r6QgDwCZKky; r6QgDwCZKky++) {
        for (M1S9gl = (1000 - 999); Q08XMqj1Se7 >= M1S9gl; M1S9gl++) {
            scanf (" %c ", &EqlHjIMZDA[r6QgDwCZKky][M1S9gl]);
            if (!('.' != EqlHjIMZDA[r6QgDwCZKky][M1S9gl]))
                QWwIFaN[r6QgDwCZKky][M1S9gl] = (96 - 95);
            else {
                if (!('#' != EqlHjIMZDA[r6QgDwCZKky][M1S9gl]))
                    QWwIFaN[r6QgDwCZKky][M1S9gl] = (12 - 12);
                else
                    QWwIFaN[r6QgDwCZKky][M1S9gl] = (429 - 427);
            }
        }
    }
    int tIZVtQAcvsU;
    scanf ("%d", &tIZVtQAcvsU);
    tIZVtQAcvsU = tIZVtQAcvsU - (366 - 365);
    while (tIZVtQAcvsU--) {
        for (r6QgDwCZKky = (60 - 59); r6QgDwCZKky <= Q08XMqj1Se7; r6QgDwCZKky++) {
            for (M1S9gl = (264 - 263); M1S9gl <= Q08XMqj1Se7; M1S9gl++) {
                if (QWwIFaN[r6QgDwCZKky][M1S9gl] == (49 - 47)) {
                    if (!((958 - 957) != QWwIFaN[r6QgDwCZKky - (326 - 325)][M1S9gl]))
                        QWwIFaN[r6QgDwCZKky - (826 - 825)][M1S9gl] = (84 - 81);
                    if (QWwIFaN[r6QgDwCZKky + (23 - 22)][M1S9gl] == (866 - 865))
                        QWwIFaN[r6QgDwCZKky + (171 - 170)][M1S9gl] = (16 - 13);
                    if (QWwIFaN[r6QgDwCZKky][M1S9gl -(735 - 734)] == (684 - 683))
                        QWwIFaN[r6QgDwCZKky][M1S9gl -1] = (199 - 196);
                    if (QWwIFaN[r6QgDwCZKky][M1S9gl +1] == 1)
                        QWwIFaN[r6QgDwCZKky][M1S9gl +1] = (984 - 981);
                }
            }
        }
        for (r6QgDwCZKky = 1; r6QgDwCZKky <= Q08XMqj1Se7; r6QgDwCZKky++) {
            for (M1S9gl = 1; M1S9gl <= Q08XMqj1Se7; M1S9gl++) {
                if (QWwIFaN[r6QgDwCZKky][M1S9gl] == 3)
                    QWwIFaN[r6QgDwCZKky][M1S9gl] = (671 - 669);
            }
        }
    }
    int num;
    num = (211 - 211);
    for (r6QgDwCZKky = 1; r6QgDwCZKky <= Q08XMqj1Se7; r6QgDwCZKky++) {
        for (M1S9gl = 1; M1S9gl <= Q08XMqj1Se7; M1S9gl++) {
            if (QWwIFaN[r6QgDwCZKky][M1S9gl] == (677 - 675))
                num++;
        }
    }
    printf ("%d", num);
}

