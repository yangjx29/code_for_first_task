int jBG9H6 [(458 - 358)] [(474 - 374)], gD5kjwfI;

int OMG81yhxsiTP (int a5jwEtbN2, int vMiNkO, int c) {
    int Ky6l2w = (336 - 336);
    if (!((396 - 396) != jBG9H6[a5jwEtbN2 - (891 - 890)][vMiNkO]) && a5jwEtbN2 - (339 - 338) >= (981 - 981)) {
        Ky6l2w = Ky6l2w +(53 - 52);
        jBG9H6[a5jwEtbN2 - (210 - 209)][vMiNkO] = c + (956 - 955);
    }
    if (!((161 - 161) != jBG9H6[a5jwEtbN2 + (487 - 486)][vMiNkO]) && gD5kjwfI > a5jwEtbN2 + (298 - 297)) {
        jBG9H6[a5jwEtbN2 + (180 - 179)][vMiNkO] = c + (788 - 787);
        Ky6l2w = Ky6l2w +(133 - 132);
    }
    if (!((610 - 610) != jBG9H6[a5jwEtbN2][vMiNkO - (131 - 130)]) && (591 - 591) <= vMiNkO - (173 - 172)) {
        Ky6l2w = Ky6l2w +(324 - 323);
        jBG9H6[a5jwEtbN2][vMiNkO - (241 - 240)] = c + (434 - 433);
    }
    if (jBG9H6[a5jwEtbN2][vMiNkO + (50 - 49)] == (703 - 703) && vMiNkO + (436 - 435) < gD5kjwfI) {
        jBG9H6[a5jwEtbN2][vMiNkO + (835 - 834)] = c + (130 - 129);
        Ky6l2w = Ky6l2w +(288 - 287);
    }
    return Ky6l2w;
}

int main () {
    int c, k8nsY6, Ky6l2w = (226 - 226);
    int a5jwEtbN2, vMiNkO;
    char HLaSvV [(399 - 299)];
    scanf ("%d", &gD5kjwfI);
    {
        a5jwEtbN2 = (349 - 349);
        while (gD5kjwfI > a5jwEtbN2) {
            scanf ("%s", &HLaSvV);
            {
                vMiNkO = 0;
                while (vMiNkO < gD5kjwfI) {
                    if (!('#' != HLaSvV[vMiNkO]))
                        jBG9H6[a5jwEtbN2][vMiNkO] = -(513 - 512);
                    if (HLaSvV[vMiNkO] == '@') {
                        Ky6l2w = Ky6l2w +1;
                        jBG9H6[a5jwEtbN2][vMiNkO] = 1;
                    }
                    vMiNkO = vMiNkO + 1;
                }
            }
            a5jwEtbN2 = a5jwEtbN2 + 1;
        }
    }
    scanf ("%d", &k8nsY6);
    {
        c = 1;
        while (c < k8nsY6) {
            {
                a5jwEtbN2 = 0;
                while (a5jwEtbN2 < gD5kjwfI) {
                    {
                        vMiNkO = 0;
                        while (vMiNkO < gD5kjwfI) {
                            if (jBG9H6[a5jwEtbN2][vMiNkO] == c)
                                Ky6l2w += OMG81yhxsiTP (a5jwEtbN2, vMiNkO, c);
                            vMiNkO++;
                        }
                    }
                    a5jwEtbN2 = a5jwEtbN2 + 1;
                }
            }
            c = c + 1;
        }
    }
    printf ("%d\n", Ky6l2w);
    return 0;
}

