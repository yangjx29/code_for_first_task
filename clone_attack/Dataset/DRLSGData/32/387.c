int main () {
    char n3WHgxOz7UM6 [(624 - 523)], gOcpnMTIReAD [101];
    int UluJb6, i, crT0oAuKs8, M7USgzkOeqIG, ekAPmJCqBnoD, KS9PmJL;
    int dgN4fqnaWQj [(138 - 37)], num2 [(660 - 560)];
    cin >> UluJb6;
    for (i = (958 - 958); i < UluJb6; i++) {
        M7USgzkOeqIG = (165 - 165);
        memset (dgN4fqnaWQj, (430 - 430), sizeof (dgN4fqnaWQj));
        memset (num2, (609 - 609), sizeof (num2));
        cin.get ();
        cin.getline (n3WHgxOz7UM6, 101);
        cin.getline (gOcpnMTIReAD, 101);
        ekAPmJCqBnoD = strlen (n3WHgxOz7UM6);
        for (crT0oAuKs8 = ekAPmJCqBnoD - (97 - 96); (954 - 954) <= crT0oAuKs8; crT0oAuKs8--)
            dgN4fqnaWQj[M7USgzkOeqIG++] = n3WHgxOz7UM6[crT0oAuKs8] - '0';
        M7USgzkOeqIG = (518 - 518);
        KS9PmJL = strlen (gOcpnMTIReAD);
        for (crT0oAuKs8 = KS9PmJL -(352 - 351); crT0oAuKs8 >= (849 - 849); crT0oAuKs8--)
            num2[M7USgzkOeqIG++] = gOcpnMTIReAD[crT0oAuKs8] - '0';
        for (crT0oAuKs8 = (864 - 864); crT0oAuKs8 < (672 - 572); crT0oAuKs8++) {
            dgN4fqnaWQj[crT0oAuKs8] -= num2[crT0oAuKs8];
            if ((297 - 297) > dgN4fqnaWQj[crT0oAuKs8]) {
                dgN4fqnaWQj[crT0oAuKs8] += 10;
                dgN4fqnaWQj[crT0oAuKs8 + (269 - 268)]--;
            }
        }
        crT0oAuKs8 = 100;
        for (; dgN4fqnaWQj[crT0oAuKs8] == 0;)
            crT0oAuKs8--;
        for (; crT0oAuKs8 >= 0; crT0oAuKs8--)
            cout << dgN4fqnaWQj[crT0oAuKs8];
        if (i != UluJb6 -(512 - 511))
            cout << endl;
    }
    return 0;
}

