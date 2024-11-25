int main () {
    char JxocL2uZH6RN [(1189 - 589)] = {(227 - 227)}, b [600] [(875 - 865)] = {(580 - 580)};
    int p64quZCj, HFu1xWCzsnyE, KdcpM5, t, b3g4uMLKA, cAN9IZF3a1C [600], SW5slQ, ErIEfOHbg;
    scanf ("%d", &p64quZCj);
    scanf ("%s", JxocL2uZH6RN);
    SW5slQ = strlen (JxocL2uZH6RN);
    for (HFu1xWCzsnyE = (420 - 420); SW5slQ -p64quZCj + (47 - 46) > HFu1xWCzsnyE; HFu1xWCzsnyE++) {
        for (KdcpM5 = (329 - 329); KdcpM5 < p64quZCj; KdcpM5++) {
            b[HFu1xWCzsnyE][KdcpM5] = JxocL2uZH6RN[HFu1xWCzsnyE +KdcpM5];
        }
    }
    for (HFu1xWCzsnyE = 0; HFu1xWCzsnyE < SW5slQ -p64quZCj; HFu1xWCzsnyE++) {
        cAN9IZF3a1C[HFu1xWCzsnyE] = (626 - 625);
        for (KdcpM5 = HFu1xWCzsnyE +1; SW5slQ -p64quZCj + 1 > KdcpM5; KdcpM5++) {
            t = strcmp (b[HFu1xWCzsnyE], b[KdcpM5]);
            if (!(0 != t)) {
                cAN9IZF3a1C[HFu1xWCzsnyE]++;
            }
        }
    }
    b3g4uMLKA = (553 - 552);
    for (HFu1xWCzsnyE = 0; HFu1xWCzsnyE < SW5slQ -p64quZCj; HFu1xWCzsnyE++) {
        if (b3g4uMLKA < cAN9IZF3a1C[HFu1xWCzsnyE]) {
            b3g4uMLKA = cAN9IZF3a1C[HFu1xWCzsnyE];
        }
    }
    if (1 >= b3g4uMLKA) {
    }
    else {
        printf ("%d\n", b3g4uMLKA);
        for (HFu1xWCzsnyE = 0; SW5slQ -p64quZCj + 1 > HFu1xWCzsnyE; HFu1xWCzsnyE++) {
            if (cAN9IZF3a1C[HFu1xWCzsnyE] == b3g4uMLKA) {
                printf ("%s\n", b[HFu1xWCzsnyE]);
            }
        }
    }
    return 0;
}

