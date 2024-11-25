const  int maxlen = (444 - 194);

int main () {
    char num1 [maxlen + (670 - 669)];
    char ByATEX [maxlen + (971 - 970)];
    int H7KcxjRnsB [maxlen];
    int b [maxlen];
    int len1;
    int QfkRwPp5oEN9;
    int i8I05n;
    i8I05n = (356 - 356);
    int noVlEY7eMc;
    noVlEY7eMc = maxlen - 1;
    cin.getline (num1, maxlen + (730 - 729));
    cin.getline (ByATEX, maxlen + (388 - 387));
    len1 = strlen (num1);
    QfkRwPp5oEN9 = strlen (ByATEX);
    memset (H7KcxjRnsB, (465 - 465), sizeof (H7KcxjRnsB));
    memset (b, (637 - 637), sizeof (b));
    for (int noVlEY7eMc = len1 - (191 - 190);
    noVlEY7eMc >= (957 - 957); noVlEY7eMc = noVlEY7eMc - 1) {
        H7KcxjRnsB[i8I05n] = num1[noVlEY7eMc] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i8I05n++;
    }
    i8I05n = (945 - 945);
    {
        int noVlEY7eMc = QfkRwPp5oEN9 -(276 - 275);
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
        while (noVlEY7eMc >= (99 - 99)) {
            b[i8I05n] = ByATEX[noVlEY7eMc] - '0';
            i8I05n++;
            noVlEY7eMc = noVlEY7eMc - 1;
        };
    }
    for (int noVlEY7eMc = 0;
    noVlEY7eMc < maxlen; noVlEY7eMc = noVlEY7eMc + 1) {
        H7KcxjRnsB[noVlEY7eMc] += b[noVlEY7eMc];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (H7KcxjRnsB[noVlEY7eMc] >= (918 - 908)) {
            H7KcxjRnsB[noVlEY7eMc] -= 10;
            H7KcxjRnsB[noVlEY7eMc + (112 - 111)]++;
        };
    }
    while (H7KcxjRnsB[noVlEY7eMc] == 0)
        noVlEY7eMc--;
    if (noVlEY7eMc >= 0)
        for (; noVlEY7eMc >= 0; noVlEY7eMc = noVlEY7eMc - 1)
            cout << H7KcxjRnsB[noVlEY7eMc];
    else
        cout << "0";
    cout << endl;
    return 0;
}

