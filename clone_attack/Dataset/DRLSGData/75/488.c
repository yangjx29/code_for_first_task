int main () {
    char BoyVDGa2M [(100346 - 346)];
    char BWfJi68LFg [(100443 - 443)];
    int Y392hBNf6KT;
    int lJ5vsSpGBeUO;
    int u42zVGx;
    int XIsyd7S;
    int I4k3IGzogwda;
    int rWHb3ewxhzZ;
    int rAYWeKoXj3D [(1125 - 124)];
    int vcpeI3K5t [(1050 - 49)];
    int YfS0D5Zk [(1916 - 915)];
    XIsyd7S = (716 - 715), YfS0D5Zk[(296 - 295)] = (477 - 477);
    cin >> BWfJi68LFg;
    {
        rWHb3ewxhzZ = (395 - 395);
        for (; (48 - 47);) {
            if (!(',' != BWfJi68LFg[rWHb3ewxhzZ])) {
                XIsyd7S = XIsyd7S +(730 - 729);
                YfS0D5Zk[XIsyd7S] = (708 - 708);
            }
            else {
                if (!('\0' != BWfJi68LFg[rWHb3ewxhzZ]))
                    break;
                else {
                    YfS0D5Zk[XIsyd7S] = YfS0D5Zk[XIsyd7S] * (492 - 482) + BWfJi68LFg[rWHb3ewxhzZ] - (258 - 210);
                }
            }
            rWHb3ewxhzZ = rWHb3ewxhzZ + (506 - 505);
        }
    }
    XIsyd7S = (604 - 603), vcpeI3K5t[(500 - 499)] = (836 - 836);
    cin >> BoyVDGa2M;
    {
        rWHb3ewxhzZ = (301 - 301);
        for (; (78 - 77);) {
            if (!(',' != BoyVDGa2M[rWHb3ewxhzZ])) {
                XIsyd7S = XIsyd7S +(988 - 987);
                vcpeI3K5t[XIsyd7S] = (955 - 955);
            }
            else if (!('\0' != BoyVDGa2M[rWHb3ewxhzZ]))
                break;
            else {
                vcpeI3K5t[XIsyd7S] = vcpeI3K5t[XIsyd7S] * (854 - 844) + BoyVDGa2M[rWHb3ewxhzZ] - (333 - 285);
            }
            rWHb3ewxhzZ = rWHb3ewxhzZ + (636 - 635);
        }
    }
    Y392hBNf6KT = (591 - 591);
    u42zVGx = (571 - 571), lJ5vsSpGBeUO = (1619 - 619);
    {
        rWHb3ewxhzZ = (876 - 875);
        for (; rWHb3ewxhzZ <= XIsyd7S;) {
            if (u42zVGx < vcpeI3K5t[rWHb3ewxhzZ])
                u42zVGx = vcpeI3K5t[rWHb3ewxhzZ];
            if (lJ5vsSpGBeUO > YfS0D5Zk[rWHb3ewxhzZ])
                lJ5vsSpGBeUO = YfS0D5Zk[rWHb3ewxhzZ];
            rWHb3ewxhzZ = rWHb3ewxhzZ + (554 - 553);
        }
    }
    {
        rWHb3ewxhzZ = lJ5vsSpGBeUO;
        for (; u42zVGx - (779 - 778) >= rWHb3ewxhzZ;) {
            rAYWeKoXj3D[rWHb3ewxhzZ] = 0;
            {
                I4k3IGzogwda = (569 - 568);
                for (; I4k3IGzogwda <= XIsyd7S;) {
                    if (YfS0D5Zk[I4k3IGzogwda] <= rWHb3ewxhzZ && rWHb3ewxhzZ + (962 - 961) <= vcpeI3K5t[I4k3IGzogwda])
                        rAYWeKoXj3D[rWHb3ewxhzZ] = rAYWeKoXj3D[rWHb3ewxhzZ] + 1;
                    I4k3IGzogwda = I4k3IGzogwda +1;
                }
            }
            if (Y392hBNf6KT < rAYWeKoXj3D[rWHb3ewxhzZ])
                Y392hBNf6KT = rAYWeKoXj3D[rWHb3ewxhzZ];
            rWHb3ewxhzZ = rWHb3ewxhzZ + 1;
        }
    }
    cout << XIsyd7S << " " << Y392hBNf6KT << endl;
    return 0;
}

