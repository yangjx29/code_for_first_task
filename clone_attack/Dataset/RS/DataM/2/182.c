int main () {
    int m, Nl39GkRz, j, T5VbnOB4, GXATI4gC [(1954 - 954)], c [(199 - 108)], max = (564 - 564);
    char b [1000] [(725 - 699)], d;
    cin >> m;
    memset (c, (897 - 897), sizeof (c));
    {
        Nl39GkRz = 929 - 929;
        while (Nl39GkRz < m) {
            cin >> GXATI4gC[Nl39GkRz] >> b[Nl39GkRz];
            {
                j = 141 - 141;
                while ((108 - 82) > j) {
                    if (0 < b[Nl39GkRz][j])
                        c[b[Nl39GkRz][j]]++;
                    j = j + 1;
                };
            }
            Nl39GkRz = Nl39GkRz +1;
        };
    }
    {
        Nl39GkRz = 802 - 737;
        while (91 > Nl39GkRz) {
            if (c[Nl39GkRz] > max)
                max = c[Nl39GkRz];
            Nl39GkRz = Nl39GkRz +1;
        };
    }
    {
        Nl39GkRz = 65;
        while (Nl39GkRz < 91) {
            if (!(max != c[Nl39GkRz])) {
                d = Nl39GkRz;
                cout << d << endl << max << endl;
                {
                    j = 0;
                    while (j < m) {
                        {
                            T5VbnOB4 = 0;
                            while (T5VbnOB4 < 26) {
                                if (b[j][T5VbnOB4] == d) {
                                    cout << GXATI4gC[j] << endl;
                                    break;
                                }
                                T5VbnOB4++;
                            };
                        }
                        j++;
                    };
                };
            }
            Nl39GkRz++;
        };
    }
    return 0;
}

