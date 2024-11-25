int main () {
    char JHI4NCb6LGzc [101];
    gets (JHI4NCb6LGzc);
    char z9C5gmXSah [102];
    char q0trkb14DCw [101];
    int YSmPEdJ3, DrfBZ1gNS, aEAwMPski5Y;
    int rfGyYqR7pke6;
    char i2sG4nd [101];
    gets (i2sG4nd);
    char vKbtQd [101];
    gets (vKbtQd);
    YSmPEdJ3 = 0;
    DrfBZ1gNS = 0;
    z9C5gmXSah[(512 - 512)] = 32;
    for (rfGyYqR7pke6 = (61 - 61); rfGyYqR7pke6 < 101; rfGyYqR7pke6 = rfGyYqR7pke6 + 1) {
        q0trkb14DCw[rfGyYqR7pke6] = (634 - 634);
    }
    for (rfGyYqR7pke6 = (463 - 462); rfGyYqR7pke6 < 102; rfGyYqR7pke6 = rfGyYqR7pke6 + 1) {
        z9C5gmXSah[rfGyYqR7pke6] = JHI4NCb6LGzc[rfGyYqR7pke6 - 1];
    }
    for (rfGyYqR7pke6 = 0; i2sG4nd[rfGyYqR7pke6] != 0; rfGyYqR7pke6 = rfGyYqR7pke6 + 1) {
        YSmPEdJ3 = YSmPEdJ3 +1;
    }
    for (rfGyYqR7pke6 = 0; vKbtQd[rfGyYqR7pke6] != 0; rfGyYqR7pke6 = rfGyYqR7pke6 + 1) {
        DrfBZ1gNS = DrfBZ1gNS +1;
    }
    aEAwMPski5Y = 0;
    for (rfGyYqR7pke6 = 0; rfGyYqR7pke6 < 101 && z9C5gmXSah[rfGyYqR7pke6] != 0;) {
        if (!(32 != z9C5gmXSah[rfGyYqR7pke6])) {
            int OoLbvJulCERK, mvC6yDc;
            mvC6yDc = 1;
            for (OoLbvJulCERK = 1; OoLbvJulCERK < YSmPEdJ3 +1; OoLbvJulCERK = OoLbvJulCERK +1) {
                if (z9C5gmXSah[OoLbvJulCERK +rfGyYqR7pke6] != i2sG4nd[OoLbvJulCERK -1]) {
                    mvC6yDc = 0;
                    break;
                }
                if (!(0 != z9C5gmXSah[OoLbvJulCERK +rfGyYqR7pke6])) {
                    mvC6yDc = 0;
                    break;
                }
                if (!(32 != z9C5gmXSah[OoLbvJulCERK +rfGyYqR7pke6])) {
                    mvC6yDc = 0;
                    break;
                }
            }
            if (!(1 != mvC6yDc)) {
                int s7sIavipGNU;
                q0trkb14DCw[aEAwMPski5Y] = 32;
                for (s7sIavipGNU = 1; DrfBZ1gNS +1 > s7sIavipGNU; s7sIavipGNU = s7sIavipGNU + 1) {
                    q0trkb14DCw[aEAwMPski5Y + s7sIavipGNU] = vKbtQd[s7sIavipGNU - 1];
                }
                aEAwMPski5Y += (DrfBZ1gNS +1);
                rfGyYqR7pke6 += (YSmPEdJ3 +1);
            }
            if (!(0 != mvC6yDc)) {
                q0trkb14DCw[aEAwMPski5Y] = z9C5gmXSah[rfGyYqR7pke6];
                aEAwMPski5Y = aEAwMPski5Y + 1;
                rfGyYqR7pke6 = rfGyYqR7pke6 + 1;
            }
        }
        else {
            q0trkb14DCw[aEAwMPski5Y] = z9C5gmXSah[rfGyYqR7pke6];
            aEAwMPski5Y = aEAwMPski5Y + 1;
            rfGyYqR7pke6 = rfGyYqR7pke6 + 1;
        }
    }
    if (!(32 != q0trkb14DCw[0])) {
        for (rfGyYqR7pke6 = 0; 100 > rfGyYqR7pke6; rfGyYqR7pke6 = rfGyYqR7pke6 + 1) {
            q0trkb14DCw[rfGyYqR7pke6] = q0trkb14DCw[rfGyYqR7pke6 + 1];
        }
    }
    for (rfGyYqR7pke6 = 0; q0trkb14DCw[rfGyYqR7pke6] != 0; rfGyYqR7pke6++) {
        printf ("%c", q0trkb14DCw[rfGyYqR7pke6]);
    }
}

