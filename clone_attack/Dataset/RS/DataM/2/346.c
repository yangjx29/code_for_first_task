struct   zuozhe {
    int dROSG15s7M;
    char ZYtH1nFlgm;
    char rcIrtZWQHC [1001] [5];
}
zuozhe [(357 - 331)], EI2rGQHDat0;

int main () {
    int maxnum;
    maxnum = 0;
    char bianhao [5];
    int n;
    int eYvWir;
    char dyGovcN1aXU [(67 - 37)];
    char tQE4tp8 [(114 - 87)] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int min = 0;
    cin >> n;
    {
        eYvWir = 145 - 145;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((911 - 885) > eYvWir) {
            zuozhe[eYvWir].dROSG15s7M = (585 - 585);
            eYvWir++;
        };
    }
    {
        eYvWir = 1;
        while (eYvWir <= n) {
            int j;
            int UAE0vO;
            cin >> bianhao >> dyGovcN1aXU;
            {
                j = 828 - 828;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (!('\0' == dyGovcN1aXU[j])) {
                    {
                        UAE0vO = 952 - 952;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        while (26 > UAE0vO) {
                            if (!(tQE4tp8[UAE0vO] != dyGovcN1aXU[j])) {
                                zuozhe[UAE0vO].dROSG15s7M++;
                                zuozhe[UAE0vO].ZYtH1nFlgm = tQE4tp8[UAE0vO];
                                strcpy (zuozhe[UAE0vO].rcIrtZWQHC[zuozhe[UAE0vO].dROSG15s7M], bianhao);
                                break;
                            }
                            UAE0vO++;
                        };
                    }
                    j++;
                };
            }
            eYvWir++;
        };
    }
    {
        eYvWir = 0;
        while (eYvWir < 26) {
            if (zuozhe[eYvWir].dROSG15s7M > maxnum) {
                maxnum = zuozhe[eYvWir].dROSG15s7M;
                min = eYvWir;
            }
            eYvWir++;
        };
    }
    cout << zuozhe[min].ZYtH1nFlgm << endl << zuozhe[min].dROSG15s7M << endl;
    {
        eYvWir = 1;
        while (eYvWir <= zuozhe[min].dROSG15s7M) {
            cout << zuozhe[min].rcIrtZWQHC[eYvWir] << endl;
            eYvWir++;
        };
    }
    return 0;
}

