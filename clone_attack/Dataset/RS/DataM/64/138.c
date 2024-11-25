int main () {
    int BIhEPy;
    double  mxQDiZ;
    double  dZKrsP [45] [3];
    int CrHF7oKJtNQ [(724 - 714)] [(915 - 912)] = {(596 - 596)};
    int wc4Lr6T90Pj;
    int NPqRlHVXb3;
    int RYe21IpVP;
    int oqpOTk2V;
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
    int HTKwZ0;
    int BiC37RTPjZ1;
    scanf ("%d", &wc4Lr6T90Pj);
    {
        NPqRlHVXb3 = 653 - 653;
        while (wc4Lr6T90Pj > NPqRlHVXb3) {
            for (RYe21IpVP = 0; 3 > RYe21IpVP; RYe21IpVP++) {
                scanf ("%d", &(CrHF7oKJtNQ[NPqRlHVXb3][RYe21IpVP]));
            }
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
            NPqRlHVXb3++;
        };
    }
    for (oqpOTk2V = 0, NPqRlHVXb3 = 0; wc4Lr6T90Pj - 1 > NPqRlHVXb3; NPqRlHVXb3++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (HTKwZ0 = NPqRlHVXb3 +1; wc4Lr6T90Pj > HTKwZ0; HTKwZ0 = HTKwZ0 +1, oqpOTk2V++) {
            dZKrsP[oqpOTk2V][0] = sqrt (pow (CrHF7oKJtNQ[NPqRlHVXb3][0] * 1.0 - CrHF7oKJtNQ[HTKwZ0][0] * 1.0, 2) + pow (CrHF7oKJtNQ[NPqRlHVXb3][1] * 1.0 - CrHF7oKJtNQ[HTKwZ0][1] * 1.0, 2) + pow (CrHF7oKJtNQ[NPqRlHVXb3][2] * 1.0 - CrHF7oKJtNQ[HTKwZ0][2] * 1.0, 2));
            dZKrsP[oqpOTk2V][1] = NPqRlHVXb3;
            dZKrsP[oqpOTk2V][2] = HTKwZ0;
        };
    }
    {
        BiC37RTPjZ1 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while ((wc4Lr6T90Pj - 1) * wc4Lr6T90Pj / 2 >= BiC37RTPjZ1) {
            for (NPqRlHVXb3 = 0; (wc4Lr6T90Pj - 1) * wc4Lr6T90Pj / 2 - BiC37RTPjZ1 > NPqRlHVXb3; NPqRlHVXb3++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (dZKrsP[NPqRlHVXb3 +1][0] > dZKrsP[NPqRlHVXb3][0]) {
                    mxQDiZ = dZKrsP[NPqRlHVXb3 +1][0];
                    dZKrsP[NPqRlHVXb3 +1][0] = dZKrsP[NPqRlHVXb3][0];
                    dZKrsP[NPqRlHVXb3][0] = mxQDiZ;
                    BIhEPy = dZKrsP[NPqRlHVXb3 +1][1];
                    dZKrsP[NPqRlHVXb3 +1][1] = dZKrsP[NPqRlHVXb3][1];
                    dZKrsP[NPqRlHVXb3][1] = BIhEPy;
                    BIhEPy = dZKrsP[NPqRlHVXb3 +1][2];
                    dZKrsP[NPqRlHVXb3 +1][2] = dZKrsP[NPqRlHVXb3][2];
                    dZKrsP[NPqRlHVXb3][2] = BIhEPy;
                };
            }
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
            BiC37RTPjZ1++;
        };
    }
    for (HTKwZ0 = 0; HTKwZ0 < (wc4Lr6T90Pj - 1) * wc4Lr6T90Pj / 2; HTKwZ0++) {
        NPqRlHVXb3 = dZKrsP[HTKwZ0][1];
        RYe21IpVP = dZKrsP[HTKwZ0][2];
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", CrHF7oKJtNQ[NPqRlHVXb3][0], CrHF7oKJtNQ[NPqRlHVXb3][1], CrHF7oKJtNQ[NPqRlHVXb3][2], CrHF7oKJtNQ[RYe21IpVP][0], CrHF7oKJtNQ[RYe21IpVP][1], CrHF7oKJtNQ[RYe21IpVP][2], dZKrsP[HTKwZ0][0]);
    }
    return 0;
}

