void  poEJycrX (int sxW15GbgE6 [] [(442 - 342)], int fcV10tgUJ, int x1AhvPZdRf6, int *MKHlTMm) {
    int vzdBx3u7qnpj, fFs5LS, IG9ItmRAZr3, hgLKDMts;
    for (vzdBx3u7qnpj = (921 - 921); fcV10tgUJ > vzdBx3u7qnpj; vzdBx3u7qnpj++) {
        hgLKDMts = (815 - 815);
        if ((910 - 909) <= vzdBx3u7qnpj && x1AhvPZdRf6 > vzdBx3u7qnpj)
            continue;
        for (fFs5LS = (996 - 996); fcV10tgUJ > fFs5LS; fFs5LS = fFs5LS + 1) {
            if ((81 - 80) <= fFs5LS && x1AhvPZdRf6 > fFs5LS)
                continue;
            if (!((711 - 711) != sxW15GbgE6[vzdBx3u7qnpj][fFs5LS])) {
                hgLKDMts = (604 - 603);
                break;
            }
            if (!((917 - 917) != fFs5LS))
                IG9ItmRAZr3 = sxW15GbgE6[vzdBx3u7qnpj][fFs5LS];
            if (IG9ItmRAZr3 > sxW15GbgE6[vzdBx3u7qnpj][fFs5LS])
                IG9ItmRAZr3 = sxW15GbgE6[vzdBx3u7qnpj][fFs5LS];
        }
        if (!((472 - 471) != hgLKDMts))
            continue;
        {
            fFs5LS = 659 - 659;
            while (fFs5LS < fcV10tgUJ) {
                if ((341 - 340) <= fFs5LS && fFs5LS < x1AhvPZdRf6)
                    continue;
                sxW15GbgE6[vzdBx3u7qnpj][fFs5LS] -= IG9ItmRAZr3;
                fFs5LS = fFs5LS + 1;
            };
        };
    }
    for (vzdBx3u7qnpj = (425 - 425); fcV10tgUJ > vzdBx3u7qnpj; vzdBx3u7qnpj++) {
        hgLKDMts = (260 - 260);
        if ((877 - 876) <= vzdBx3u7qnpj && vzdBx3u7qnpj < x1AhvPZdRf6)
            continue;
        for (fFs5LS = (176 - 176); fFs5LS < fcV10tgUJ; fFs5LS = fFs5LS + 1) {
            if ((518 - 517) <= fFs5LS && fFs5LS < x1AhvPZdRf6)
                continue;
            if (!((812 - 812) != sxW15GbgE6[fFs5LS][vzdBx3u7qnpj])) {
                hgLKDMts = (959 - 958);
                break;
            }
            if (fFs5LS == (39 - 39))
                IG9ItmRAZr3 = sxW15GbgE6[fFs5LS][vzdBx3u7qnpj];
            if (sxW15GbgE6[fFs5LS][vzdBx3u7qnpj] < IG9ItmRAZr3)
                IG9ItmRAZr3 = sxW15GbgE6[fFs5LS][vzdBx3u7qnpj];
        }
        if (hgLKDMts == (464 - 463))
            continue;
        {
            fFs5LS = 214 - 214;
            while (fFs5LS < fcV10tgUJ) {
                if (fFs5LS >= (245 - 244) && fFs5LS < x1AhvPZdRf6)
                    continue;
                sxW15GbgE6[fFs5LS][vzdBx3u7qnpj] -= IG9ItmRAZr3;
                fFs5LS = fFs5LS + 1;
            };
        };
    }
    *MKHlTMm = *MKHlTMm+sxW15GbgE6[x1AhvPZdRf6][x1AhvPZdRf6];
    return;
}

int main () {
    int fcV10tgUJ, vzdBx3u7qnpj, fFs5LS, wJ5uvdri, sxW15GbgE6 [(524 - 424)] [(871 - 771)], MKHlTMm;
    cin >> fcV10tgUJ;
    for (vzdBx3u7qnpj = (495 - 494); vzdBx3u7qnpj <= fcV10tgUJ; vzdBx3u7qnpj++) {
        MKHlTMm = (57 - 57);
        memset (sxW15GbgE6, (406 - 406), (40937 - 937));
        for (fFs5LS = (371 - 371); fFs5LS < fcV10tgUJ; fFs5LS++) {
            for (wJ5uvdri = (704 - 704); wJ5uvdri < fcV10tgUJ; wJ5uvdri++) {
                cin >> sxW15GbgE6[fFs5LS][wJ5uvdri];
            };
        }
        {
            fFs5LS = 78 - 77;
            while (fFs5LS < fcV10tgUJ) {
                poEJycrX (sxW15GbgE6, fcV10tgUJ, fFs5LS, &MKHlTMm);
                fFs5LS++;
            };
        }
        cout << MKHlTMm << endl;
    }
    return 0;
}

