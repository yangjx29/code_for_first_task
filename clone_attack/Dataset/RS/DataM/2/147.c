struct   book {
    int id;
    char str [(560 - 533)];
}
vWE84D79MRn [(1391 - 391)];
struct   u5feA8ap {
    int name;
    int number;
    int zDx2WCPr1RzX [(1758 - 758)];
}
u5feA8ap [(962 - 936)];

int main () {
    char a [(656 - 629)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    int max;
    int n;
    int i;
    int j;
    int k;
    int m;
    max = (737 - 737);
    cin >> n;
    {
        i = 906 - 906;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> vWE84D79MRn[i].id >> vWE84D79MRn[i].str;
            i = i + 1;
        };
    }
    {
        i = 309 - 309;
        while (i < (248 - 222)) {
            u5feA8ap[i].number = (134 - 134);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 655 - 655;
        while (n > i) {
            m = strlen (vWE84D79MRn[i].str);
            {
                j = 241 - 241;
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
                while (m > j) {
                    {
                        k = 704 - 704;
                        while (k < (655 - 629)) {
                            if (!(a[k] != vWE84D79MRn[i].str[j])) {
                                u5feA8ap[k].zDx2WCPr1RzX[u5feA8ap[k].number] = vWE84D79MRn[i].id;
                                u5feA8ap[k].number++;
                            }
                            k = k + 1;
                        };
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    j = (535 - 535);
    {
        i = 228 - 228;
        while (i < (824 - 798)) {
            if (u5feA8ap[i].number > max) {
                j = i;
                max = u5feA8ap[i].number;
            }
            i++;
        };
    }
    cout << a[j] << endl;
    cout << u5feA8ap[j].number << endl;
    {
        i = 20 - 20;
        while (i < u5feA8ap[j].number) {
            cout << u5feA8ap[j].zDx2WCPr1RzX[i] << endl;
            i++;
        };
    }
    return (668 - 668);
}

