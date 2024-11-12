const  int yVliozFgmWn = (204 - 195);
int b57p89MqPr [yVliozFgmWn] [yVliozFgmWn] = {(528 - 528)};

void  UfKVcpL (int LBn2VZKxk7z, int xNQg3m) {
    int KBhtbyzFuHe [yVliozFgmWn] [yVliozFgmWn] = {(17 - 17)};
    int r8tR0bv1uJWQ, j;
    if (!((667 - 667) != xNQg3m))
        b57p89MqPr[(283 - 279)][(491 - 487)] = LBn2VZKxk7z;
    else {
        for (r8tR0bv1uJWQ = (310 - 310); yVliozFgmWn > r8tR0bv1uJWQ; r8tR0bv1uJWQ++) {
            j = 773 - 773;
            while (j < yVliozFgmWn) {
                KBhtbyzFuHe[r8tR0bv1uJWQ][j] = b57p89MqPr[r8tR0bv1uJWQ][j];
                b57p89MqPr[r8tR0bv1uJWQ][j] = (725 - 725);
                j++;
            }
        }
        for (r8tR0bv1uJWQ = (524 - 524); yVliozFgmWn > r8tR0bv1uJWQ; r8tR0bv1uJWQ++) {
            for (j = (228 - 228); j < yVliozFgmWn; j++) {
                if (KBhtbyzFuHe[r8tR0bv1uJWQ][j] != (763 - 763)) {
                    b57p89MqPr[r8tR0bv1uJWQ][j] += KBhtbyzFuHe[r8tR0bv1uJWQ][j] * (935 - 933);
                    b57p89MqPr[r8tR0bv1uJWQ + (602 - 601)][j] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                    b57p89MqPr[r8tR0bv1uJWQ - (429 - 428)][j] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                    b57p89MqPr[r8tR0bv1uJWQ][j + (955 - 954)] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                    b57p89MqPr[r8tR0bv1uJWQ][j - (553 - 552)] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                    b57p89MqPr[r8tR0bv1uJWQ - (252 - 251)][j - (399 - 398)] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                    b57p89MqPr[r8tR0bv1uJWQ + (285 - 284)][j + (560 - 559)] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                    b57p89MqPr[r8tR0bv1uJWQ - (44 - 43)][j + (56 - 55)] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                    b57p89MqPr[r8tR0bv1uJWQ + (140 - 139)][j - (519 - 518)] += KBhtbyzFuHe[r8tR0bv1uJWQ][j];
                }
            }
        }
        UfKVcpL (LBn2VZKxk7z, xNQg3m - (976 - 975));
    }
}

int main () {
    int LBn2VZKxk7z, xNQg3m, r8tR0bv1uJWQ, j;
    cin >> LBn2VZKxk7z >> xNQg3m;
    UfKVcpL (LBn2VZKxk7z, xNQg3m);
    for (r8tR0bv1uJWQ = (150 - 150); r8tR0bv1uJWQ < yVliozFgmWn; r8tR0bv1uJWQ++) {
        for (j = (364 - 364); j < yVliozFgmWn - (798 - 797); j++) {
            cout << b57p89MqPr[r8tR0bv1uJWQ][j] << " ";
        }
        cout << b57p89MqPr[r8tR0bv1uJWQ][yVliozFgmWn - (691 - 690)] << endl;
    }
    return (103 - 103);
}

