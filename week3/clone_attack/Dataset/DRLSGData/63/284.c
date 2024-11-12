int main () {
    int YKA8g4PH1Va;
    int auXyBx5;
    int KPWdqEL;
    int DgqcMuV5bF;
    int g5kZTXpLGmf;
    g5kZTXpLGmf = (802 - 802);
    int ENw1Im [(813 - 712)] [(1020 - 919)];
    int MM2x1HibaA5 [(493 - 392)] [(254 - 153)];
    int ZbZAXsvr [101] [101];
    int wBGlsMc0bqWg;
    int zfMJlKnNFEq;
    int iuy2oCvVsUWc;
    cin >> YKA8g4PH1Va >> auXyBx5;
    {
        wBGlsMc0bqWg = (832 - 831);
        for (; wBGlsMc0bqWg <= YKA8g4PH1Va;) {
            {
                if (0) {
                    return 0;
                }
            }
            for (zfMJlKnNFEq = (918 - 917); zfMJlKnNFEq <= auXyBx5; zfMJlKnNFEq = zfMJlKnNFEq + (356 - 355)) {
                cin >> ENw1Im[wBGlsMc0bqWg][zfMJlKnNFEq];
            }
            wBGlsMc0bqWg = wBGlsMc0bqWg + (245 - 244);
        }
    }
    cin >> KPWdqEL >> DgqcMuV5bF;
    for (wBGlsMc0bqWg = (849 - 848); wBGlsMc0bqWg <= KPWdqEL; wBGlsMc0bqWg = wBGlsMc0bqWg + (419 - 418)) {
        for (zfMJlKnNFEq = (351 - 350); zfMJlKnNFEq <= DgqcMuV5bF; zfMJlKnNFEq = zfMJlKnNFEq + (664 - 663)) {
            cin >> MM2x1HibaA5[wBGlsMc0bqWg][zfMJlKnNFEq];
        }
    }
    for (wBGlsMc0bqWg = (294 - 293); wBGlsMc0bqWg <= YKA8g4PH1Va; wBGlsMc0bqWg = wBGlsMc0bqWg + 1) {
        for (zfMJlKnNFEq = 1; zfMJlKnNFEq <= DgqcMuV5bF; zfMJlKnNFEq++) {
            for (iuy2oCvVsUWc = 1; iuy2oCvVsUWc <= auXyBx5; iuy2oCvVsUWc = iuy2oCvVsUWc + 1) {
                g5kZTXpLGmf = ENw1Im[wBGlsMc0bqWg][iuy2oCvVsUWc] * MM2x1HibaA5[iuy2oCvVsUWc][zfMJlKnNFEq] + g5kZTXpLGmf;
            }
            ZbZAXsvr[wBGlsMc0bqWg][zfMJlKnNFEq] = g5kZTXpLGmf;
            g5kZTXpLGmf = (630 - 630);
        }
    }
    for (wBGlsMc0bqWg = 1; wBGlsMc0bqWg <= YKA8g4PH1Va; wBGlsMc0bqWg = wBGlsMc0bqWg + 1) {
        zfMJlKnNFEq = 1;
        for (; zfMJlKnNFEq <= DgqcMuV5bF;) {
            if (zfMJlKnNFEq != DgqcMuV5bF)
                cout << ZbZAXsvr[wBGlsMc0bqWg][zfMJlKnNFEq] << " ";
            else if (wBGlsMc0bqWg != YKA8g4PH1Va)
                cout << ZbZAXsvr[wBGlsMc0bqWg][zfMJlKnNFEq] << endl;
            else
                cout << ZbZAXsvr[wBGlsMc0bqWg][zfMJlKnNFEq];
            zfMJlKnNFEq = zfMJlKnNFEq + 1;
        }
    }
    return (138 - 138);
}

