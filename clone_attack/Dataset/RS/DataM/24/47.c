int main () {
    int hJd319ptO5cR, oXb3vYO = (685 - 684), SI0cJovYwg, y8V41A9d = 30, vB5OqdIU = (954 - 954), v;
    char U6ZGRC14 [(3743 - 543)], *p [(394 - 194)], *ax0f7i5QpE94 = NULL, *LIGLXYtUneZf = NULL, *JC2Byx5, *uAEIr0x;
    p[(396 - 396)] = U6ZGRC14;
    for (hJd319ptO5cR = 0; 3200 > hJd319ptO5cR; hJd319ptO5cR = hJd319ptO5cR + 1) {
        cin.get (U6ZGRC14[hJd319ptO5cR]);
        if (!('\n' != U6ZGRC14[hJd319ptO5cR])) {
            p[oXb3vYO] = U6ZGRC14 +hJd319ptO5cR;
            break;
        }
        if (!(' ' != U6ZGRC14[hJd319ptO5cR]) && U6ZGRC14[hJd319ptO5cR - 1] != ',')
            p[oXb3vYO++] = U6ZGRC14 +hJd319ptO5cR;
        if (!(',' != U6ZGRC14[hJd319ptO5cR]))
            p[oXb3vYO++] = U6ZGRC14 +hJd319ptO5cR;
    }
    for (hJd319ptO5cR = 1; oXb3vYO >= hJd319ptO5cR; hJd319ptO5cR = hJd319ptO5cR + 1) {
        v = 0;
        if (!(',' != *p[hJd319ptO5cR - 1]))
            v = 1;
        if (hJd319ptO5cR != 1) {
            if (p[hJd319ptO5cR] - p[hJd319ptO5cR - 1] - 1 - v > vB5OqdIU) {
                vB5OqdIU = p[hJd319ptO5cR] - p[hJd319ptO5cR - 1] - 1;
                ax0f7i5QpE94 = p[hJd319ptO5cR - 1] + 1 + v;
                JC2Byx5 = p[hJd319ptO5cR];
            }
            if (p[hJd319ptO5cR] - p[hJd319ptO5cR - 1] - 1 - v < y8V41A9d) {
                y8V41A9d = p[hJd319ptO5cR] - p[hJd319ptO5cR - 1] - 1 - v;
                LIGLXYtUneZf = p[hJd319ptO5cR - 1] + 1 + v;
                uAEIr0x = p[hJd319ptO5cR];
            };
        }
        else {
            if (p[hJd319ptO5cR] - p[hJd319ptO5cR - 1] > vB5OqdIU) {
                vB5OqdIU = p[hJd319ptO5cR] - p[hJd319ptO5cR - 1];
                ax0f7i5QpE94 = p[hJd319ptO5cR - 1];
                JC2Byx5 = p[hJd319ptO5cR];
            }
            if (p[hJd319ptO5cR] - p[hJd319ptO5cR - 1] < y8V41A9d) {
                y8V41A9d = p[hJd319ptO5cR] - p[hJd319ptO5cR - 1];
                LIGLXYtUneZf = p[hJd319ptO5cR - 1];
                uAEIr0x = p[hJd319ptO5cR];
            };
        };
    }
    for (; ax0f7i5QpE94 != JC2Byx5;) {
        cout << *ax0f7i5QpE94;
        ax0f7i5QpE94++;
    }
    cout << endl;
    while (LIGLXYtUneZf != uAEIr0x) {
        cout << *LIGLXYtUneZf;
        LIGLXYtUneZf++;
    }
    cin.get ();
    return 0;
}

