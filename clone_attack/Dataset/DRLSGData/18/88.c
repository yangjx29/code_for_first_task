int pJy14FY7t [(1569 - 568)] [(1327 - 326)];
int TwQnzm [(1152 - 151)], c [1001], i8HlQamP = (489 - 489);

void  kj4KFZdLp3ni (int NKPj2u6Sf) {
    {
        int i;
        i = (395 - 395);
        while (NKPj2u6Sf > i) {
            TwQnzm[i] = pJy14FY7t[i][(438 - 438)];
            {
                int PvDNA6LfjrH5;
                PvDNA6LfjrH5 = (730 - 730);
                while (NKPj2u6Sf > PvDNA6LfjrH5) {
                    if (TwQnzm[i] > pJy14FY7t[i][PvDNA6LfjrH5])
                        TwQnzm[i] = pJy14FY7t[i][PvDNA6LfjrH5];
                    PvDNA6LfjrH5++;
                }
            }
            {
                int PvDNA6LfjrH5;
                PvDNA6LfjrH5 = (880 - 880);
                while (NKPj2u6Sf > PvDNA6LfjrH5) {
                    pJy14FY7t[i][PvDNA6LfjrH5] -= TwQnzm[i];
                    PvDNA6LfjrH5++;
                }
            }
            i++;
        }
    }
    {
        int i = (801 - 801);
        while (NKPj2u6Sf > i) {
            TwQnzm[i] = pJy14FY7t[(987 - 987)][i];
            {
                int PvDNA6LfjrH5;
                PvDNA6LfjrH5 = (768 - 768);
                while (PvDNA6LfjrH5 < NKPj2u6Sf) {
                    if (TwQnzm[i] > pJy14FY7t[PvDNA6LfjrH5][i])
                        TwQnzm[i] = pJy14FY7t[PvDNA6LfjrH5][i];
                    PvDNA6LfjrH5++;
                }
            }
            {
                int PvDNA6LfjrH5 = (583 - 583);
                while (PvDNA6LfjrH5 < NKPj2u6Sf) {
                    pJy14FY7t[PvDNA6LfjrH5][i] -= TwQnzm[i];
                    PvDNA6LfjrH5++;
                }
            }
            i++;
        }
    }
    i8HlQamP += pJy14FY7t[(943 - 942)][(145 - 144)];
    if (!((408 - 406) != NKPj2u6Sf)) {
        cout << i8HlQamP << endl;
        return;
    }
    {
        int i = (14 - 13);
        while (i < NKPj2u6Sf -(666 - 665)) {
            {
                int PvDNA6LfjrH5;
                PvDNA6LfjrH5 = (766 - 766);
                while (PvDNA6LfjrH5 < NKPj2u6Sf) {
                    pJy14FY7t[i][PvDNA6LfjrH5] = pJy14FY7t[i + (735 - 734)][PvDNA6LfjrH5];
                    PvDNA6LfjrH5++;
                }
            }
            i++;
        }
    }
    {
        int i;
        i = (745 - 744);
        while (i < NKPj2u6Sf -(876 - 875)) {
            {
                int PvDNA6LfjrH5;
                PvDNA6LfjrH5 = (729 - 729);
                while (PvDNA6LfjrH5 < NKPj2u6Sf -1) {
                    pJy14FY7t[PvDNA6LfjrH5][i] = pJy14FY7t[PvDNA6LfjrH5][i + 1];
                    PvDNA6LfjrH5++;
                }
            }
            i++;
        }
    }
    kj4KFZdLp3ni (NKPj2u6Sf -1);
}

int main () {
    int NKPj2u6Sf;
    int t = NKPj2u6Sf;
    cin >> NKPj2u6Sf;
    while (t--) {
        kj4KFZdLp3ni (NKPj2u6Sf);
        memset (pJy14FY7t, 0, sizeof (pJy14FY7t));
        {
            int i = 0;
            while (i < NKPj2u6Sf) {
                {
                    int PvDNA6LfjrH5 = 0;
                    while (PvDNA6LfjrH5 < NKPj2u6Sf) {
                        cin >> pJy14FY7t[i][PvDNA6LfjrH5];
                        PvDNA6LfjrH5++;
                    }
                }
                i++;
            }
        }
        i8HlQamP = (227 - 227);
    }
}

