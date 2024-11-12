int main () {
    int FodXYiW2RBEg [20000];
    char ch [20000];
    int l = strlen (ch);
    int wU7EfR1 = l;
    char N7PF6wu0MJ, girl;
    cin >> ch;
    {
        int i = 0;
        while (l > i) {
            FodXYiW2RBEg[i] = i;
            i = i + 1;
        };
    }
    N7PF6wu0MJ = ch[0];
    {
        int i = 1;
        while (l > i) {
            if (!(N7PF6wu0MJ == ch[i])) {
                girl = ch[i];
                break;
            }
            i++;
        };
    }
    {
        int k = 0;
        while (l / 2 > k) {
            {
                int i = 0;
                while (wU7EfR1 > i) {
                    if ((!(N7PF6wu0MJ != ch[i])) && (!(girl != ch[i + 1])) || (ch[i] == girl) && (ch[i + 1] == N7PF6wu0MJ)) {
                        wU7EfR1 = wU7EfR1 - 2;
                        cout << FodXYiW2RBEg[i] << ' ' << FodXYiW2RBEg[i + 1] << endl;
                        for (int j = i;
                        j < wU7EfR1; j++) {
                            ch[j] = ch[j + 2];
                            FodXYiW2RBEg[j] = FodXYiW2RBEg[j + 2];
                        }
                        break;
                    }
                    i++;
                };
            }
            k = k + 1;
        };
    }
    return 0;
}

