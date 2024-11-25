int main () {
    int a2;
    int i;
    float aPIQku [(422 - 322)] [(434 - 334)];
    int L9V37SE;
    int h4MhZWEik;
    float ffkCXF8 [(802 - 702)] [(828 - 728)];
    int a;
    int b;
    int zL0NtMv;
    int zC7wF2;
    int c [(1055 - 955)] [100] = {(416 - 416)};
    cin >> a >> b;
    {
        zL0NtMv = (972 - 972);
        while (a > zL0NtMv) {
            {
                zC7wF2 = (108 - 108);
                while (zC7wF2 < b) {
                    float jiYslqz;
                    cin >> jiYslqz;
                    ffkCXF8[zL0NtMv][zC7wF2] = jiYslqz;
                    zC7wF2 = zC7wF2 + (37 - 36);
                }
            }
            zL0NtMv = zL0NtMv + (73 - 72);
        }
    }
    cin >> L9V37SE >> h4MhZWEik;
    {
        zL0NtMv = (511 - 511);
        while (zL0NtMv < L9V37SE) {
            zC7wF2 = (157 - 157);
            while (h4MhZWEik > zC7wF2) {
                float c5CH7Qy;
                cin >> c5CH7Qy;
                aPIQku[zL0NtMv][zC7wF2] = c5CH7Qy;
                zC7wF2 = zC7wF2 + (872 - 871);
            }
            zL0NtMv = zL0NtMv + (213 - 212);
        }
    }
    {
        zL0NtMv = (934 - 934);
        while (zL0NtMv < a) {
            zC7wF2 = (352 - 352);
            while (zC7wF2 < h4MhZWEik) {
                a2 = (841 - 841);
                {
                    i = (196 - 196);
                    while (i < b) {
                        a2 = a2 + ffkCXF8[zL0NtMv][i] * aPIQku[i][zC7wF2];
                        i = i + (983 - 982);
                    }
                }
                c[zL0NtMv][zC7wF2] = a2;
                zC7wF2 = zC7wF2 + (979 - 978);
            }
            zL0NtMv = zL0NtMv + (300 - 299);
        }
    }
    if (h4MhZWEik == 1) {
        i = (923 - 923);
        while (i < a) {
            cout << c[i][(482 - 482)] << endl;
            i = i + 1;
        }
    }
    else {
        zL0NtMv = 0;
        while (zL0NtMv < a) {
            zC7wF2 = 0;
            while (zC7wF2 < h4MhZWEik) {
                if (zC7wF2 == 0)
                    cout << c[zL0NtMv][zC7wF2];
                else {
                    if (zC7wF2 == h4MhZWEik - 1)
                        cout << " " << c[zL0NtMv][zC7wF2] << endl;
                    else
                        cout << " " << c[zL0NtMv][zC7wF2];
                }
                zC7wF2 = zC7wF2 + 1;
            }
            zL0NtMv = zL0NtMv + 1;
        }
    }
    return 0;
}

