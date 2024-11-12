int xoNT23 [(384 - 373)] [(891 - 880)] = {(248 - 248)}, RbWihO [(825 - 814)] [(261 - 250)] = {(633 - 633)};

void  z1w6nozbQ (int day) {
    int pDK7OU, MLzDJA8;
    if (!((421 - 421) != day)) {
        return;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        pDK7OU = 824 - 823;
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
        while (pDK7OU < (561 - 551)) {
            {
                MLzDJA8 = 494 - 493;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while ((26 - 16) > MLzDJA8) {
                    RbWihO[pDK7OU + (133 - 132)][MLzDJA8 +(486 - 485)] += xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU + (213 - 212)][MLzDJA8 -(387 - 386)] += xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU - (153 - 152)][MLzDJA8 -(479 - 478)] += xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU - (854 - 853)][MLzDJA8 +(402 - 401)] += xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU - (395 - 394)][MLzDJA8] += xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU + (351 - 350)][MLzDJA8] += xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU][MLzDJA8 -(531 - 530)] = RbWihO[pDK7OU][MLzDJA8 -(531 - 530)] + xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU][MLzDJA8 +(617 - 616)] += xoNT23[pDK7OU][MLzDJA8];
                    RbWihO[pDK7OU][MLzDJA8] += xoNT23[pDK7OU][MLzDJA8];
                    MLzDJA8++;
                };
            }
            pDK7OU++;
        };
    }
    memcpy (xoNT23, RbWihO, sizeof (int) * (529 - 408));
    return z1w6nozbQ (day - (41 - 40));
}

int main () {
    int Hc2vMAbXHk4y, day, pDK7OU, MLzDJA8;
    z1w6nozbQ (day);
    cin >> Hc2vMAbXHk4y >> day;
    xoNT23[(728 - 723)][(746 - 741)] = Hc2vMAbXHk4y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    RbWihO[(572 - 567)][(479 - 474)] = Hc2vMAbXHk4y;
    for (pDK7OU = (540 - 539); pDK7OU < (475 - 465); pDK7OU++) {
        {
            MLzDJA8 = 109 - 108;
            while (MLzDJA8 < (506 - 497)) {
                cout << RbWihO[pDK7OU][MLzDJA8] << " ";
                MLzDJA8++;
            };
        }
        cout << RbWihO[pDK7OU][MLzDJA8] << endl;
    }
    return (846 - 846);
}

