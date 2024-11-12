int main () {
    int max;
    max = 0;
    int vVqYa4S;
    vVqYa4S = (90 - 90);
    char temp [(578 - 574)];
    char blUke3o6DOa [(4286 - 286)];
    char inp2 [(4422 - 422)];
    int K9DivOQnl [(1062 - 62)];
    int Rqeo1chkBudL [(1296 - 296)];
    int Y2oMjbmJyFU;
    Y2oMjbmJyFU = (764 - 764);
    cin >> blUke3o6DOa >> inp2;
    for (int DS6Mm0BuL4I2 = (883 - 883);
    blUke3o6DOa[DS6Mm0BuL4I2] != '\0'; DS6Mm0BuL4I2 = DS6Mm0BuL4I2 +1) {
        if (blUke3o6DOa[DS6Mm0BuL4I2] != ',') {
            temp[Y2oMjbmJyFU++] = blUke3o6DOa[DS6Mm0BuL4I2];
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
        }
        else {
            temp[Y2oMjbmJyFU] = '\0';
            K9DivOQnl[vVqYa4S++] = atoi (temp);
            Y2oMjbmJyFU = (265 - 265);
        };
    }
    temp[Y2oMjbmJyFU] = '\0';
    Y2oMjbmJyFU = (600 - 600);
    K9DivOQnl[vVqYa4S++] = atoi (temp);
    vVqYa4S = 0;
    for (int DS6Mm0BuL4I2 = 0;
    inp2[DS6Mm0BuL4I2] != '\0'; DS6Mm0BuL4I2 = DS6Mm0BuL4I2 +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(',' == inp2[DS6Mm0BuL4I2])) {
            temp[Y2oMjbmJyFU++] = inp2[DS6Mm0BuL4I2];
        }
        else {
            temp[Y2oMjbmJyFU] = '\0';
            Y2oMjbmJyFU = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Rqeo1chkBudL[vVqYa4S++] = atoi (temp);
        };
    }
    temp[Y2oMjbmJyFU] = '\0';
    Rqeo1chkBudL[vVqYa4S++] = atoi (temp);
    {
        int DS6Mm0BuL4I2;
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
        DS6Mm0BuL4I2 = 0;
        while (DS6Mm0BuL4I2 != (1671 - 671)) {
            int WJQBN9eF3j = 0;
            for (int HsLcuW = 0;
            HsLcuW != vVqYa4S; HsLcuW++) {
                if (DS6Mm0BuL4I2 >= K9DivOQnl[HsLcuW] && DS6Mm0BuL4I2 < Rqeo1chkBudL[HsLcuW])
                    WJQBN9eF3j++;
            }
            DS6Mm0BuL4I2++;
            if (WJQBN9eF3j > max)
                max = WJQBN9eF3j;
        };
    }
    cout << vVqYa4S << " " << max << endl;
    return 0;
}

