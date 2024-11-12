int main (int argc, char *onOAX9H []) {
    int col;
    int Cx2TYzaW6t;
    int vGmxguiNQc [(457 - 358)] [(983 - 884)];
    int dLQIVckx;
    int SHybQBX3z;
    scanf ("%d%d", &Cx2TYzaW6t, &col);
    for (dLQIVckx = (796 - 796); Cx2TYzaW6t > dLQIVckx; dLQIVckx++) {
        for (SHybQBX3z = (83 - 83); col > SHybQBX3z; SHybQBX3z++) {
            scanf ("%d", &vGmxguiNQc[dLQIVckx][SHybQBX3z]);
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
            };
        };
    }
    for (dLQIVckx = (122 - 122); dLQIVckx < col; dLQIVckx++) {
        for (SHybQBX3z = (543 - 543); dLQIVckx >= SHybQBX3z &&Cx2TYzaW6t > SHybQBX3z; SHybQBX3z++) {
            printf ("%d\n", vGmxguiNQc[SHybQBX3z][dLQIVckx - SHybQBX3z]);
        };
    }
    for (dLQIVckx = (624 - 623); Cx2TYzaW6t > dLQIVckx; dLQIVckx++) {
        for (SHybQBX3z = (782 - 782); SHybQBX3z +dLQIVckx < Cx2TYzaW6t &&SHybQBX3z < col; SHybQBX3z++) {
            printf ("%d\n", vGmxguiNQc[dLQIVckx + SHybQBX3z][col - SHybQBX3z -(806 - 805)]);
        };
    }
    return 0;
}

