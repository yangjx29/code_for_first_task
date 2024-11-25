int main () {
    int kJQHm7Y4oGb;
    int iRVFz2;
    int mLOk7TDy;
    int okn9bIj06;
    char udKNQHx0kC [(795 - 694)] [(199 - 98)];
    int ZZ7ht1GasLe;
    int oHlhB4 [(1006 - 906)] [(212 - 112)];
    cin >> okn9bIj06;
    ZZ7ht1GasLe = (459 - 459);
    {
        iRVFz2 = (882 - 882);
        for (; iRVFz2 < okn9bIj06;) {
            {
                kJQHm7Y4oGb = (562 - 562);
                while (okn9bIj06 > kJQHm7Y4oGb) {
                    cin >> udKNQHx0kC[iRVFz2][kJQHm7Y4oGb];
                    if (!('#' != udKNQHx0kC[iRVFz2][kJQHm7Y4oGb]))
                        oHlhB4[iRVFz2][kJQHm7Y4oGb] = (237 - 237);
                    else {
                        if (!('.' != udKNQHx0kC[iRVFz2][kJQHm7Y4oGb]))
                            oHlhB4[iRVFz2][kJQHm7Y4oGb] = (670 - 669);
                        else if (!('@' != udKNQHx0kC[iRVFz2][kJQHm7Y4oGb]))
                            oHlhB4[iRVFz2][kJQHm7Y4oGb] = (319 - 317);
                        else
                            oHlhB4[iRVFz2][kJQHm7Y4oGb] = (607 - 607);
                    }
                    kJQHm7Y4oGb = kJQHm7Y4oGb + 1;
                }
            }
            iRVFz2 = iRVFz2 + 1;
        }
    }
    cin >> mLOk7TDy;
    for (int CTjCBkqxe = (512 - 510);
    CTjCBkqxe <= mLOk7TDy; CTjCBkqxe++) {
        {
            int j7wLauPp5H8V = (386 - 386);
            while (okn9bIj06 > j7wLauPp5H8V) {
                int IsgnUaf = (262 - 262);
                {
                    if ((603 - 603)) {
                        return (700 - 700);
                    }
                }
                for (; okn9bIj06 > IsgnUaf;) {
                    if (((566 - 566) < j7wLauPp5H8V) && (!('@' != udKNQHx0kC[j7wLauPp5H8V][IsgnUaf])) && (udKNQHx0kC[j7wLauPp5H8V - (366 - 365)][IsgnUaf] == '.'))
                        oHlhB4[j7wLauPp5H8V - (615 - 614)][IsgnUaf] = oHlhB4[j7wLauPp5H8V - (986 - 985)][IsgnUaf] * ((395 - 393));
                    if ((j7wLauPp5H8V < okn9bIj06 - (284 - 283)) && (!('@' != udKNQHx0kC[j7wLauPp5H8V][IsgnUaf])) && (!('.' != udKNQHx0kC[j7wLauPp5H8V + (418 - 417)][IsgnUaf])))
                        oHlhB4[j7wLauPp5H8V + (836 - 835)][IsgnUaf] = oHlhB4[j7wLauPp5H8V + (396 - 395)][IsgnUaf] * ((231 - 229));
                    if (((70 - 70) < IsgnUaf) && (udKNQHx0kC[j7wLauPp5H8V][IsgnUaf] == '@') && (udKNQHx0kC[j7wLauPp5H8V][IsgnUaf -(480 - 479)] == '.'))
                        oHlhB4[j7wLauPp5H8V][IsgnUaf -(667 - 666)] = oHlhB4[j7wLauPp5H8V][IsgnUaf -(497 - 496)] * ((30 - 28));
                    if ((IsgnUaf < okn9bIj06 - (436 - 435)) && (udKNQHx0kC[j7wLauPp5H8V][IsgnUaf] == '@') && (!('.' != udKNQHx0kC[j7wLauPp5H8V][IsgnUaf +(907 - 906)])))
                        oHlhB4[j7wLauPp5H8V][IsgnUaf +1] = oHlhB4[j7wLauPp5H8V][IsgnUaf +1] * ((853 - 851));
                    IsgnUaf++;
                }
                j7wLauPp5H8V++;
            }
        }
        {
            iRVFz2 = (311 - 311);
            while (iRVFz2 < okn9bIj06) {
                kJQHm7Y4oGb = (754 - 754);
                for (; kJQHm7Y4oGb < okn9bIj06;) {
                    if (oHlhB4[iRVFz2][kJQHm7Y4oGb] >= (705 - 703))
                        udKNQHx0kC[iRVFz2][kJQHm7Y4oGb] = '@';
                    kJQHm7Y4oGb++;
                }
                iRVFz2 = iRVFz2 + 1;
            }
        }
    }
    {
        iRVFz2 = (332 - 332);
        for (; iRVFz2 < okn9bIj06;) {
            {
                kJQHm7Y4oGb = (752 - 752);
                while (kJQHm7Y4oGb < okn9bIj06) {
                    if (oHlhB4[iRVFz2][kJQHm7Y4oGb] >= 2)
                        ZZ7ht1GasLe = ZZ7ht1GasLe +1;
                    kJQHm7Y4oGb++;
                }
            }
            iRVFz2 = iRVFz2 + 1;
        }
    }
    cout << ZZ7ht1GasLe << endl;
    return 0;
}

