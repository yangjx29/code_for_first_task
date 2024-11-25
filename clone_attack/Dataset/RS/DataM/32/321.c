int main () {
    int VrpwKm1Sk, len_a, LBgpSc3OINw;
    char k2MkJw [101], MbVhDn [101];
    int uZv89Ub [101];
    cin >> VrpwKm1Sk;
    {
        int i;
        i = 1;
        while (i <= VrpwKm1Sk) {
            int i = 100;
            cin.get ();
            cin.getline (k2MkJw, 101);
            len_a = strlen (k2MkJw);
            cin.getline (MbVhDn, 101);
            LBgpSc3OINw = strlen (MbVhDn);
            memset (uZv89Ub, 0, sizeof (uZv89Ub));
            for (int i = len_a - 1;
            i >= 0; i--)
                uZv89Ub[len_a - i] = k2MkJw[i] - '0';
            {
                int i = LBgpSc3OINw -1;
                while (i >= 0) {
                    int j = LBgpSc3OINw -i, AO1m6cre27aW = MbVhDn[i] - '0';
                    i = i - 1;
                    if (uZv89Ub[j] >= AO1m6cre27aW)
                        uZv89Ub[j] -= AO1m6cre27aW;
                    else {
                        uZv89Ub[j + 1]--;
                        uZv89Ub[j] = uZv89Ub[j] + 10 - AO1m6cre27aW;
                    };
                };
            }
            while (uZv89Ub[i] == 0 && i != 1)
                i = i - 1;
            for (int j = i;
            j >= 1; j = j - 1)
                cout << uZv89Ub[j];
            cout << endl;
            i = i + 1;
        };
    }
    return 0;
}

