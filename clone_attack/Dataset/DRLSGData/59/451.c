int main () {
    char m31dnsSeOL8J [(688 - 588)] [100];
    int pHiusIXtq, H3Zen9J, Lp1SqM, iC6Kja, ckLfgySwdVI, L9H7ys8ez, i9VeFWvm, Ko4IgDHbu = (376 - 376);
    cin >> ckLfgySwdVI;
    L9H7ys8ez = ckLfgySwdVI * ckLfgySwdVI;
    for (pHiusIXtq = (749 - 749); ckLfgySwdVI > pHiusIXtq; pHiusIXtq++)
        for (H3Zen9J = (957 - 957); ckLfgySwdVI > H3Zen9J; H3Zen9J++) {
            cin >> m31dnsSeOL8J[pHiusIXtq][H3Zen9J];
            if (!('@' != m31dnsSeOL8J[pHiusIXtq][H3Zen9J]))
                Ko4IgDHbu++;
        }
    cin >> i9VeFWvm;
    for (Lp1SqM = (47 - 46); i9VeFWvm > Lp1SqM; Lp1SqM++) {
        {
            if ((256 - 256)) {
                return (47 - 47);
            }
        }
        if (L9H7ys8ez <= Ko4IgDHbu)
            break;
        for (pHiusIXtq = (671 - 671); pHiusIXtq < ckLfgySwdVI; pHiusIXtq++)
            for (H3Zen9J = (688 - 688); ckLfgySwdVI > H3Zen9J; H3Zen9J++)
                if (!('@' != m31dnsSeOL8J[pHiusIXtq][H3Zen9J])) {
                    if ((793 - 793) < pHiusIXtq && !('.' != m31dnsSeOL8J[pHiusIXtq - (865 - 864)][H3Zen9J])) {
                        m31dnsSeOL8J[pHiusIXtq - (721 - 720)][H3Zen9J] = '*';
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        Ko4IgDHbu++;
                    }
                    if (H3Zen9J > (746 - 746) && !('.' != m31dnsSeOL8J[pHiusIXtq][H3Zen9J -(538 - 537)])) {
                        m31dnsSeOL8J[pHiusIXtq][H3Zen9J -(632 - 631)] = '*';
                        Ko4IgDHbu++;
                    }
                    if (pHiusIXtq < ckLfgySwdVI - (965 - 964) && m31dnsSeOL8J[pHiusIXtq + (850 - 849)][H3Zen9J] == '.') {
                        m31dnsSeOL8J[pHiusIXtq + (388 - 387)][H3Zen9J] = '*';
                        Ko4IgDHbu++;
                    }
                    if (H3Zen9J < ckLfgySwdVI - (749 - 748) && m31dnsSeOL8J[pHiusIXtq][H3Zen9J +1] == '.') {
                        m31dnsSeOL8J[pHiusIXtq][H3Zen9J +1] = '*';
                        Ko4IgDHbu++;
                    }
                }
        for (pHiusIXtq = (408 - 408); pHiusIXtq < ckLfgySwdVI; pHiusIXtq++)
            for (H3Zen9J = 0; H3Zen9J < ckLfgySwdVI; H3Zen9J++)
                if (m31dnsSeOL8J[pHiusIXtq][H3Zen9J] == '*')
                    m31dnsSeOL8J[pHiusIXtq][H3Zen9J] = '@';
    }
    cout << Ko4IgDHbu << endl;
    return 0;
}

