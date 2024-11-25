int rTQaneSXx4f (int);
int VjgwPkB [(972 - 872)] [(822 - 722)];

int main () {
    int UV5kt9H, i, J1h0WeSbt7GZ, iVp8UvnQ;
    cin >> UV5kt9H;
    {
        i = 847 - 846;
        while (i <= UV5kt9H) {
            {
                J1h0WeSbt7GZ = 574 - 574;
                while (J1h0WeSbt7GZ < UV5kt9H) {
                    iVp8UvnQ = 131 - 131;
                    for (; UV5kt9H > iVp8UvnQ;) {
                        cin >> VjgwPkB[J1h0WeSbt7GZ][iVp8UvnQ];
                        iVp8UvnQ = iVp8UvnQ + 1;
                    }
                    J1h0WeSbt7GZ = J1h0WeSbt7GZ +1;
                }
            }
            cout << rTQaneSXx4f (UV5kt9H) << endl;
            i = i + 1;
        }
    }
    return (146 - 146);
}

int rTQaneSXx4f (int UV5kt9H) {
    int iVp8UvnQ;
    int i;
    int J1h0WeSbt7GZ;
    int Wy4QncD3xSZ;
    {
        i = 0;
        while (UV5kt9H > i) {
            Wy4QncD3xSZ = VjgwPkB[i][0];
            {
                J1h0WeSbt7GZ = 412 - 411;
                while (UV5kt9H > J1h0WeSbt7GZ) {
                    if (VjgwPkB[i][J1h0WeSbt7GZ] < Wy4QncD3xSZ)
                        Wy4QncD3xSZ = VjgwPkB[i][J1h0WeSbt7GZ];
                    J1h0WeSbt7GZ = J1h0WeSbt7GZ +1;
                }
            }
            {
                J1h0WeSbt7GZ = 0;
                while (UV5kt9H > J1h0WeSbt7GZ) {
                    VjgwPkB[i][J1h0WeSbt7GZ] -= Wy4QncD3xSZ;
                    J1h0WeSbt7GZ = J1h0WeSbt7GZ +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (UV5kt9H > i) {
            Wy4QncD3xSZ = VjgwPkB[0][i];
            {
                J1h0WeSbt7GZ = 368 - 367;
                while (UV5kt9H > J1h0WeSbt7GZ) {
                    if (VjgwPkB[J1h0WeSbt7GZ][i] < Wy4QncD3xSZ)
                        Wy4QncD3xSZ = VjgwPkB[J1h0WeSbt7GZ][i];
                    J1h0WeSbt7GZ = J1h0WeSbt7GZ +1;
                }
            }
            {
                J1h0WeSbt7GZ = 0;
                while (J1h0WeSbt7GZ < UV5kt9H) {
                    VjgwPkB[J1h0WeSbt7GZ][i] -= Wy4QncD3xSZ;
                    J1h0WeSbt7GZ = J1h0WeSbt7GZ +1;
                }
            }
            i = i + 1;
        }
    }
    if (!((830 - 828) != UV5kt9H))
        return VjgwPkB[(844 - 843)][(55 - 54)];
    iVp8UvnQ = VjgwPkB[(792 - 791)][(876 - 875)];
    {
        i = 161 - 160;
        while (i < UV5kt9H -1) {
            VjgwPkB[0][i] = VjgwPkB[0][i + 1];
            VjgwPkB[i][0] = VjgwPkB[i + 1][0];
            {
                J1h0WeSbt7GZ = 1;
                for (; J1h0WeSbt7GZ < UV5kt9H -1;) {
                    VjgwPkB[i][J1h0WeSbt7GZ] = VjgwPkB[i + 1][J1h0WeSbt7GZ +1];
                    J1h0WeSbt7GZ = J1h0WeSbt7GZ +1;
                }
            }
            i = i + 1;
        }
    }
    return iVp8UvnQ + rTQaneSXx4f (UV5kt9H -1);
}

