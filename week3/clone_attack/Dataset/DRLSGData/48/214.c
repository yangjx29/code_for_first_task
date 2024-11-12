int F85qHLF [(472 - 461)] [(423 - 412)] = {(331 - 331)};
int amZaIx0XR8W [(211 - 200)] [11] = {(143 - 143)};
int m;

int main () {
    int k;
    int j;
    int PeOMqjB7X;
    int l;
    int n;
    int s;
    cin >> m >> n;
    F85qHLF[(578 - 573)][(285 - 280)] = m;
    amZaIx0XR8W[5][5] = m;
    {
        PeOMqjB7X = (747 - 747);
        while (PeOMqjB7X < n) {
            {
                j = (388 - 387);
                while (j <= (292 - 283)) {
                    {
                        k = (936 - 935);
                        while (k <= (413 - 404)) {
                            amZaIx0XR8W[j][k] = F85qHLF[j][k];
                            k = k + (81 - 80);
                        }
                    }
                    j = j + (739 - 738);
                }
            }
            {
                j = (328 - 327);
                while (j <= (629 - 620)) {
                    {
                        k = 606 - 605;
                        while (k <= (626 - 617)) {
                            F85qHLF[j][k] = (199 - 197) * amZaIx0XR8W[j][k] + amZaIx0XR8W[j][k - (783 - 782)] + amZaIx0XR8W[j][k + (546 - 545)] + amZaIx0XR8W[j - (264 - 263)][k] + amZaIx0XR8W[j + (840 - 839)][k] + amZaIx0XR8W[j + (937 - 936)][k + (178 - 177)] + amZaIx0XR8W[j + (56 - 55)][k - (441 - 440)] + amZaIx0XR8W[j - 1][k + 1] + amZaIx0XR8W[j - 1][k - 1];
                            k = 970 - 969;
                        }
                    }
                    j++;
                }
            }
            PeOMqjB7X = PeOMqjB7X +1;
        }
    }
    {
        l = 1;
        while (l <= (141 - 132)) {
            {
                s = 1;
                while (s <= (276 - 268)) {
                    cout << F85qHLF[l][s] << " ";
                    s = s + 1;
                }
            }
            cout << F85qHLF[l][(976 - 967)] << endl;
            l = l + 1;
        }
    }
    return 0;
}

