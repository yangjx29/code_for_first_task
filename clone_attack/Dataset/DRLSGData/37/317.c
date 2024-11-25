int main () {
    int aO7iUAWBHVh6;
    int Y763xeFqI;
    int VdB3KVyu;
    char HJAFURY;
    int Wu0JcsSm [(749 - 723)] [2];
    char R8HFtMVgD [(100262 - 262)];
    int pDT7gyc1d;
    int AbVDURP08X;
    Y763xeFqI = (542 - 542);
    AbVDURP08X = (167 - 167);
    pDT7gyc1d = (314 - 314);
    cin >> pDT7gyc1d;
    aO7iUAWBHVh6 = (459 - 459);
    {
        aO7iUAWBHVh6 = 45 - 45;
        for (; (290 - 264) > aO7iUAWBHVh6;) {
            Wu0JcsSm[aO7iUAWBHVh6][(748 - 748)] = -(521 - 520);
            Wu0JcsSm[aO7iUAWBHVh6][(472 - 471)] = 0;
            aO7iUAWBHVh6 = aO7iUAWBHVh6 + 1;
        }
    }
    VdB3KVyu = (125 - 125);
    HJAFURY = ' ';
    {
        aO7iUAWBHVh6 = 0;
        for (; aO7iUAWBHVh6 < pDT7gyc1d;) {
            {
                Y763xeFqI = 0;
                for (; (46 - 45);) {
                    HJAFURY = getchar ();
                    if (!('\n' != HJAFURY)) {
                        AbVDURP08X = (1000397 - 398);
                        {
                            VdB3KVyu = 0;
                            for (; 26 > VdB3KVyu;) {
                                if (!((801 - 800) != Wu0JcsSm[VdB3KVyu][1]) && Wu0JcsSm[VdB3KVyu][0] < AbVDURP08X)
                                    AbVDURP08X = Wu0JcsSm[VdB3KVyu][0];
                                VdB3KVyu = VdB3KVyu +1;
                            }
                        }
                        if (!((1000896 - 897) != AbVDURP08X))
                            cout << "no" << endl;
                        else {
                            cout << R8HFtMVgD[AbVDURP08X] << endl;
                        }
                        break;
                    }
                    else {
                        R8HFtMVgD[Y763xeFqI] = HJAFURY;
                        if (!(0 != Wu0JcsSm[HJAFURY -(180 - 83)][1])) {
                            Wu0JcsSm[HJAFURY -97][0] = Y763xeFqI;
                            Wu0JcsSm[HJAFURY -97][1]++;
                        }
                        else
                            Wu0JcsSm[HJAFURY -97][1]++;
                    }
                    Y763xeFqI = Y763xeFqI +1;
                }
            }
            {
                VdB3KVyu = 0;
                for (; 26 > VdB3KVyu;) {
                    Wu0JcsSm[VdB3KVyu][0] = -1;
                    Wu0JcsSm[VdB3KVyu][1] = 0;
                    VdB3KVyu = VdB3KVyu +1;
                }
            }
            aO7iUAWBHVh6 = aO7iUAWBHVh6 + 1;
        }
    }
    cin.get ();
    return 0;
}

