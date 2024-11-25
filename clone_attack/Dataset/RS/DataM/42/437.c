int main () {
    int uuTsOaK, OSYIPBQOjECn, JplczShFH [100001];
    int jebXTl30od4;
    int whether = 0;
    int r;
    r = 1;
    cin >> uuTsOaK;
    {
        int XxOKTLldG = (994 - 993);
        while (XxOKTLldG <= uuTsOaK) {
            cin >> JplczShFH[XxOKTLldG];
            XxOKTLldG++;
        };
    }
    JplczShFH[0] = OSYIPBQOjECn -(588 - 587);
    cin >> OSYIPBQOjECn;
    {
        int lUmB4IK6J = 1;
        while (lUmB4IK6J <= uuTsOaK) {
            if (JplczShFH[lUmB4IK6J] == OSYIPBQOjECn) {
                continue;
            }
            else
                while (JplczShFH[lUmB4IK6J - 1] == OSYIPBQOjECn) {
                    jebXTl30od4 = JplczShFH[lUmB4IK6J - 1];
                    JplczShFH[lUmB4IK6J - 1] = JplczShFH[lUmB4IK6J];
                    JplczShFH[lUmB4IK6J] = jebXTl30od4;
                    lUmB4IK6J--;
                }
            lUmB4IK6J++;
        };
    }
    do {
        if (whether)
            cout << " ";
        whether = 1;
        cout << JplczShFH[r];
        r++;
    }
    while (JplczShFH[r] != OSYIPBQOjECn &&r <= uuTsOaK);
    return 0;
}

