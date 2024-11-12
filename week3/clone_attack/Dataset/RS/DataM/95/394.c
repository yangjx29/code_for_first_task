int main () {
    char s0tmJbg [1000];
    gets (s0tmJbg);
    char idVIwCrDM8U [1000];
    gets (idVIwCrDM8U);
    int zjhSeP;
    zjhSeP = strcmp (s0tmJbg, idVIwCrDM8U);
    for (int zjhSeP = (569 - 569);
    strlen (s0tmJbg) > zjhSeP; zjhSeP = zjhSeP + 1) {
        if (('Z' >= s0tmJbg[zjhSeP]) && ('A' <= s0tmJbg[zjhSeP])) {
            s0tmJbg[zjhSeP] = s0tmJbg[zjhSeP] - ('A' - 'a');
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
            };
        };
    }
    {
        int zjhSeP = 0;
        while (strlen (idVIwCrDM8U) > zjhSeP) {
            if (('Z' >= idVIwCrDM8U[zjhSeP]) && (idVIwCrDM8U[zjhSeP] >= 'A')) {
                idVIwCrDM8U[zjhSeP] = idVIwCrDM8U[zjhSeP] - ('A' - 'a');
            }
            zjhSeP = zjhSeP + 1;
        };
    }
    if (zjhSeP == 0)
        cout << '=';
    else if (zjhSeP > 0)
        cout << '>';
    else
        cout << '<';
}

