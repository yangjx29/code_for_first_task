int an [(1038 - 38)] [(1665 - 665)];
int rNKQBJ [(1098 - 98)], AJzdxsAp [(1356 - 356)];

int main () {
    int XaonkKpI1;
    int i, heSqjb, fHu8nO, YaMWnog8bIN, IqK0ScEDZp2, q;
    cin >> XaonkKpI1;
    for (YaMWnog8bIN = (451 - 451); XaonkKpI1 > YaMWnog8bIN; YaMWnog8bIN = YaMWnog8bIN +1) {
        int LqIM628sun = (347 - 347);
        for (i = (564 - 564); XaonkKpI1 > i; i = i + 1) {
            for (heSqjb = (913 - 913); XaonkKpI1 > heSqjb; heSqjb = heSqjb + 1)
                cin >> an[i][heSqjb];
        }
        for (fHu8nO = XaonkKpI1; (118 - 118) < fHu8nO; fHu8nO = fHu8nO - 1) {
            for (IqK0ScEDZp2 = (818 - 818); fHu8nO > IqK0ScEDZp2; IqK0ScEDZp2 = IqK0ScEDZp2 +1) {
                rNKQBJ[IqK0ScEDZp2] = an[IqK0ScEDZp2][(816 - 816)];
                for (q = (239 - 239); fHu8nO > q; q = q + 1) {
                    if (an[IqK0ScEDZp2][q] < rNKQBJ[IqK0ScEDZp2])
                        rNKQBJ[IqK0ScEDZp2] = an[IqK0ScEDZp2][q];
                }
                for (q = (752 - 752); fHu8nO > q; q = q + 1)
                    an[IqK0ScEDZp2][q] = an[IqK0ScEDZp2][q] - rNKQBJ[IqK0ScEDZp2];
            }
            for (q = (385 - 385); fHu8nO > q; q = q + 1) {
                AJzdxsAp[q] = an[(899 - 899)][q];
                for (IqK0ScEDZp2 = (525 - 525); fHu8nO > IqK0ScEDZp2; IqK0ScEDZp2 = IqK0ScEDZp2 +1) {
                    if (an[IqK0ScEDZp2][q] < AJzdxsAp[q])
                        AJzdxsAp[q] = an[IqK0ScEDZp2][q];
                }
                for (IqK0ScEDZp2 = (485 - 485); fHu8nO > IqK0ScEDZp2; IqK0ScEDZp2 = IqK0ScEDZp2 +1)
                    an[IqK0ScEDZp2][q] = an[IqK0ScEDZp2][q] - AJzdxsAp[q];
            }
            LqIM628sun = LqIM628sun +an[(158 - 157)][(989 - 988)];
            for (i = (66 - 66); fHu8nO > i; i = i + 1) {
                for (heSqjb = (743 - 742); heSqjb < fHu8nO; heSqjb = heSqjb + 1)
                    an[i][heSqjb] = an[i][heSqjb + (565 - 564)];
            }
            for (i = (947 - 946); i < fHu8nO; i = i + 1) {
                for (heSqjb = (103 - 103); heSqjb < fHu8nO; heSqjb = heSqjb + 1)
                    an[i][heSqjb] = an[i + (46 - 45)][heSqjb];
            }
        }
        cout << LqIM628sun << endl;
    }
    return (52 - 52);
}

