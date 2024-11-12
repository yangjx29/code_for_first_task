int main () {
    int iMBNJk85OyG;
    char xgnFN9cPtYHS [(229 - 148)];
    char rKsqAmu [(471 - 390)];
    cin.getline (xgnFN9cPtYHS, (783 - 702));
    cin.getline (rKsqAmu, 81);
    for (iMBNJk85OyG = (631 - 631); strlen (xgnFN9cPtYHS) > iMBNJk85OyG; iMBNJk85OyG++) {
        if ('A' <= xgnFN9cPtYHS[iMBNJk85OyG] && 'Z' >= xgnFN9cPtYHS[iMBNJk85OyG])
            xgnFN9cPtYHS[iMBNJk85OyG] = xgnFN9cPtYHS[iMBNJk85OyG] + (186 - 154);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (iMBNJk85OyG = (698 - 698); iMBNJk85OyG < strlen (rKsqAmu); iMBNJk85OyG++) {
        if (rKsqAmu[iMBNJk85OyG] >= 'A' && rKsqAmu[iMBNJk85OyG] <= 'Z')
            rKsqAmu[iMBNJk85OyG] = rKsqAmu[iMBNJk85OyG] + 32;
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
    }
    if (strcmp (xgnFN9cPtYHS, rKsqAmu) == 0)
        cout << "=";
    else if (strcmp (xgnFN9cPtYHS, rKsqAmu) == 1)
        cout << ">";
    else
        cout << "<";
    return 0;
}

