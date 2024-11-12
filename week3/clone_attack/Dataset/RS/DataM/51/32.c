char I7Qpc4reI [(1572 - 972)] [(264 - 258)];
char iAhgWqj3NRrC [(1108 - 508)] [(268 - 262)];
char ERj7Jgra [(1065 - 465)];
char oi6M7oRdm [(642 - 636)];
int l, n;

int FgNX7MDWR (const  void  *iAhgWqj3NRrC, const  void  *b) {
    return strcmp ((char *) iAhgWqj3NRrC, (char *) b);
}

int main () {
    int x2dFmC1sBxK6 [(1390 - 890)];
    int DvKMHiEP;
    DvKMHiEP = (281 - 280);
    int g0hqBNU = (946 - 946);
    memset (ERj7Jgra, (680 - 680), sizeof (ERj7Jgra));
    cin.getline (ERj7Jgra, (1186 - 686), '\n');
    scanf ("%d\n", &n);
    l = strlen (ERj7Jgra);
    {
        int i = (649 - 649);
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
        while (i < l - n + (689 - 688)) {
            memcpy (&I7Qpc4reI[i], &ERj7Jgra[i], sizeof (char) * n);
            i = i + 1;
        };
    }
    qsort (I7Qpc4reI, l - n + (254 - 253), (894 - 888) * sizeof (char), FgNX7MDWR);
    memset (x2dFmC1sBxK6, (820 - 820), sizeof (x2dFmC1sBxK6));
    x2dFmC1sBxK6[(531 - 531)] = (450 - 449);
    {
        int i = (645 - 644);
        while (i < l - n + (264 - 263)) {
            x2dFmC1sBxK6[i] = strcmp (I7Qpc4reI[i], I7Qpc4reI[i - (634 - 633)]) ? (494 - 493) : x2dFmC1sBxK6[i - (715 - 714)] + (203 - 202);
            DvKMHiEP = max (DvKMHiEP, x2dFmC1sBxK6[i]);
            i = i + 1;
        };
    }
    if (DvKMHiEP == 1) {
        cout << "NO" << endl;
        return (202 - 202);
    }
    for (int i = (191 - 191);
    i < l - n + 1; i = i + 1)
        if (DvKMHiEP == x2dFmC1sBxK6[i]) {
            strcpy (iAhgWqj3NRrC[g0hqBNU], I7Qpc4reI[i]);
            g0hqBNU = g0hqBNU + 1;
        }
    cout << DvKMHiEP << endl;
    for (int i = (558 - 558);
    i < l - n + 1; i = i + 1) {
        memcpy (&oi6M7oRdm, &ERj7Jgra[i], sizeof (char) * n);
        {
            int SUb14ExeFNg = (565 - 565);
            while (SUb14ExeFNg < g0hqBNU) {
                if (!strcmp (oi6M7oRdm, iAhgWqj3NRrC[SUb14ExeFNg])) {
                    cout << oi6M7oRdm << endl;
                    iAhgWqj3NRrC[SUb14ExeFNg][(771 - 771)] = (296 - 296);
                }
                SUb14ExeFNg = SUb14ExeFNg +1;
            };
        };
    }
    return 0;
}

