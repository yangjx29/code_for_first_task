int main () {
    void  xViHOyRNx4W8 (char OiEW7UfxQN [(471 - 271)]);
    char OiEW7UfxQN [200];
    for (; !(EOF == scanf ("%s", OiEW7UfxQN));) {
        xViHOyRNx4W8 (OiEW7UfxQN);
        printf ("%s\n", OiEW7UfxQN);
    }
    return 0;
}

void  xViHOyRNx4W8 (char OiEW7UfxQN [200]) {
    int G6FQGMHE8JjU [200];
    int L5NYGycZDxX3 [200];
    int pa = 0, vQytXmI4Cq = 0, XQichvqZ9yC, at4fUXCbWH, RobE3GTaj4, QJToZAbeYSKa, l;
    printf ("%s\n", OiEW7UfxQN);
    pa = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    vQytXmI4Cq = 0;
    l = strlen (OiEW7UfxQN) - 1;
    {
        QJToZAbeYSKa = 0;
        while (l >= QJToZAbeYSKa) {
            if (!('(' != OiEW7UfxQN[QJToZAbeYSKa])) {
                L5NYGycZDxX3[pa] = QJToZAbeYSKa;
                pa++;
            }
            else {
                if (!(')' != OiEW7UfxQN[QJToZAbeYSKa])) {
                    G6FQGMHE8JjU[vQytXmI4Cq] = QJToZAbeYSKa;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    vQytXmI4Cq = vQytXmI4Cq + 1;
                }
                else
                    OiEW7UfxQN[QJToZAbeYSKa] = ' ';
            }
            QJToZAbeYSKa++;
        };
    }
    {
        QJToZAbeYSKa = pa - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= QJToZAbeYSKa) {
            for (RobE3GTaj4 = 0; vQytXmI4Cq > RobE3GTaj4; RobE3GTaj4++) {
                XQichvqZ9yC = L5NYGycZDxX3[QJToZAbeYSKa];
                at4fUXCbWH = G6FQGMHE8JjU[RobE3GTaj4];
                if (L5NYGycZDxX3[QJToZAbeYSKa] < G6FQGMHE8JjU[RobE3GTaj4] && OiEW7UfxQN[at4fUXCbWH] != ' ') {
                    OiEW7UfxQN[XQichvqZ9yC] = ' ';
                    OiEW7UfxQN[at4fUXCbWH] = ' ';
                    break;
                };
            }
            if (RobE3GTaj4 == vQytXmI4Cq) {
                XQichvqZ9yC = L5NYGycZDxX3[QJToZAbeYSKa];
                OiEW7UfxQN[XQichvqZ9yC] = '$';
            }
            QJToZAbeYSKa--;
        };
    }
    for (RobE3GTaj4 = 0; RobE3GTaj4 < vQytXmI4Cq; RobE3GTaj4++) {
        at4fUXCbWH = G6FQGMHE8JjU[RobE3GTaj4];
        if (OiEW7UfxQN[at4fUXCbWH] == ')')
            OiEW7UfxQN[at4fUXCbWH] = '?';
    };
}

