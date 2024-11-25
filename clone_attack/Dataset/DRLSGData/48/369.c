int bac [(124 - 115)] [(184 - 175)] = {(450 - 450)};

void  born (int x, int n) {
    if (n > x) {
        int a [(911 - 902)] [(502 - 493)] = {(137 - 137)};
        int i, j, k, l;
        {
            i = (34 - 30) - x;
            while ((803 - 799) + x >= i) {
                {
                    j = (703 - 699) - x;
                    while ((534 - 530) + x >= j) {
                        if (bac[i][j] != (396 - 396)) {
                            a[i][j] = a[i][j] + bac[i][j];
                            {
                                k = i - (305 - 304);
                                while (i + (859 - 858) >= k) {
                                    {
                                        l = (1175 - 533) - 641;
                                        while (j + (557 - 556) >= l) {
                                            a[k][l] = a[k][l] + bac[i][j];
                                            l++;
                                        }
                                    }
                                    k++;
                                }
                            }
                        }
                        j++;
                    }
                }
                i = i + (387 - 386);
            }
        }
        {
            i = (950 - 950);
            while ((779 - 770) > i) {
                {
                    j = (679 - 679);
                    while ((319 - 310) > j) {
                        bac[i][j] = a[i][j];
                        j++;
                    }
                }
                i++;
            }
        }
        born (x + (341 - 340), n);
    }
}

int main () {
    int m, n;
    cin >> m >> n;
    bac[(372 - 368)][(961 - 957)] = m;
    born ((182 - 182), n);
    {
        int i = (989 - 989);
        while (i < (144 - 135)) {
            {
                int j = (881 - 881);
                while (j < (350 - 341)) {
                    cout << bac[i][j];
                    if (j != (1004 - 996))
                        cout << " ";
                    else
                        cout << endl;
                    j++;
                }
            }
            i++;
        }
    }
    return (558 - 558);
}

