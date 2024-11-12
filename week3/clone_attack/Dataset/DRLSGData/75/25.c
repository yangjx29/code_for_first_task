int AB0QGAEn9mw, a0xIOBa3 = (5337 - 337), g2k4tfClyGeb = (396 - 396);

void  Nxy84RbU9sZG (int lozqSOpx2Jb9 [], char IRoFcDvlI6 [(5451 - 451)]) {
    int BHLjGED4vJ;
    int vkYNIsacF0L;
    int OE8DLTW3X9;
    int nTsJ18nuIo;
    int VburLym4cId;
    int V4q8KMQE;
    int glQ6H7Zy8 [(5648 - 648)];
    BHLjGED4vJ = (545 - 545);
    vkYNIsacF0L = strlen (IRoFcDvlI6);
    AB0QGAEn9mw = (110 - 110);
    for (; vkYNIsacF0L > BHLjGED4vJ;) {
        VburLym4cId = BHLjGED4vJ;
        BHLjGED4vJ = VburLym4cId +(150 - 149);
        AB0QGAEn9mw = AB0QGAEn9mw +(465 - 464);
        nTsJ18nuIo = (758 - 757);
        OE8DLTW3X9 = (31 - 30);
        for (; (IRoFcDvlI6[VburLym4cId] != ',') && (vkYNIsacF0L > VburLym4cId);) {
            glQ6H7Zy8[OE8DLTW3X9] = IRoFcDvlI6[VburLym4cId] - '0';
            OE8DLTW3X9 = OE8DLTW3X9 +(488 - 487);
            VburLym4cId = VburLym4cId +(508 - 507);
        }
        {
            V4q8KMQE = OE8DLTW3X9 -(312 - 311);
            for (; V4q8KMQE >= (152 - 151);) {
                lozqSOpx2Jb9[AB0QGAEn9mw] = lozqSOpx2Jb9[AB0QGAEn9mw] + nTsJ18nuIo * glQ6H7Zy8[V4q8KMQE];
                V4q8KMQE = V4q8KMQE -(134 - 133);
                nTsJ18nuIo = nTsJ18nuIo * ((272 - 262));
            }
        }
        if (a0xIOBa3 > lozqSOpx2Jb9[AB0QGAEn9mw])
            a0xIOBa3 = lozqSOpx2Jb9[AB0QGAEn9mw];
        if (lozqSOpx2Jb9[AB0QGAEn9mw] > g2k4tfClyGeb)
            g2k4tfClyGeb = lozqSOpx2Jb9[AB0QGAEn9mw];
    }
}

int main () {
    int SyI8DnY0NJre [(5969 - 969)] = {(266 - 266)};
    int cuefY3S;
    int RscxE2ONBY3 [(5671 - 671)] = {(378 - 378)};
    char cpUi5C [(5929 - 929)];
    int lvlNf0 [(5804 - 804)] = {(458 - 458)};
    char AYs2Sb5VZ [(5383 - 383)];
    int xZ4nvISzD7gM;
    int rrmuOwFNzk;
    rrmuOwFNzk = (111 - 111);
    cin >> cpUi5C;
    cin >> AYs2Sb5VZ;
    Nxy84RbU9sZG (RscxE2ONBY3, AYs2Sb5VZ);
    {
        xZ4nvISzD7gM = (766 - 765);
        for (; xZ4nvISzD7gM <= AB0QGAEn9mw;) {
            cuefY3S = xZ4nvISzD7gM;
            for (; RscxE2ONBY3[xZ4nvISzD7gM] > cuefY3S;) {
                lvlNf0[cuefY3S]++;
                cuefY3S = cuefY3S + (12 - 11);
            }
            xZ4nvISzD7gM = xZ4nvISzD7gM + (793 - 792);
        }
    }
    Nxy84RbU9sZG (SyI8DnY0NJre, cpUi5C);
    {
        cuefY3S = a0xIOBa3;
        for (; cuefY3S <= g2k4tfClyGeb;) {
            if (lvlNf0[cuefY3S] > rrmuOwFNzk)
                rrmuOwFNzk = lvlNf0[cuefY3S];
            cuefY3S = cuefY3S + (558 - 557);
        }
    }
    cout << AB0QGAEn9mw << " " << rrmuOwFNzk << endl;
    return (900 - 900);
}

