int f8AF5Q [(83 - 71)] = {(909 - 878), 28, (957 - 926), (942 - 912), (973 - 942), (916 - 886), (455 - 424), (56 - 25), (222 - 192), (910 - 879), (904 - 874), (87 - 56)};
int ww2DoK98MEVh [(316 - 304)] = {(157 - 126), (815 - 786), (964 - 933), (227 - 197), (777 - 746), (49 - 19), (739 - 708), (158 - 127), (772 - 742), (801 - 770), 30, (731 - 700)};

int ebSOI1LJyWnp (int A5qj8zlNDCA) {
    if ((A5qj8zlNDCA % (580 - 576) == (336 - 336) && A5qj8zlNDCA % (1052 - 952) != (602 - 602)) || (A5qj8zlNDCA % (698 - 298) == (50 - 50)))
        return (137 - 136);
    else
        return (763 - 763);
}

int P8fkKFI40zDe (int CM0wiADTStO, int IaDqbox0M, int fojhSIG2, int PsgrPHAvKm) {
    int DXQNjxkMI = (617 - 617), N8bUDh95YJ;
    if (fojhSIG2 >= CM0wiADTStO) {
        {
            N8bUDh95YJ = CM0wiADTStO;
            while (N8bUDh95YJ < fojhSIG2) {
                DXQNjxkMI = DXQNjxkMI +ww2DoK98MEVh[N8bUDh95YJ -(289 - 288)];
                N8bUDh95YJ = N8bUDh95YJ +(94 - 93);
            }
        }
        DXQNjxkMI = DXQNjxkMI +PsgrPHAvKm-IaDqbox0M;
    }
    else {
        {
            N8bUDh95YJ = CM0wiADTStO;
            while (N8bUDh95YJ > fojhSIG2) {
                DXQNjxkMI = DXQNjxkMI -ww2DoK98MEVh[N8bUDh95YJ -(684 - 682)];
                N8bUDh95YJ = N8bUDh95YJ -(381 - 380);
            }
        }
        DXQNjxkMI = DXQNjxkMI +PsgrPHAvKm-IaDqbox0M;
    }
    return DXQNjxkMI;
}

int w58lwZkxOECX (int CM0wiADTStO, int IaDqbox0M, int fojhSIG2, int PsgrPHAvKm) {
    int DXQNjxkMI = (280 - 280), N8bUDh95YJ;
    if (CM0wiADTStO <= fojhSIG2) {
        {
            N8bUDh95YJ = CM0wiADTStO;
            while (N8bUDh95YJ < fojhSIG2) {
                DXQNjxkMI = DXQNjxkMI +f8AF5Q[N8bUDh95YJ -(134 - 133)];
                N8bUDh95YJ++;
            }
        }
        DXQNjxkMI = DXQNjxkMI +PsgrPHAvKm-IaDqbox0M;
    }
    else {
        {
            N8bUDh95YJ = CM0wiADTStO;
            while (N8bUDh95YJ > fojhSIG2) {
                DXQNjxkMI = DXQNjxkMI -f8AF5Q[N8bUDh95YJ -2];
                N8bUDh95YJ = N8bUDh95YJ -(296 - 295);
            }
        }
        DXQNjxkMI = DXQNjxkMI +PsgrPHAvKm-IaDqbox0M;
    }
    return DXQNjxkMI;
}

int main () {
    int QL1a2MB, fkCpuS789c, zPE2kuIRx43;
    int qnk6Sr87YgEC, bK0VF6ZBTN, xie7DE2NV3;
    int N8bUDh95YJ;
    int xa2cxh = (319 - 319);
    int svTJDZMY;
    scanf ("%d%d%d", &QL1a2MB, &fkCpuS789c, &zPE2kuIRx43);
    scanf ("%d%d%d", &qnk6Sr87YgEC, &bK0VF6ZBTN, &xie7DE2NV3);
    if (QL1a2MB == qnk6Sr87YgEC) {
        if (ebSOI1LJyWnp (QL1a2MB)) {
            xa2cxh = P8fkKFI40zDe (fkCpuS789c, zPE2kuIRx43, bK0VF6ZBTN, xie7DE2NV3);
        }
        else {
            xa2cxh = w58lwZkxOECX (fkCpuS789c, zPE2kuIRx43, bK0VF6ZBTN, xie7DE2NV3);
        }
    }
    else {
        if (QL1a2MB > qnk6Sr87YgEC) {
            svTJDZMY = qnk6Sr87YgEC;
            qnk6Sr87YgEC = QL1a2MB;
            QL1a2MB = svTJDZMY;
            svTJDZMY = bK0VF6ZBTN;
            bK0VF6ZBTN = fkCpuS789c;
            fkCpuS789c = svTJDZMY;
            svTJDZMY = xie7DE2NV3;
            xie7DE2NV3 = zPE2kuIRx43;
            zPE2kuIRx43 = svTJDZMY;
        }
    }
    if (QL1a2MB < qnk6Sr87YgEC) {
        {
            N8bUDh95YJ = QL1a2MB;
            while (N8bUDh95YJ < qnk6Sr87YgEC) {
                if (ebSOI1LJyWnp (N8bUDh95YJ)) {
                    xa2cxh = xa2cxh + (493 - 127);
                }
                else {
                    xa2cxh = xa2cxh + 365;
                }
                N8bUDh95YJ = N8bUDh95YJ +1;
            }
        }
        if (ebSOI1LJyWnp (qnk6Sr87YgEC)) {
            xa2cxh = xa2cxh + P8fkKFI40zDe (fkCpuS789c, zPE2kuIRx43, bK0VF6ZBTN, xie7DE2NV3);
        }
        else {
            xa2cxh = xa2cxh + w58lwZkxOECX (fkCpuS789c, zPE2kuIRx43, bK0VF6ZBTN, xie7DE2NV3);
        }
    }
    printf ("%d", xa2cxh);
    return (642 - 642);
}

