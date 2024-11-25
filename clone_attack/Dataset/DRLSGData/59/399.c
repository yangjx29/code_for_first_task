int Fi6aos [(630 - 520)] [(1005 - 895)] = {(447 - 447)};

void  TsPZSHv (int BTc6A3) {
    int PZvHUP;
    int p7Mx62lgG;
    {
        p7Mx62lgG = (458 - 458);
        for (; p7Mx62lgG < BTc6A3;) {
            {
                PZvHUP = (447 - 447);
                for (; BTc6A3 > PZvHUP;) {
                    if (!((785 - 784) != Fi6aos[p7Mx62lgG][PZvHUP])) {
                        if ((795 - 795) < p7Mx62lgG && !((344 - 344) != Fi6aos[p7Mx62lgG - (278 - 277)][PZvHUP]))
                            Fi6aos[p7Mx62lgG - (748 - 747)][PZvHUP] = (74 - 73);
                        if (p7Mx62lgG < BTc6A3 -(686 - 685) && !((519 - 519) != Fi6aos[p7Mx62lgG + (314 - 313)][PZvHUP]))
                            Fi6aos[p7Mx62lgG + (867 - 866)][PZvHUP] = (975 - 973);
                        if (PZvHUP > (748 - 748) && !((372 - 372) != Fi6aos[p7Mx62lgG][PZvHUP -(437 - 436)]))
                            Fi6aos[p7Mx62lgG][PZvHUP -(207 - 206)] = (133 - 132);
                        {
                            if (0) {
                                {
                                    if (0) {
                                        return 0;
                                    };
                                }
                                return 0;
                            };
                        }
                        if (BTc6A3 -(812 - 811) > PZvHUP &&!((964 - 964) != Fi6aos[p7Mx62lgG][PZvHUP +(855 - 854)]))
                            Fi6aos[p7Mx62lgG][PZvHUP +(75 - 74)] = 2;
                    }
                    if (!(2 != Fi6aos[p7Mx62lgG][PZvHUP]))
                        Fi6aos[p7Mx62lgG][PZvHUP] = (378 - 377);
                    PZvHUP = PZvHUP +1;
                };
            }
            p7Mx62lgG = p7Mx62lgG + 1;
        };
    };
}

int main () {
    char m2ZqDPr91;
    int PZvHUP;
    int p7Mx62lgG;
    int dAJCe12P;
    {
        if (0) {
            return 0;
        };
    }
    int BTc6A3;
    int rjugPwkMGeJb;
    cin >> BTc6A3;
    {
        p7Mx62lgG = 0;
        for (; p7Mx62lgG < BTc6A3;) {
            cin.get ();
            {
                PZvHUP = 0;
                for (; PZvHUP < BTc6A3;) {
                    cin.get (m2ZqDPr91);
                    if (m2ZqDPr91 == '#')
                        Fi6aos[p7Mx62lgG][PZvHUP] = -1;
                    if (m2ZqDPr91 == '@')
                        Fi6aos[p7Mx62lgG][PZvHUP] = 1;
                    PZvHUP = PZvHUP +1;
                };
            }
            p7Mx62lgG = p7Mx62lgG + 1;
        };
    }
    cin >> dAJCe12P;
    {
        p7Mx62lgG = 1;
        for (; p7Mx62lgG < dAJCe12P;) {
            TsPZSHv (BTc6A3);
            p7Mx62lgG = p7Mx62lgG + 1;
        };
    }
    rjugPwkMGeJb = 0;
    {
        p7Mx62lgG = 0;
        for (; p7Mx62lgG < BTc6A3;) {
            {
                PZvHUP = 0;
                for (; PZvHUP < BTc6A3;) {
                    if (Fi6aos[p7Mx62lgG][PZvHUP] == 1)
                        rjugPwkMGeJb = rjugPwkMGeJb + 1;
                    PZvHUP = PZvHUP +1;
                };
            }
            p7Mx62lgG = p7Mx62lgG + 1;
        };
    }
    cout << rjugPwkMGeJb << endl;
    return 0;
}

