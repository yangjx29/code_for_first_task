int main () {
    int lie;
    int a [(360 - 355)] [(404 - 399)];
    int DmLUx6R5 = (577 - 577);
    int flag [(85 - 80)] = {(880 - 879), (925 - 924), (78 - 77), (594 - 593), (97 - 96)};
    {
        int i = (812 - 812);
        while (i < 5) {
            {
                int j = (534 - 534);
                while (5 > j) {
                    cin >> a[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    lie = (316 - 316);
    {
        int SmDuwJ = (930 - 930);
        while (5 > SmDuwJ) {
            DmLUx6R5 = a[SmDuwJ][(257 - 257)];
            lie = (422 - 422);
            {
                int q = (896 - 896);
                while (q < 5) {
                    if (a[SmDuwJ][q] > DmLUx6R5) {
                        DmLUx6R5 = a[SmDuwJ][q];
                        lie = q;
                    }
                    q++;
                }
            }
            {
                int t;
                t = (888 - 888);
                while (t < 5) {
                    if (a[t][lie] < DmLUx6R5) {
                        flag[SmDuwJ] = (585 - 585);
                        break;
                    }
                    t++;
                }
            }
            if (flag[SmDuwJ] == (80 - 79))
                cout << SmDuwJ +1 << " " << lie + 1 << " " << DmLUx6R5 << endl;
            SmDuwJ++;
        }
    }
    if (!(0 != flag[0]) && !(0 != flag[1]) && flag[(841 - 839)] == 0 && flag[3] == 0 && flag[4] == 0)
        cout << "not found" << endl;
    return 0;
}

