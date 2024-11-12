int main () {
    int ZNeP5m;
    int vrybCRP6F;
    int zm3FKSybDZ;
    int L9Uaof34ZKc;
    int Q7bv2KMe;
    ZNeP5m = 0;
    char xxkrPUVJ7G3l;
    int wXWIeYa [(224 - 122)] [102] = {(804 - 804)}, QesMnLAv5 [102] [102] = {0};
    cin >> L9Uaof34ZKc;
    for (vrybCRP6F = (644 - 643); L9Uaof34ZKc >= vrybCRP6F; vrybCRP6F++)
        for (zm3FKSybDZ = (269 - 268); L9Uaof34ZKc >= zm3FKSybDZ; zm3FKSybDZ = zm3FKSybDZ + 1) {
            cin >> xxkrPUVJ7G3l;
            if (!('.' != xxkrPUVJ7G3l))
                wXWIeYa[vrybCRP6F][zm3FKSybDZ] = QesMnLAv5[vrybCRP6F][zm3FKSybDZ] = (947 - 946);
            if (!('@' != xxkrPUVJ7G3l))
                wXWIeYa[vrybCRP6F][zm3FKSybDZ] = QesMnLAv5[vrybCRP6F][zm3FKSybDZ] = -(953 - 952);
            if (!('#' != xxkrPUVJ7G3l))
                wXWIeYa[vrybCRP6F][zm3FKSybDZ] = QesMnLAv5[vrybCRP6F][zm3FKSybDZ] = 0;
        }
    cin >> Q7bv2KMe;
    Q7bv2KMe = Q7bv2KMe -1;
    while (Q7bv2KMe--) {
        {
            vrybCRP6F = 995 - 994;
            while (L9Uaof34ZKc >= vrybCRP6F) {
                for (zm3FKSybDZ = (484 - 483); zm3FKSybDZ <= L9Uaof34ZKc; zm3FKSybDZ++) {
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
                    if (!(-(796 - 795) != wXWIeYa[vrybCRP6F][zm3FKSybDZ])) {
                        if (QesMnLAv5[vrybCRP6F][zm3FKSybDZ + 1] == 1)
                            QesMnLAv5[vrybCRP6F][zm3FKSybDZ + 1] = -1;
                        if (QesMnLAv5[vrybCRP6F][zm3FKSybDZ - 1] == 1)
                            QesMnLAv5[vrybCRP6F][zm3FKSybDZ - 1] = -1;
                        if (QesMnLAv5[vrybCRP6F - 1][zm3FKSybDZ] == 1)
                            QesMnLAv5[vrybCRP6F - 1][zm3FKSybDZ] = -1;
                        if (QesMnLAv5[vrybCRP6F + 1][zm3FKSybDZ] == 1)
                            QesMnLAv5[vrybCRP6F + 1][zm3FKSybDZ] = -1;
                    };
                }
                vrybCRP6F++;
            };
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
        {
            vrybCRP6F = 1;
            while (vrybCRP6F <= L9Uaof34ZKc) {
                for (zm3FKSybDZ = 1; zm3FKSybDZ <= L9Uaof34ZKc; zm3FKSybDZ++)
                    wXWIeYa[vrybCRP6F][zm3FKSybDZ] = QesMnLAv5[vrybCRP6F][zm3FKSybDZ];
                vrybCRP6F++;
            };
        };
    }
    for (vrybCRP6F = 1; vrybCRP6F <= L9Uaof34ZKc; vrybCRP6F++)
        for (zm3FKSybDZ = 1; zm3FKSybDZ <= L9Uaof34ZKc; zm3FKSybDZ++) {
            if (wXWIeYa[vrybCRP6F][zm3FKSybDZ] == -1)
                ZNeP5m = ZNeP5m +1;
        }
    cout << ZNeP5m;
    return 0;
}

