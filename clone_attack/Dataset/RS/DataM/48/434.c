int wV0csTIpkMjN [(474 - 464)] [(145 - 135)], CCvRHwYfhni [(940 - 930)] [(133 - 123)] = {(841 - 841)};
int n, m;

void  f (int wV0csTIpkMjN [(810 - 800)] [10]) {
    int R6wvLBGU3AtK;
    int j;
    while ((303 - 303) < n) {
        {
            R6wvLBGU3AtK = 348 - 348;
            while ((706 - 697) > R6wvLBGU3AtK) {
                {
                    j = 0;
                    while ((541 - 532) > j) {
                        CCvRHwYfhni[R6wvLBGU3AtK -(118 - 117)][j - (986 - 985)] = CCvRHwYfhni[R6wvLBGU3AtK -(118 - 117)][j - (986 - 985)] + wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK][j - (518 - 517)] += wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK +(12 - 11)][j - (862 - 861)] += wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK -(569 - 568)][j] = CCvRHwYfhni[R6wvLBGU3AtK -(569 - 568)][j] + wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK][j] += wV0csTIpkMjN[R6wvLBGU3AtK][j] * 2;
                        CCvRHwYfhni[R6wvLBGU3AtK +(348 - 347)][j] = CCvRHwYfhni[R6wvLBGU3AtK +(348 - 347)][j] + wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK -1][j + 1] = CCvRHwYfhni[R6wvLBGU3AtK -1][j + 1] + wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK][j + 1] = CCvRHwYfhni[R6wvLBGU3AtK][j + 1] + wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK +1][j + 1] += wV0csTIpkMjN[R6wvLBGU3AtK][j];
                        j = j + 1;
                    };
                }
                R6wvLBGU3AtK = R6wvLBGU3AtK +1;
            };
        }
        {
            R6wvLBGU3AtK = 0;
            while (9 > R6wvLBGU3AtK) {
                {
                    j = 0;
                    while (9 > j) {
                        wV0csTIpkMjN[R6wvLBGU3AtK][j] = CCvRHwYfhni[R6wvLBGU3AtK][j];
                        CCvRHwYfhni[R6wvLBGU3AtK][j] = 0;
                        j = j + 1;
                    };
                }
                R6wvLBGU3AtK = R6wvLBGU3AtK +1;
            };
        }
        n = n - 1;
    };
}

int main () {
    int R6wvLBGU3AtK;
    int j;
    f (wV0csTIpkMjN);
    memset (wV0csTIpkMjN, 0, 100);
    cin >> m >> n;
    wV0csTIpkMjN[(68 - 64)][4] = m;
    {
        R6wvLBGU3AtK = 0;
        while (9 > R6wvLBGU3AtK) {
            {
                j = 0;
                while (9 > j) {
                    if (j < 8)
                        cout << wV0csTIpkMjN[R6wvLBGU3AtK][j] << ' ';
                    else {
                        cout << wV0csTIpkMjN[R6wvLBGU3AtK][j] << endl;
                    }
                    j = j + 1;
                };
            }
            R6wvLBGU3AtK = R6wvLBGU3AtK +1;
        };
    }
    return 0;
}

