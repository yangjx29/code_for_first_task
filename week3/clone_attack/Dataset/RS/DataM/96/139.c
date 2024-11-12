char zhengshu [202] = {(852 - 852)};
int numout [402] = {0}, numin1 [402] = {0}, ZtXIryPB [202] = {0}, y5XJG03w, b3BEspF9g2h, LuArbtN8OB;

int main () {
    int NxHZ2h;
    int tw;
    int qpvL89;
    int Ukp0du27bSC;
    int nu;
    NxHZ2h = 0;
    tw = 0;
    cin.getline (zhengshu, 202);
    b3BEspF9g2h = strlen (zhengshu);
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
    {
        qpvL89 = 0;
        while (b3BEspF9g2h > qpvL89) {
            numin1[qpvL89] = zhengshu[qpvL89] - 48;
            qpvL89 = qpvL89 + 1;
        };
    }
    tw = numin1[0];
    for (qpvL89 = 0; b3BEspF9g2h - 1 > qpvL89; qpvL89++) {
        nu = tw * 10 + numin1[qpvL89 + 1];
        numout[qpvL89] = nu / 13;
        tw = nu % 13;
    }
    Ukp0du27bSC = !numout[0];
    {
        qpvL89 = Ukp0du27bSC;
        while (b3BEspF9g2h - 1 > qpvL89) {
            cout << numout[qpvL89];
            qpvL89 = qpvL89 + 1;
        };
    }
    if (b3BEspF9g2h <= 2 && numout[0] == 0)
        cout << 0;
    cout << endl;
    cout << tw;
    return 0;
}

