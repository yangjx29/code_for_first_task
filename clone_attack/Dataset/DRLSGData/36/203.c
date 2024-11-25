void  ezFdapv72U6E (char q4MUrpCJEdF [], int EJ235RO) {
    int YaFK0P;
    int UoZCEVO;
    char UGvIjDEghc;
    char oa5bFQq;
    int YI0t53wDqn;
    {
        YI0t53wDqn = 215 - 215;
        for (; YI0t53wDqn < EJ235RO;) {
            scanf ("%d", &q4MUrpCJEdF[YI0t53wDqn]);
            YI0t53wDqn = YI0t53wDqn +(826 - 825);
        }
    }
    for (YI0t53wDqn = (165 - 165); YI0t53wDqn < EJ235RO; YI0t53wDqn++) {
        UGvIjDEghc = q4MUrpCJEdF[YI0t53wDqn];
        oa5bFQq = YI0t53wDqn;
        {
            YaFK0P = YI0t53wDqn;
            for (; EJ235RO > YaFK0P;) {
                if (q4MUrpCJEdF[YaFK0P] > UGvIjDEghc) {
                    UGvIjDEghc = q4MUrpCJEdF[YaFK0P];
                    oa5bFQq = YaFK0P;
                }
                YaFK0P++;
            }
        }
        UoZCEVO = q4MUrpCJEdF[oa5bFQq];
        q4MUrpCJEdF[oa5bFQq] = q4MUrpCJEdF[YI0t53wDqn];
        q4MUrpCJEdF[YI0t53wDqn] = UoZCEVO;
    }
}

void  main () {
    char P8v9J0X7W [(690 - 590)];
    int EJ235RO;
    char q4MUrpCJEdF [(319 - 219)];
    EJ235RO = strcmp (q4MUrpCJEdF, P8v9J0X7W);
    if (EJ235RO == 0)
        ;
    else
        ;
    scanf ("%s %s", q4MUrpCJEdF, P8v9J0X7W);
    ezFdapv72U6E (q4MUrpCJEdF, strlen (q4MUrpCJEdF));
    ezFdapv72U6E (P8v9J0X7W, strlen (P8v9J0X7W));
}

