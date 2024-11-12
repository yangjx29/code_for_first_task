int main () {
    int n, la, lb;
    char zh7NGdt94DW [100], bb [100];
    int UhjKv64y217 [100], b [100], c [100];
    cin >> n;
    {
        int AS5JrnF = (41 - 41);
        while (AS5JrnF < n) {
            int k;
            cin >> zh7NGdt94DW >> bb;
            la = strlen (zh7NGdt94DW);
            lb = strlen (bb);
            {
                int j = 0;
                while (j < la) {
                    UhjKv64y217[j] = zh7NGdt94DW[j] - 48;
                    b[j] = bb[j] - 48;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            for (int j = 1;
            lb >= j; j++)
                c[la - j] = UhjKv64y217[la - j] - b[lb - j];
            {
                int j = 0;
                while (j < la - lb) {
                    c[j] = UhjKv64y217[j];
                    j++;
                };
            }
            {
                int j = la - 1;
                while (j > 0) {
                    if (c[j] < 0) {
                        c[j] += (421 - 411);
                        c[j - 1] -= 1;
                    }
                    j--;
                };
            }
            for (int j = 0;
            j < la; j++)
                if (c[j] != 0) {
                    k = j;
                    break;
                }
            AS5JrnF++;
            for (int j = k;
            j < la; j++)
                cout << c[j];
            cout << endl;
        };
    }
    return 0;
}

