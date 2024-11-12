int qRkbG50V2q [(761 - 661)] [(485 - 483)];
int YoZa0KJS [(825 - 823)], EtCui2LFrc, dA3Up4x5Pa, htOTY1v4px, KmLHC9rSy;

int WMLYWEK (int dA3Up4x5Pa) {
    {
        EtCui2LFrc = (479 - 478);
        for (; EtCui2LFrc < YoZa0KJS[dA3Up4x5Pa];) {
            {
                htOTY1v4px = EtCui2LFrc +(772 - 771);
                for (; htOTY1v4px <= YoZa0KJS[dA3Up4x5Pa];) {
                    if (qRkbG50V2q[EtCui2LFrc][dA3Up4x5Pa] > qRkbG50V2q[htOTY1v4px][dA3Up4x5Pa]) {
                        qRkbG50V2q[EtCui2LFrc][dA3Up4x5Pa] = qRkbG50V2q[EtCui2LFrc][dA3Up4x5Pa] ^ qRkbG50V2q[htOTY1v4px][dA3Up4x5Pa];
                        qRkbG50V2q[htOTY1v4px][dA3Up4x5Pa] = qRkbG50V2q[EtCui2LFrc][dA3Up4x5Pa] ^ qRkbG50V2q[htOTY1v4px][dA3Up4x5Pa];
                        qRkbG50V2q[EtCui2LFrc][dA3Up4x5Pa] = qRkbG50V2q[EtCui2LFrc][dA3Up4x5Pa] ^ qRkbG50V2q[htOTY1v4px][dA3Up4x5Pa];
                    }
                    htOTY1v4px = htOTY1v4px + (718 - 717);
                }
            }
            EtCui2LFrc = EtCui2LFrc +(875 - 874);
        }
    }
}

int main () {
    WMLYWEK ((260 - 259));
    WMLYWEK ((373 - 373));
    cin >> YoZa0KJS[(100 - 100)] >> YoZa0KJS[(694 - 693)];
    {
        EtCui2LFrc = (208 - 207);
        for (; EtCui2LFrc <= YoZa0KJS[(196 - 196)];) {
            cin >> qRkbG50V2q[EtCui2LFrc][(396 - 396)];
            EtCui2LFrc = EtCui2LFrc +1;
        }
    }
    {
        EtCui2LFrc = (534 - 533);
        for (; EtCui2LFrc <= YoZa0KJS[(731 - 730)];) {
            cin >> qRkbG50V2q[EtCui2LFrc][(956 - 955)];
            EtCui2LFrc++;
        }
    }
    {
        EtCui2LFrc = (24 - 23);
        for (; EtCui2LFrc <= YoZa0KJS[(954 - 954)];) {
            cout << qRkbG50V2q[EtCui2LFrc][(104 - 104)] << ' ';
            EtCui2LFrc++;
        }
    }
    {
        EtCui2LFrc = (601 - 600);
        for (; EtCui2LFrc < YoZa0KJS[(734 - 733)];) {
            cout << qRkbG50V2q[EtCui2LFrc][(841 - 840)] << ' ';
            EtCui2LFrc++;
        }
    }
    cout << qRkbG50V2q[YoZa0KJS[(130 - 129)]][(37 - 36)] << endl;
    return (758 - 758);
}

