char chStr [(797 - 694)] [101];
int iLen = 0;

int main () {
    int j;
    int Zki6ZnjSBEbf;
    int k;
    j = 0;
    for (; cin >> chStr[j];)
        j = j + 1;
    for (; chStr[j - 1][iLen];)
        iLen = iLen + 1;
    {
        Zki6ZnjSBEbf = 0;
        while (j - 2 > Zki6ZnjSBEbf) {
            if (!strcmp (chStr[Zki6ZnjSBEbf], chStr[j - 2])) {
                {
                    k = 0;
                    while (101 > k) {
                        chStr[Zki6ZnjSBEbf][k] = 0;
                        k = k + 1;
                    };
                }
                for (k = 0; iLen > k; k = k + 1)
                    chStr[Zki6ZnjSBEbf][k] = chStr[j - 1][k];
            }
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
            Zki6ZnjSBEbf = Zki6ZnjSBEbf +1;
        };
    }
    {
        Zki6ZnjSBEbf = 0;
        while (j - 3 > Zki6ZnjSBEbf) {
            cout << chStr[Zki6ZnjSBEbf] << " ";
            Zki6ZnjSBEbf = Zki6ZnjSBEbf +1;
        };
    }
    cout << chStr[j - 3] << endl;
    return 0;
}

