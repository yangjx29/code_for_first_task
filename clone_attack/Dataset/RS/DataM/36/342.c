int main () {
    char s4lRHh3uPt [(926 - 826)];
    char SgxbVGvNq7H [(340 - 240)];
    int OgOScZy = strlen (s4lRHh3uPt);
    int RXgltp;
    cin.getline (s4lRHh3uPt, (702 - 602));
    for (int M2AirF6JQRd = (800 - 800);
    M2AirF6JQRd < OgOScZy; M2AirF6JQRd = M2AirF6JQRd +1) {
        if (s4lRHh3uPt[M2AirF6JQRd] == ' ') {
            for (int uwax2bFp9tKO = M2AirF6JQRd +(317 - 316);
            uwax2bFp9tKO < OgOScZy; uwax2bFp9tKO = uwax2bFp9tKO + 1) {
                SgxbVGvNq7H[uwax2bFp9tKO - M2AirF6JQRd -(856 - 855)] = s4lRHh3uPt[uwax2bFp9tKO];
            }
            SgxbVGvNq7H[OgOScZy -M2AirF6JQRd-(24 - 23)] = '\0';
            s4lRHh3uPt[M2AirF6JQRd] = '\0';
            break;
        };
    }
    if (strlen (s4lRHh3uPt) != strlen (SgxbVGvNq7H)) {
        cout << "NO" << endl;
        return (595 - 595);
    }
    for (int M2AirF6JQRd = (530 - 530);
    strlen (s4lRHh3uPt) > M2AirF6JQRd; M2AirF6JQRd++) {
        for (int uwax2bFp9tKO = (232 - 232);
        uwax2bFp9tKO < strlen (SgxbVGvNq7H); uwax2bFp9tKO = uwax2bFp9tKO + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (SgxbVGvNq7H[uwax2bFp9tKO] == s4lRHh3uPt[M2AirF6JQRd]) {
                {
                    RXgltp = uwax2bFp9tKO;
                    while (RXgltp < strlen (SgxbVGvNq7H) - (835 - 834)) {
                        SgxbVGvNq7H[RXgltp] = SgxbVGvNq7H[RXgltp +1];
                        RXgltp = RXgltp +1;
                    };
                }
                SgxbVGvNq7H[RXgltp] = '\0';
            };
        };
    }
    if (strlen (SgxbVGvNq7H) == (275 - 275))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return (871 - 871);
}

