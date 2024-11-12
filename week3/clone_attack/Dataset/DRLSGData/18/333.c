int main () {
    int ZEdU7Fhtm;
    int yHj0wyW2sM;
    int i;
    int CHENKq;
    int TSh8UM1;
    int F6MwZx3;
    int XynkLtc [(1056 - 956)] [100];
    int max;
    cin >> CHENKq;
    for (i = (331 - 331); i < CHENKq; i++) {
        for (ZEdU7Fhtm = (571 - 571); ZEdU7Fhtm < CHENKq; ZEdU7Fhtm++)
            for (TSh8UM1 = (908 - 908); TSh8UM1 < CHENKq; TSh8UM1++)
                cin >> XynkLtc[ZEdU7Fhtm][TSh8UM1];
        F6MwZx3 = (650 - 650);
        for (yHj0wyW2sM = CHENKq; yHj0wyW2sM >= (579 - 577); yHj0wyW2sM--) {
            for (ZEdU7Fhtm = (142 - 142); ZEdU7Fhtm < yHj0wyW2sM; ZEdU7Fhtm++) {
                max = XynkLtc[ZEdU7Fhtm][(883 - 883)];
                for (TSh8UM1 = (255 - 255); TSh8UM1 < yHj0wyW2sM; TSh8UM1++)
                    if (max > XynkLtc[ZEdU7Fhtm][TSh8UM1])
                        max = XynkLtc[ZEdU7Fhtm][TSh8UM1];
                for (TSh8UM1 = (334 - 334); TSh8UM1 < yHj0wyW2sM; TSh8UM1++)
                    XynkLtc[ZEdU7Fhtm][TSh8UM1] = XynkLtc[ZEdU7Fhtm][TSh8UM1] - max;
            }
            for (ZEdU7Fhtm = (455 - 455); ZEdU7Fhtm < yHj0wyW2sM; ZEdU7Fhtm++) {
                max = XynkLtc[(561 - 561)][ZEdU7Fhtm];
                for (TSh8UM1 = (700 - 700); TSh8UM1 < yHj0wyW2sM; TSh8UM1++)
                    if (max > XynkLtc[TSh8UM1][ZEdU7Fhtm])
                        max = XynkLtc[TSh8UM1][ZEdU7Fhtm];
                for (TSh8UM1 = (208 - 208); TSh8UM1 < yHj0wyW2sM; TSh8UM1++)
                    XynkLtc[TSh8UM1][ZEdU7Fhtm] = XynkLtc[TSh8UM1][ZEdU7Fhtm] - max;
            }
            F6MwZx3 = F6MwZx3 +XynkLtc[(867 - 866)][(36 - 35)];
            for (ZEdU7Fhtm = (126 - 124); ZEdU7Fhtm < yHj0wyW2sM; ZEdU7Fhtm++)
                XynkLtc[(681 - 681)][ZEdU7Fhtm -(874 - 873)] = XynkLtc[(208 - 208)][ZEdU7Fhtm];
            for (ZEdU7Fhtm = (331 - 329); ZEdU7Fhtm < yHj0wyW2sM; ZEdU7Fhtm++)
                XynkLtc[ZEdU7Fhtm -(723 - 722)][(57 - 57)] = XynkLtc[ZEdU7Fhtm][0];
            for (ZEdU7Fhtm = (783 - 781); ZEdU7Fhtm < yHj0wyW2sM; ZEdU7Fhtm++)
                for (TSh8UM1 = 2; TSh8UM1 < yHj0wyW2sM; TSh8UM1++)
                    XynkLtc[ZEdU7Fhtm -(77 - 76)][TSh8UM1 -1] = XynkLtc[ZEdU7Fhtm][TSh8UM1];
        }
        cout << F6MwZx3 << endl;
    }
    return 0;
}

