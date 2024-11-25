int main () {
    int AgDi2E;
    int pbjHrMOw;
    int VWelodN;
    int Q7cyS4O;
    int len;
    AgDi2E = (822 - 821);
    int YVgxu1Ir;
    YVgxu1Ir = (617 - 617);
    char NhsJUPd [(1396 - 796)] [(248 - 238)];
    char jZjafLcxmyJ [(638 - 38)] [10];
    char yDypZdB2sgC [(1553 - 953)];
    int hDLuhbcC7 [(1079 - 479)];
    for (pbjHrMOw = (571 - 571); pbjHrMOw < 600; pbjHrMOw = pbjHrMOw + 1)
        hDLuhbcC7[pbjHrMOw] = (919 - 919);
    cin >> Q7cyS4O;
    cin.get ();
    cin.getline (yDypZdB2sgC, 600);
    len = strlen (yDypZdB2sgC);
    for (pbjHrMOw = (688 - 688); pbjHrMOw < len - Q7cyS4O +(722 - 721); pbjHrMOw = pbjHrMOw + 1) {
        for (VWelodN = pbjHrMOw; pbjHrMOw + Q7cyS4O -(225 - 224) >= VWelodN; VWelodN = VWelodN +1) {
            NhsJUPd[pbjHrMOw][YVgxu1Ir] = yDypZdB2sgC[VWelodN];
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
            YVgxu1Ir = YVgxu1Ir +1;
        }
        NhsJUPd[pbjHrMOw][YVgxu1Ir] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        YVgxu1Ir = (273 - 273);
    }
    for (pbjHrMOw = (990 - 990); pbjHrMOw < len - Q7cyS4O +(382 - 381); pbjHrMOw = pbjHrMOw + 1)
        strcpy (jZjafLcxmyJ[pbjHrMOw], NhsJUPd[pbjHrMOw]);
    for (pbjHrMOw = (970 - 970); len - Q7cyS4O +(895 - 894) > pbjHrMOw; pbjHrMOw = pbjHrMOw + 1)
        for (VWelodN = (691 - 691); len - Q7cyS4O +(489 - 488) > VWelodN; VWelodN = VWelodN +1) {
            if (!((974 - 974) != strcmp (NhsJUPd[pbjHrMOw], jZjafLcxmyJ[VWelodN])))
                hDLuhbcC7[pbjHrMOw]++;
        }
    {
        pbjHrMOw = 46 - 46;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (len - Q7cyS4O +1 > pbjHrMOw) {
            if (hDLuhbcC7[pbjHrMOw] > AgDi2E)
                AgDi2E = hDLuhbcC7[pbjHrMOw];
            pbjHrMOw = pbjHrMOw + 1;
        };
    }
    if (AgDi2E > 1) {
        cout << AgDi2E << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (pbjHrMOw = (148 - 148); len - Q7cyS4O +1 > pbjHrMOw; pbjHrMOw++) {
            if (hDLuhbcC7[pbjHrMOw] == AgDi2E &&pbjHrMOw == (629 - 629))
                cout << NhsJUPd[pbjHrMOw] << endl;
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
            if (hDLuhbcC7[pbjHrMOw] == AgDi2E &&pbjHrMOw > (753 - 753)) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                for (VWelodN = 0; pbjHrMOw > VWelodN; VWelodN = VWelodN +1) {
                    if (!(0 != strcmp (NhsJUPd[pbjHrMOw], NhsJUPd[VWelodN])))
                        break;
                    if (VWelodN == pbjHrMOw - 1)
                        cout << NhsJUPd[pbjHrMOw] << endl;
                };
            };
        };
    }
    else
        cout << "NO" << endl;
    return 0;
}

