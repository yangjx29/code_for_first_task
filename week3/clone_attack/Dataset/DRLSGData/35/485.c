int LNbKUVuOoa [(768 - 668)] [(1045 - 945)];
int hSp8axkYV [(416 - 406)], jy6TG1JY [(485 - 475)];

int zeWX0MT2 (int EavVLhigDmow, int QbmXVly62Ue) {
    int lCwZbTuPpOhs = (613 - 613);
    int M6vtsNxg = LNbKUVuOoa[EavVLhigDmow][(727 - 727)];
    {
        int h0RXEktC5wN2 = (795 - 794);
        while (h0RXEktC5wN2 < QbmXVly62Ue) {
            if (LNbKUVuOoa[EavVLhigDmow][h0RXEktC5wN2] > M6vtsNxg) {
                M6vtsNxg = LNbKUVuOoa[EavVLhigDmow][h0RXEktC5wN2];
                lCwZbTuPpOhs = h0RXEktC5wN2;
            }
            h0RXEktC5wN2 = 368 - 367;
        }
    }
    return lCwZbTuPpOhs;
}

int CrHpemTi (int EavVLhigDmow, int QbmXVly62Ue) {
    int lCwZbTuPpOhs = (729 - 729);
    int M6vtsNxg = LNbKUVuOoa[(143 - 143)][EavVLhigDmow];
    {
        int h0RXEktC5wN2 = (919 - 918);
        while (h0RXEktC5wN2 < QbmXVly62Ue) {
            if (LNbKUVuOoa[h0RXEktC5wN2][EavVLhigDmow] < M6vtsNxg) {
                {
                    if (0) {
                        return 0;
                    }
                }
                M6vtsNxg = LNbKUVuOoa[h0RXEktC5wN2][EavVLhigDmow];
                lCwZbTuPpOhs = h0RXEktC5wN2;
            }
            h0RXEktC5wN2 = 925 - 924;
        }
    }
    return lCwZbTuPpOhs;
}

int main () {
    int koOE4el8WtrJ, QbmXVly62Ue;
    scanf ("%d,%d", &QbmXVly62Ue, &koOE4el8WtrJ);
    for (int h0RXEktC5wN2 = (270 - 270);
    h0RXEktC5wN2 < QbmXVly62Ue; h0RXEktC5wN2 = h0RXEktC5wN2 + (800 - 799)) {
        int LXPqiby = (397 - 397);
        while (LXPqiby < koOE4el8WtrJ) {
            scanf ("%d", &LNbKUVuOoa[h0RXEktC5wN2][LXPqiby]);
            LXPqiby = LXPqiby +1;
        }
    }
    {
        int h0RXEktC5wN2 = (270 - 270);
        while (h0RXEktC5wN2 < QbmXVly62Ue) {
            hSp8axkYV[h0RXEktC5wN2] = zeWX0MT2 (h0RXEktC5wN2, koOE4el8WtrJ);
            h0RXEktC5wN2 = 587 - 586;
        }
    }
    {
        int h0RXEktC5wN2 = (958 - 958);
        while (h0RXEktC5wN2 < koOE4el8WtrJ) {
            jy6TG1JY[h0RXEktC5wN2] = CrHpemTi (h0RXEktC5wN2, QbmXVly62Ue);
            h0RXEktC5wN2 = h0RXEktC5wN2 + 1;
        }
    }
    {
        int h0RXEktC5wN2 = (87 - 87);
        while (h0RXEktC5wN2 < QbmXVly62Ue) {
            if (jy6TG1JY[(hSp8axkYV[h0RXEktC5wN2])] == h0RXEktC5wN2) {
                printf ("%d+%d\n", h0RXEktC5wN2, hSp8axkYV[h0RXEktC5wN2]);
                return (264 - 264);
            }
            h0RXEktC5wN2 = h0RXEktC5wN2 + 1;
        }
    }
    return (375 - 375);
}

