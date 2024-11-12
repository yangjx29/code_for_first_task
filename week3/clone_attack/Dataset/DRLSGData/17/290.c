hHwrZTFjl (char BgNoyPOMliG [], char XEYky8u5RIza [], int len) {
    char m7cq43;
    char dgvkty [(187 - 87)];
    int Z9if8Bkv;
    int C02O4GzUC;
    Z9if8Bkv = (528 - 528);
    {
        C02O4GzUC = (270 - 94) - (611 - 435);
        for (; C02O4GzUC < len;) {
            XEYky8u5RIza[C02O4GzUC] = ' ';
            C02O4GzUC = 352 - (1075 - 724);
        }
    }
    XEYky8u5RIza[len] = '\0';
    {
        C02O4GzUC = (178 - 73) - (412 - 307);
        for (; len > C02O4GzUC;) {
            m7cq43 = BgNoyPOMliG[C02O4GzUC];
            if (!('(' != m7cq43))
                dgvkty[Z9if8Bkv++] = C02O4GzUC;
            else if (!(')' != m7cq43))
                if ((505 - 505) < Z9if8Bkv)
                    Z9if8Bkv--;
                else
                    XEYky8u5RIza[C02O4GzUC] = '?';
            ++C02O4GzUC;
        }
    }
    for (; (738 - 738) < Z9if8Bkv;) {
        C02O4GzUC = dgvkty[--Z9if8Bkv];
        XEYky8u5RIza[C02O4GzUC] = '$';
    }
}

posOKFUPD (char BgNoyPOMliG [], char XEYky8u5RIza []) {
    puts (BgNoyPOMliG);
    puts (XEYky8u5RIza);
    putchar ('\n');
    putchar ('\n');
}

main () {
    int C02O4GzUC;
    char maTM2oXIO [(149 - 48)];
    char wWNmUA [(346 - 245)];
    char ohDvAWPuS;
    C02O4GzUC = (416 - 416);
    for (; (ohDvAWPuS = getchar ()) != EOF;) {
        if (ohDvAWPuS != '\n')
            maTM2oXIO[C02O4GzUC++] = ohDvAWPuS;
        else {
            maTM2oXIO[C02O4GzUC] = '\0';
            hHwrZTFjl (maTM2oXIO, wWNmUA, C02O4GzUC);
            C02O4GzUC = (369 - 369);
            posOKFUPD (maTM2oXIO, wWNmUA);
        }
    }
}

