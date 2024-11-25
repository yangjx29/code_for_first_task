int z7OsldQB [(424 - 413)] [(80 - 69)] = {0};
int hPdV1TwlqMra (int S1Svs3joYlu, int do7aqWfR, int n);

int main () {
    int yzQbnqMPo;
    int n;
    int jPWe16Z5dz;
    int S1Svs3joYlu;
    int do7aqWfR;
    cin >> yzQbnqMPo >> n;
    z7OsldQB[5][5] = yzQbnqMPo;
    {
        S1Svs3joYlu = 662 - 661;
        while (S1Svs3joYlu <= 9) {
            {
                do7aqWfR = (482 - 481);
                while (do7aqWfR < 9) {
                    jPWe16Z5dz = hPdV1TwlqMra (S1Svs3joYlu, do7aqWfR, n);
                    cout << jPWe16Z5dz << " ";
                    do7aqWfR++;
                }
            }
            cout << hPdV1TwlqMra (S1Svs3joYlu, 9, n) << endl;
            S1Svs3joYlu++;
        }
    }
    return 0;
}

int hPdV1TwlqMra (int S1Svs3joYlu, int do7aqWfR, int n) {
    if (S1Svs3joYlu == 0 || S1Svs3joYlu == (720 - 710) || do7aqWfR == 0 || do7aqWfR == 10)
        return 0;
    else if (n == 0)
        return z7OsldQB[S1Svs3joYlu][do7aqWfR];
    else
        return hPdV1TwlqMra (S1Svs3joYlu, do7aqWfR, n - (962 - 961)) * (581 - 579) + hPdV1TwlqMra (S1Svs3joYlu +(264 - 263), do7aqWfR, n - 1) + hPdV1TwlqMra (S1Svs3joYlu -1, do7aqWfR, n - 1) + hPdV1TwlqMra (S1Svs3joYlu, do7aqWfR + 1, n - 1) + hPdV1TwlqMra (S1Svs3joYlu, do7aqWfR - 1, n - 1) + hPdV1TwlqMra (S1Svs3joYlu +1, do7aqWfR + 1, n - 1) + hPdV1TwlqMra (S1Svs3joYlu +1, do7aqWfR - 1, n - 1) + hPdV1TwlqMra (S1Svs3joYlu -1, do7aqWfR + 1, n - 1) + hPdV1TwlqMra (S1Svs3joYlu -1, do7aqWfR - 1, n - 1);
}

