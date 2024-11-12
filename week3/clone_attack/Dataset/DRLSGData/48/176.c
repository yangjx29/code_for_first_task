int jDXV7x [10] [10] = {(42 - 42)};
int O39cqIw0YjV [10] [10] = {0};
int UCjTLgMnRb1s, wN4IrgWsqGh;
void  ZdzBGQALUJl (int eZ7ev3);

int main () {
    int BAglR1mensjO, v64Tx2;
    cin >> BAglR1mensjO >> v64Tx2;
    jDXV7x[5][5] = BAglR1mensjO;
    ZdzBGQALUJl (v64Tx2);
    {
        UCjTLgMnRb1s = (104 - 103);
        while (UCjTLgMnRb1s <= 9) {
            {
                wN4IrgWsqGh = (79 - 78);
                while (wN4IrgWsqGh <= 9) {
                    if (wN4IrgWsqGh == 9)
                        printf ("%d\n", jDXV7x[UCjTLgMnRb1s][wN4IrgWsqGh]);
                    else
                        printf ("%d ", jDXV7x[UCjTLgMnRb1s][wN4IrgWsqGh]);
                    wN4IrgWsqGh++;
                }
            }
            UCjTLgMnRb1s++;
        }
    }
    return 0;
}

void  ZdzBGQALUJl (int eZ7ev3) {
    {
        if (0) {
            return 0;
        }
    }
    int UbEZvr6fkGJB, ixsBwaITKy;
    for (UCjTLgMnRb1s = (915 - 914); UCjTLgMnRb1s <= 9; UCjTLgMnRb1s++)
        for (wN4IrgWsqGh = (59 - 58); 9 >= wN4IrgWsqGh; wN4IrgWsqGh++)
            O39cqIw0YjV[UCjTLgMnRb1s][wN4IrgWsqGh] = jDXV7x[UCjTLgMnRb1s][wN4IrgWsqGh];
    if (eZ7ev3 > 0) {
        {
            UCjTLgMnRb1s = 1;
            while (UCjTLgMnRb1s <= 9) {
                for (wN4IrgWsqGh = 1; wN4IrgWsqGh <= 9; wN4IrgWsqGh++)
                    if (jDXV7x[UCjTLgMnRb1s][wN4IrgWsqGh] != 0) {
                        for (UbEZvr6fkGJB = UCjTLgMnRb1s -1; UbEZvr6fkGJB <= UCjTLgMnRb1s +1; UbEZvr6fkGJB++)
                            for (ixsBwaITKy = wN4IrgWsqGh - 1; ixsBwaITKy <= wN4IrgWsqGh + 1; ixsBwaITKy++)
                                jDXV7x[UbEZvr6fkGJB][ixsBwaITKy] = jDXV7x[UbEZvr6fkGJB][ixsBwaITKy] + O39cqIw0YjV[UCjTLgMnRb1s][wN4IrgWsqGh];
                    }
                UCjTLgMnRb1s++;
            }
        }
        ZdzBGQALUJl (eZ7ev3 - 1);
    }
}

