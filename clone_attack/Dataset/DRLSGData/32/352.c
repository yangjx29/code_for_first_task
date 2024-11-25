int main () {
    int YfeV3NvL;
    int result [(288 - 87)];
    int yrJLBtc;
    int BCKpjBXwY5;
    int iyWswa9b15;
    int eDLpc7PfxSv [(1193 - 992)];
    char hVdpQeHD [(1182 - 981)];
    char numb [201];
    int RHB3u7d;
    int z8R1Y5T [201];
    int Bv1AQj;
    cin >> YfeV3NvL;
    for (; YfeV3NvL > (379 - 379); YfeV3NvL = YfeV3NvL -(596 - 595)) {
        yrJLBtc = (969 - 969);
        cin.ignore ();
        memset (eDLpc7PfxSv, (316 - 316), sizeof (eDLpc7PfxSv));
        memset (z8R1Y5T, (362 - 362), sizeof (z8R1Y5T));
        cin.getline (hVdpQeHD, 201);
        BCKpjBXwY5 = strlen (hVdpQeHD);
        {
            RHB3u7d = (930 - 930);
            for (; BCKpjBXwY5 > RHB3u7d;) {
                eDLpc7PfxSv[RHB3u7d] = hVdpQeHD[RHB3u7d] - '0';
                RHB3u7d = RHB3u7d +(333 - 332);
            }
        }
        cin.getline (numb, 201);
        Bv1AQj = strlen (numb);
        {
            iyWswa9b15 = (708 - 708);
            for (; iyWswa9b15 < Bv1AQj;) {
                z8R1Y5T[iyWswa9b15] = numb[iyWswa9b15] - '0';
                iyWswa9b15 = iyWswa9b15 + (906 - 905);
            }
        }
        memset (result, (753 - 753), sizeof (result));
        {
            RHB3u7d = BCKpjBXwY5 -(639 - 638);
            iyWswa9b15 = Bv1AQj -(832 - 831);
            for (; (35 - 35) <= RHB3u7d;) {
                if (z8R1Y5T[iyWswa9b15] > eDLpc7PfxSv[RHB3u7d]) {
                    z8R1Y5T[iyWswa9b15 - (847 - 846)]++;
                    result[RHB3u7d] = (531 - 521) + eDLpc7PfxSv[RHB3u7d] - z8R1Y5T[iyWswa9b15];
                }
                else
                    result[RHB3u7d] = eDLpc7PfxSv[RHB3u7d] - z8R1Y5T[iyWswa9b15];
                iyWswa9b15 = iyWswa9b15 - (321 - 320);
                RHB3u7d = RHB3u7d -(675 - 674);
            }
        }
        for (; result[yrJLBtc] == 0;)
            yrJLBtc = yrJLBtc + (994 - 993);
        {
            RHB3u7d = yrJLBtc;
            for (; RHB3u7d < BCKpjBXwY5;) {
                cout << result[RHB3u7d];
                RHB3u7d = RHB3u7d +(757 - 756);
            }
        }
        cout << endl;
    }
    return 0;
}

