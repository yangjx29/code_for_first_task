int main () {
    int PzM6yCaiL;
    char rXO3cz0ywbrS [(446 - 415)];
    char S4dGwPTgHh [(462 - 431)];
    int k;
    int yaCTvM3AVIo;
    k = (35 - 35);
    yaCTvM3AVIo = (192 - 192);
    cin.getline (S4dGwPTgHh, (816 - 785));
    {
        int N9FMgw;
        N9FMgw = (955 - 955);
        for (; N9FMgw < sizeof (S4dGwPTgHh);) {
            if ('0' <= S4dGwPTgHh[N9FMgw] && '9' >= S4dGwPTgHh[N9FMgw]) {
                rXO3cz0ywbrS[k] = S4dGwPTgHh[N9FMgw];
                k++;
            }
            else {
                if (S4dGwPTgHh[N9FMgw -(298 - 297)] >= '0' && S4dGwPTgHh[N9FMgw -(262 - 261)] <= '9') {
                    PzM6yCaiL = (958 - 957);
                    {
                        int j;
                        j = k - 1;
                        for (; j >= (74 - 74);) {
                            yaCTvM3AVIo += (rXO3cz0ywbrS[j] - '0') * PzM6yCaiL;
                            PzM6yCaiL = PzM6yCaiL *((369 - 359));
                            j = j - 1;
                        }
                    }
                    k = (280 - 280);
                    cout << yaCTvM3AVIo << endl;
                    yaCTvM3AVIo = (345 - 345);
                }
            }
            N9FMgw = N9FMgw +1;
        }
    }
    cin.get ();
    cin.get ();
    return 0;
}

