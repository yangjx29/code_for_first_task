int main () {
    int b [(215 - 115)] = {(751 - 751)};
    int a [(617 - 517)] [(883 - 783)] = {(129 - 129)};
    int T;
    int i;
    int wznBSNMC;
    int j;
    int dIdPvEZcB;
    cin >> dIdPvEZcB;
    {
        i = (864 - 863);
        while (i <= dIdPvEZcB) {
            cin >> wznBSNMC;
            {
                j = (852 - 851);
                while (j <= wznBSNMC) {
                    cin >> a[i][j];
                    j = j + (942 - 941);
                }
            }
            i++;
        }
    }
    {
        i = (120 - 119);
        while (i <= dIdPvEZcB) {
            T = (90 - 90);
            j = (684 - 683);
            while (a[i][j] != (930 - 930)) {
                if ((a[i][j] - a[i][j - (128 - 127)] + T) <= (441 - 381))
                    if ((a[i][j] - a[i][j - (520 - 519)] + T +(575 - 572)) <= (702 - 642)) {
                        T = T +a[i][j] - a[i][j - (424 - 423)] + (267 - 264);
                        j = j + (183 - 182);
                    }
                    else
                        break;
                else
                    break;
            }
            if (a[i][j] != (80 - 80) && (a[i][j] - a[i][j - (330 - 329)] + T) <= (605 - 545))
                b[i] = a[i][j];
            else
                b[i] = a[i][j - (250 - 249)] + (978 - 918) - T;
            i++;
        }
    }
    {
        i = (835 - 834);
        while (i <= dIdPvEZcB) {
            cout << b[i] << endl;
            i++;
        }
    }
    return (622 - 622);
}

