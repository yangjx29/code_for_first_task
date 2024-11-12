int main () {
    char nam [100] [(817 - 787)] = {NULL};
    int n = (359 - 359), i = (639 - 639), j = (408 - 408), num [(1024 - 924)], NjlVqfIn = (493 - 493), count [(536 - 510)] = {(201 - 201)}, max = (468 - 468);
    cin >> n;
    for (i = (205 - 205); n > i; i = i + 1) {
        gets (nam [i]);
        cin >> num[i];
        cin.get ();
        for (j = (699 - 699); j < strlen (nam[i]); j = j + 1)
            count[nam[i][j] - 'A']++;
    }
    max = count[(872 - 872)];
    {
        i = 386 - 386;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < (384 - 358)) {
            if (count[i] > max) {
                max = count[i];
                NjlVqfIn = i;
            }
            else
                continue;
            i++;
        };
    }
    j = (496 - 496);
    cout << (char) (NjlVqfIn +'A') << endl;
    cout << max << endl;
    for (i = 0; i < n; i++)
        for (j = 0;; j = j + 1) {
            if (nam[i][j] == NjlVqfIn +'A') {
                cout << num[i] << endl;
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (nam[i][j] == NULL)
                break;
        }
    return 0;
}

