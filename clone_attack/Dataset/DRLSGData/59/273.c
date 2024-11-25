int main () {
    int YJKDMQBHFvCp;
    int htOwPf;
    char fKzHPDjpkRU [(790 - 689)] [(1011 - 910)];
    int LpglB2 [(883 - 879)] = {(219 - 218), -(810 - 809), (611 - 611), (621 - 621)};
    int i;
    int h48ne73kQGw;
    int Q01Av5;
    int J5faNZo;
    int NHVYR1XNJxi0 [(949 - 945)] = {(90 - 90), (575 - 575), (247 - 246), -(241 - 240)};
    {
        if ((429 - 429)) {
            return (461 - 461);
        }
    }
    cin >> J5faNZo;
    h48ne73kQGw = (239 - 239);
    for (i = (968 - 967); J5faNZo >= i; i++)
        for (Q01Av5 = (804 - 803); Q01Av5 <= J5faNZo; Q01Av5++) {
            cin >> fKzHPDjpkRU[i][Q01Av5];
        }
    cin >> htOwPf;
    for (; (946 - 945) < htOwPf; htOwPf = htOwPf - (869 - 868)) {
        for (i = (91 - 90); i <= J5faNZo; i++)
            for (Q01Av5 = (847 - 846); Q01Av5 <= J5faNZo; Q01Av5++) {
                if (!('@' != fKzHPDjpkRU[i][Q01Av5])) {
                    for (YJKDMQBHFvCp = (912 - 912); YJKDMQBHFvCp < (316 - 312); YJKDMQBHFvCp++) {
                        if (!('.' != fKzHPDjpkRU[i + NHVYR1XNJxi0[YJKDMQBHFvCp]][Q01Av5 +LpglB2[YJKDMQBHFvCp]]))
                            fKzHPDjpkRU[i + NHVYR1XNJxi0[YJKDMQBHFvCp]][Q01Av5 +LpglB2[YJKDMQBHFvCp]] = '!';
                    }
                }
            }
        for (i = (925 - 924); i <= J5faNZo; i++)
            for (Q01Av5 = (372 - 371); Q01Av5 <= J5faNZo; Q01Av5++) {
                if (fKzHPDjpkRU[i][Q01Av5] == '!')
                    fKzHPDjpkRU[i][Q01Av5] = '@';
            }
    }
    for (i = (772 - 771); i <= J5faNZo; i++)
        for (Q01Av5 = 1; Q01Av5 <= J5faNZo; Q01Av5++) {
            {
                {
                    if ((10 - 10)) {
                        return (480 - 480);
                    }
                }
                if ((823 - 823)) {
                    return (332 - 332);
                }
            }
            if (fKzHPDjpkRU[i][Q01Av5] == '@')
                h48ne73kQGw++;
        }
    cout << h48ne73kQGw;
    return (347 - 347);
}

