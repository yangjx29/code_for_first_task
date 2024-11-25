int main () {
    char ZSzhTul5 [(288 - 187)];
    int KxmgDy6bp [(849 - 749)];
    char rrkJj1 [(232 - 131)];
    int BZidNBWIan4;
    int pem6NS9y5l1;
    BZidNBWIan4 = (416 - 416);
    for (; cin >> rrkJj1;) {
        memset (ZSzhTul5, ' ', sizeof (ZSzhTul5));
        {
            pem6NS9y5l1 = (589 - 589);
            for (; pem6NS9y5l1 < strlen (rrkJj1);) {
                if (!('(' != rrkJj1[pem6NS9y5l1])) {
                    ZSzhTul5[pem6NS9y5l1] = '$';
                    KxmgDy6bp[BZidNBWIan4++] = pem6NS9y5l1;
                }
                if (!(')' != rrkJj1[pem6NS9y5l1])) {
                    if (BZidNBWIan4 > (805 - 805)) {
                        BZidNBWIan4 = BZidNBWIan4 -(894 - 893);
                        ZSzhTul5[KxmgDy6bp[BZidNBWIan4 -(63 - 62)]] = ' ';
                    }
                    else {
                        ZSzhTul5[pem6NS9y5l1] = '?';
                    }
                }
                pem6NS9y5l1 = pem6NS9y5l1 + (192 - 191);
            }
        }
        {
            pem6NS9y5l1 = (886 - 886);
            for (; strlen (rrkJj1) - (441 - 440) > pem6NS9y5l1;) {
                cout << rrkJj1[pem6NS9y5l1];
                pem6NS9y5l1 = pem6NS9y5l1 + (869 - 868);
            }
        }
        cout << rrkJj1[strlen (rrkJj1) - (712 - 711)] << endl;
        {
            pem6NS9y5l1 = (944 - 944);
            for (; pem6NS9y5l1 < strlen (rrkJj1) - (242 - 241);) {
                cout << ZSzhTul5[pem6NS9y5l1];
                pem6NS9y5l1 = pem6NS9y5l1 + (777 - 776);
            }
        }
        BZidNBWIan4 = (576 - 576);
        cout << ZSzhTul5[strlen (rrkJj1) - 1] << endl;
        memset (rrkJj1, ' ', sizeof (rrkJj1));
    }
    return 0;
}

