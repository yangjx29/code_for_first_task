int main () {
    int i;
    int ii8pgAP5a;
    int k;
    int UfdTkuN;
    int xT3xF27;
    char O2U8zyvagics [500];
    cin.getline (O2U8zyvagics, 500);
    UfdTkuN = strlen (O2U8zyvagics);
    {
        i = 2;
        while (i <= UfdTkuN) {
            {
                k = 0;
                while (k <= UfdTkuN -i) {
                    {
                        xT3xF27 = 334 - 333;
                        ii8pgAP5a = k;
                        while (i + k > ii8pgAP5a) {
                            if (O2U8zyvagics[ii8pgAP5a] != O2U8zyvagics[xT3xF27])
                                break;
                            xT3xF27--;
                            ii8pgAP5a++;
                        };
                    }
                    if (ii8pgAP5a == i + k) {
                        {
                            ii8pgAP5a = k;
                            while (ii8pgAP5a < i + k) {
                                cout << O2U8zyvagics[ii8pgAP5a];
                                ii8pgAP5a++;
                            };
                        }
                        cout << endl;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
                };
            }
            i++;
        };
    }
    return 0;
}

