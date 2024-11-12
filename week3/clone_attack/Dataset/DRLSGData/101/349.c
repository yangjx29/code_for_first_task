int bhpUmBCgyX3M (int QFczh6BmQe, int oLNWzl1y3H) {
    if (oLNWzl1y3H < QFczh6BmQe)
        return (732 - 731);
    if (!(oLNWzl1y3H != QFczh6BmQe))
        return (644 - 644);
    return -(502 - 501);
}

int main () {
    int PgrPM7pwKH, yIVA9x, u0wai4, D2jDZNae9, nW7w81T, JV317zL;
    char xrmQb3PAV5G;
    for (PgrPM7pwKH = (748 - 748); (384 - 382) >= PgrPM7pwKH; PgrPM7pwKH = PgrPM7pwKH +1) {
        for (yIVA9x = (257 - 257); (895 - 893) >= yIVA9x; yIVA9x = yIVA9x + 1) {
            for (u0wai4 = 0; 2 >= u0wai4; u0wai4 = u0wai4 + 1) {
                D2jDZNae9 = (PgrPM7pwKH < yIVA9x) + (!(PgrPM7pwKH != u0wai4));
                nW7w81T = (yIVA9x < PgrPM7pwKH) + (u0wai4 < PgrPM7pwKH);
                JV317zL = (yIVA9x < u0wai4) + (yIVA9x > PgrPM7pwKH);
                xrmQb3PAV5G = true;
                if (bhpUmBCgyX3M (D2jDZNae9, nW7w81T) != bhpUmBCgyX3M (yIVA9x, PgrPM7pwKH))
                    xrmQb3PAV5G = false;
                if (bhpUmBCgyX3M (D2jDZNae9, JV317zL) != bhpUmBCgyX3M (u0wai4, PgrPM7pwKH))
                    xrmQb3PAV5G = false;
                if (bhpUmBCgyX3M (JV317zL, nW7w81T) != bhpUmBCgyX3M (yIVA9x, u0wai4))
                    xrmQb3PAV5G = false;
                if (xrmQb3PAV5G == true) {
                    if (PgrPM7pwKH < yIVA9x && PgrPM7pwKH < u0wai4) {
                        cout << 'A';
                        if (yIVA9x < u0wai4)
                            cout << "BC";
                        else
                            cout << "CB";
                    }
                    else if (yIVA9x < u0wai4) {
                        cout << 'B';
                        if (PgrPM7pwKH < u0wai4)
                            cout << "AC";
                        else
                            cout << "CA";
                    }
                    else
                        cout << "CBA";
                }
            }
        }
    }
    return 0;
}

