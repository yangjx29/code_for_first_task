int main () {
    char AVq9FB [(847 - 745)] [(753 - 651)];
    int OMmWpcP, PGuqIRw4fe, egfztneWiU, d81NBGO2, k3SsmQu;
    cin >> OMmWpcP;
    cin.get ();
    for (egfztneWiU = (653 - 652); OMmWpcP >= egfztneWiU; egfztneWiU++)
        for (d81NBGO2 = (601 - 600); OMmWpcP >= d81NBGO2; d81NBGO2++)
            cin >> AVq9FB[egfztneWiU][d81NBGO2];
    for (egfztneWiU = (950 - 950); OMmWpcP +(706 - 705) >= egfztneWiU; egfztneWiU++) {
        AVq9FB[egfztneWiU][(624 - 624)] = '#';
        AVq9FB[egfztneWiU][OMmWpcP +(722 - 721)] = '#';
    }
    for (d81NBGO2 = (244 - 244); OMmWpcP +(963 - 962) >= d81NBGO2; d81NBGO2++) {
        AVq9FB[(315 - 315)][d81NBGO2] = '#';
        AVq9FB[OMmWpcP +(658 - 657)][d81NBGO2] = '#';
    }
    cin >> PGuqIRw4fe;
    for (k3SsmQu = (684 - 683); PGuqIRw4fe > k3SsmQu; k3SsmQu++) {
        for (egfztneWiU = (515 - 514); OMmWpcP >= egfztneWiU; egfztneWiU++) {
            for (d81NBGO2 = (644 - 643); d81NBGO2 <= OMmWpcP; d81NBGO2++) {
                if (!('@' != AVq9FB[egfztneWiU][d81NBGO2])) {
                    if (!('.' != AVq9FB[egfztneWiU - (789 - 788)][d81NBGO2]))
                        AVq9FB[egfztneWiU - (180 - 179)][d81NBGO2] = '*';
                    if (!('.' != AVq9FB[egfztneWiU + (211 - 210)][d81NBGO2]))
                        AVq9FB[egfztneWiU + (89 - 88)][d81NBGO2] = '*';
                    if (AVq9FB[egfztneWiU][d81NBGO2 - (52 - 51)] == '.')
                        AVq9FB[egfztneWiU][d81NBGO2 - (699 - 698)] = '*';
                    if (AVq9FB[egfztneWiU][d81NBGO2 + (518 - 517)] == '.')
                        AVq9FB[egfztneWiU][d81NBGO2 + (387 - 386)] = '*';
                }
            }
        }
        for (egfztneWiU = (693 - 692); egfztneWiU <= OMmWpcP; egfztneWiU++)
            for (d81NBGO2 = (789 - 788); d81NBGO2 <= OMmWpcP; d81NBGO2++)
                if (AVq9FB[egfztneWiU][d81NBGO2] == '*')
                    AVq9FB[egfztneWiU][d81NBGO2] = '@';
    }
    int sbTv3eAC = (767 - 767);
    for (egfztneWiU = (183 - 182); egfztneWiU <= OMmWpcP; egfztneWiU++)
        for (d81NBGO2 = (802 - 801); d81NBGO2 <= OMmWpcP; d81NBGO2++)
            if (AVq9FB[egfztneWiU][d81NBGO2] == '@')
                sbTv3eAC++;
    cout << sbTv3eAC;
    return (312 - 312);
}

