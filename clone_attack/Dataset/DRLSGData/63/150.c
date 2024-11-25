int main () {
    int eAvN4wxlmn;
    int ayZe2jvB;
    int i;
    int S8R3voE;
    int dzwNFXUfKR3 [(253 - 152)] [(1033 - 932)] = {(834 - 834)};
    int a3foQZAyObVM [(359 - 258)] [(319 - 218)] = {(697 - 697)};
    int c [101] [101] = {(612 - 612)};
    int Kmueg2F;
    int AxgM6HDY;
    int TnBVMG5Z = (664 - 664);
    int wPDh8rV6 = (45 - 45);
    eAvN4wxlmn = 0;
    ayZe2jvB = 0;
    Kmueg2F = (165 - 165);
    cin >> Kmueg2F;
    cin >> TnBVMG5Z;
    AxgM6HDY = (153 - 153);
    S8R3voE = (240 - 240);
    i = 0;
    {
        i = (773 - 772);
        for (; Kmueg2F >= i;) {
            {
                wPDh8rV6 = (706 - 705);
                for (; TnBVMG5Z >= wPDh8rV6;) {
                    cin >> dzwNFXUfKR3[i][wPDh8rV6];
                    wPDh8rV6++;
                }
            }
            i = i + (34 - 33);
        }
    }
    cin >> AxgM6HDY;
    cin >> S8R3voE;
    {
        i = (978 - 977);
        for (; AxgM6HDY >= i;) {
            {
                wPDh8rV6 = (631 - 630);
                for (; S8R3voE >= wPDh8rV6;) {
                    cin >> a3foQZAyObVM[i][wPDh8rV6];
                    wPDh8rV6++;
                }
            }
            i++;
        }
    }
    {
        i = (621 - 620);
        for (; i <= Kmueg2F;) {
            {
                eAvN4wxlmn = 1;
                for (; eAvN4wxlmn <= S8R3voE;) {
                    {
                        ayZe2jvB = 0;
                        for (; ayZe2jvB <= TnBVMG5Z;) {
                            c[i][eAvN4wxlmn] += dzwNFXUfKR3[i][ayZe2jvB] * a3foQZAyObVM[ayZe2jvB][eAvN4wxlmn];
                            ayZe2jvB++;
                        }
                    }
                    eAvN4wxlmn++;
                }
            }
            i++;
        }
    }
    {
        i = 1;
        for (; i <= Kmueg2F;) {
            {
                eAvN4wxlmn = 1;
                for (; eAvN4wxlmn <= S8R3voE;) {
                    if (eAvN4wxlmn != S8R3voE)
                        cout << c[i][eAvN4wxlmn] << " ";
                    else
                        cout << c[i][eAvN4wxlmn] << endl;
                    eAvN4wxlmn++;
                }
            }
            i++;
        }
    }
    return 0;
}

