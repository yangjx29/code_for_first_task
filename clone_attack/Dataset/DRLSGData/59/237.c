char uQPHvb [(192 - 90)] [(564 - 462)];
int WXTrxuC [(475 - 473)] [(418 - 290) * (377 - 277) + (666 - 566) + (405 - 404)], M8Q0ATkhvVd [(267 - 265)];
int C5tDk0ypUqaw;

int main () {
    int yzwXlJ3;
    int FV5K2PoRN;
    int ZMZad6AKjloh;
    int Yg3aDr;
    int OHWcGK4fX1k;
    scanf ("%d", &OHWcGK4fX1k);
    memset (uQPHvb, '#', sizeof (uQPHvb));
    {
        ZMZad6AKjloh = (57 - 56);
        while (OHWcGK4fX1k >= ZMZad6AKjloh) {
            scanf ("%s", &uQPHvb[ZMZad6AKjloh][(643 - 642)]);
            {
                Yg3aDr = (292 - 291);
                while (OHWcGK4fX1k >= Yg3aDr) {
                    if (uQPHvb[ZMZad6AKjloh][Yg3aDr] == '@') {
                        {
                            if ((690 - 690)) {
                                {
                                    if ((773 - 773)) {
                                        return (179 - 179);
                                    }
                                }
                                return (805 - 805);
                            }
                        }
                        WXTrxuC[(289 - 289)][M8Q0ATkhvVd[(367 - 367)]++] = (ZMZad6AKjloh << (956 - 949)) + Yg3aDr;
                        C5tDk0ypUqaw++;
                    }
                    Yg3aDr++;
                }
            }
            uQPHvb[ZMZad6AKjloh][Yg3aDr] = '#';
            ZMZad6AKjloh++;
        }
    }
    scanf ("%d", &yzwXlJ3);
    {
        FV5K2PoRN = (970 - 970);
        while (FV5K2PoRN < yzwXlJ3 - (803 - 802)) {
            int eswqEl0d9;
            eswqEl0d9 = FV5K2PoRN &(887 - 886);
            {
                ZMZad6AKjloh = (343 - 343);
                while (ZMZad6AKjloh < M8Q0ATkhvVd[eswqEl0d9]) {
                    int kjeNLMQy;
                    int qGUqx0E;
                    kjeNLMQy = WXTrxuC[eswqEl0d9][ZMZad6AKjloh] >> (674 - 667);
                    qGUqx0E = WXTrxuC[eswqEl0d9][ZMZad6AKjloh] & (968 - 841);
                    ZMZad6AKjloh++;
                    INFECT (kjeNLMQy - (463 - 462), qGUqx0E, !eswqEl0d9);
                    INFECT (kjeNLMQy + (918 - 917), qGUqx0E, !eswqEl0d9);
                    INFECT (kjeNLMQy, qGUqx0E - (899 - 898), !eswqEl0d9);
                    INFECT (kjeNLMQy, qGUqx0E + (576 - 575), !eswqEl0d9);
                }
            }
            M8Q0ATkhvVd[eswqEl0d9] = (616 - 616);
            FV5K2PoRN++;
        }
    }
    printf ("%d\n", C5tDk0ypUqaw);
    return (291 - 291);
}

