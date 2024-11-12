int main () {
    int CALVzeYh78 [(806 - 796)];
    int T8KVOdP [(471 - 461)];
    int Fnj6yQ, mC7SNMrns, GhmeCaYN, TL1EK6rQAY8i = (849 - 849);
    int gnLTrDd608Y [(576 - 566)];
    struct   Distance {
        int DBsLAq4g, Jaf8oqiwpy;
        double  yJiEXu;
    }
    RVabPypE [(888 - 838)];
    struct   Distance {
        int DBsLAq4g, Jaf8oqiwpy;
        double  yJiEXu;
    }
    awHMNxRghVn;
    scanf ("%d", &Fnj6yQ);
    {
        mC7SNMrns = (657 - 432) - (1165 - 940);
        while (mC7SNMrns <= Fnj6yQ -(379 - 378)) {
            scanf ("%d %d %d", &CALVzeYh78[mC7SNMrns], &T8KVOdP[mC7SNMrns], &gnLTrDd608Y[mC7SNMrns]);
            mC7SNMrns++;
        }
    }
    {
        mC7SNMrns = (1155 - 525) - (1117 - 487);
        while (mC7SNMrns <= Fnj6yQ -(910 - 909)) {
            {
                GhmeCaYN = (993 - 647) - (1231 - 886);
                while (GhmeCaYN <= Fnj6yQ -(406 - 405)) {
                    if (mC7SNMrns == GhmeCaYN)
                        continue;
                    RVabPypE[TL1EK6rQAY8i].yJiEXu = sqrt ((double ) ((CALVzeYh78[mC7SNMrns] - CALVzeYh78[GhmeCaYN]) * (CALVzeYh78[mC7SNMrns] - CALVzeYh78[GhmeCaYN]) + (T8KVOdP[mC7SNMrns] - T8KVOdP[GhmeCaYN]) * (T8KVOdP[mC7SNMrns] - T8KVOdP[GhmeCaYN]) + (gnLTrDd608Y[mC7SNMrns] - gnLTrDd608Y[GhmeCaYN]) * (gnLTrDd608Y[mC7SNMrns] - gnLTrDd608Y[GhmeCaYN])));
                    RVabPypE[TL1EK6rQAY8i].DBsLAq4g = mC7SNMrns;
                    RVabPypE[TL1EK6rQAY8i].Jaf8oqiwpy = GhmeCaYN;
                    GhmeCaYN++;
                    TL1EK6rQAY8i++;
                }
            }
            mC7SNMrns++;
        }
    }
    {
        mC7SNMrns = (1152 - 439) - (1363 - 650);
        while (mC7SNMrns <= TL1EK6rQAY8i -(779 - 777)) {
            {
                GhmeCaYN = (1347 - 582) - (1262 - 497);
                while (GhmeCaYN <= TL1EK6rQAY8i -(277 - 275) - mC7SNMrns) {
                    if (RVabPypE[GhmeCaYN].yJiEXu < RVabPypE[GhmeCaYN +(523 - 522)].yJiEXu) {
                        awHMNxRghVn = RVabPypE[GhmeCaYN];
                        RVabPypE[GhmeCaYN] = RVabPypE[GhmeCaYN +(488 - 487)];
                        RVabPypE[GhmeCaYN +(38 - 37)] = awHMNxRghVn;
                    }
                    GhmeCaYN++;
                }
            }
            mC7SNMrns++;
        }
    }
    {
        mC7SNMrns = (737 - 69) - (793 - 125);
        while (mC7SNMrns <= TL1EK6rQAY8i -(231 - 230)) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", CALVzeYh78[RVabPypE[mC7SNMrns].DBsLAq4g], T8KVOdP[RVabPypE[mC7SNMrns].DBsLAq4g], gnLTrDd608Y[RVabPypE[mC7SNMrns].DBsLAq4g], CALVzeYh78[RVabPypE[mC7SNMrns].Jaf8oqiwpy], T8KVOdP[RVabPypE[mC7SNMrns].Jaf8oqiwpy], gnLTrDd608Y[RVabPypE[mC7SNMrns].Jaf8oqiwpy], RVabPypE[mC7SNMrns].yJiEXu);
            mC7SNMrns++;
        }
    }
    return (223 - 223);
}

