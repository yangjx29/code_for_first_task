int main () {
    int Z9Bosp6iMNrV, rlaRhpsC, K0HKv7e;
    int uTID7aLofOrN [(956 - 846)] [(452 - 342)], zhQI0qB9uev [(170 - 60)] [(912 - 802)], cDBnWHI2pGo3 [(727 - 617)] [110], oNYPc9ms, DxpRPTYSjiw, Fy7hAREGKq3, e0OwXpmT;
    cin >> oNYPc9ms >> DxpRPTYSjiw;
    {
        Z9Bosp6iMNrV = (536 - 535);
        for (; Z9Bosp6iMNrV <= oNYPc9ms;) {
            {
                rlaRhpsC = (865 - 864);
                for (; rlaRhpsC <= DxpRPTYSjiw;) {
                    cin >> uTID7aLofOrN[Z9Bosp6iMNrV][rlaRhpsC];
                    rlaRhpsC = rlaRhpsC + (862 - 861);
                }
            }
            Z9Bosp6iMNrV = Z9Bosp6iMNrV +(560 - 559);
        }
    }
    cin >> Fy7hAREGKq3 >> e0OwXpmT;
    {
        Z9Bosp6iMNrV = (239 - 238);
        for (; Z9Bosp6iMNrV <= Fy7hAREGKq3;) {
            {
                rlaRhpsC = (379 - 378);
                for (; rlaRhpsC <= e0OwXpmT;) {
                    cin >> zhQI0qB9uev[Z9Bosp6iMNrV][rlaRhpsC];
                    rlaRhpsC = rlaRhpsC + (125 - 124);
                }
            }
            Z9Bosp6iMNrV = Z9Bosp6iMNrV +(560 - 559);
        }
    }
    {
        Z9Bosp6iMNrV = (595 - 594);
        for (; Z9Bosp6iMNrV <= oNYPc9ms;) {
            {
                rlaRhpsC = (608 - 607);
                while (rlaRhpsC <= e0OwXpmT) {
                    {
                        K0HKv7e = (138 - 137);
                        for (; K0HKv7e <= Fy7hAREGKq3;) {
                            cDBnWHI2pGo3[Z9Bosp6iMNrV][rlaRhpsC] = cDBnWHI2pGo3[Z9Bosp6iMNrV][rlaRhpsC] + uTID7aLofOrN[Z9Bosp6iMNrV][K0HKv7e] * zhQI0qB9uev[K0HKv7e][rlaRhpsC];
                            K0HKv7e++;
                        }
                    }
                    rlaRhpsC++;
                }
            }
            Z9Bosp6iMNrV = Z9Bosp6iMNrV +(599 - 598);
        }
    }
    {
        Z9Bosp6iMNrV = 1;
        while (Z9Bosp6iMNrV <= oNYPc9ms) {
            {
                rlaRhpsC = 1;
                while (rlaRhpsC < e0OwXpmT) {
                    printf ("%d ", cDBnWHI2pGo3[Z9Bosp6iMNrV][rlaRhpsC]);
                    rlaRhpsC++;
                }
            }
            printf ("%d\n", cDBnWHI2pGo3[Z9Bosp6iMNrV][e0OwXpmT]);
            Z9Bosp6iMNrV++;
        }
    }
    return (601 - 601);
}

