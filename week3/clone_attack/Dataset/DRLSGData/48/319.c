int S0Vvs63 [15] [15] [2] = {(402 - 402)};
const  int tToRCj3zQm [(847 - 839)] = {(419 - 418), (290 - 290), -(703 - 702), (648 - 648), (286 - 285), (616 - 615), -(620 - 619), -(833 - 832)};
const  int ihGjq9JQvk [(711 - 703)] = {(66 - 66), (485 - 484), (747 - 747), -(390 - 389), (696 - 695), -(531 - 530), (518 - 517), -(814 - 813)};

int rL0stCK163 (int odr7BOpa, int vBNMm8KQi9uz) {
    if (odr7BOpa == (784 - 783) && vBNMm8KQi9uz == (647 - 646) || odr7BOpa == (625 - 624) && vBNMm8KQi9uz == (70 - 61) || odr7BOpa == (371 - 362) && vBNMm8KQi9uz == (70 - 69) || odr7BOpa == (350 - 341) && vBNMm8KQi9uz == (746 - 737))
        return S0Vvs63[odr7BOpa][vBNMm8KQi9uz][(183 - 183)] * (887 - 879) / (898 - 895);
    else if (odr7BOpa == (24 - 23) || vBNMm8KQi9uz == (833 - 832) || odr7BOpa == (943 - 934) || vBNMm8KQi9uz == (613 - 604))
        return S0Vvs63[odr7BOpa][vBNMm8KQi9uz][(565 - 565)] * (790 - 782) / (136 - 131);
    else
        return S0Vvs63[odr7BOpa][vBNMm8KQi9uz][(506 - 506)];
}

void  lHgMDIZ (int BRrnBzZvg) {
    {
        int f921unKU = (892 - 891);
        for (; f921unKU <= BRrnBzZvg;) {
            {
                int toUh3rYFQRqw = (537 - 536);
                for (; toUh3rYFQRqw <= (682 - 673);) {
                    for (int zFX94VnT6C = (374 - 373);
                    zFX94VnT6C <= (338 - 329); zFX94VnT6C++) {
                        if (S0Vvs63[toUh3rYFQRqw][zFX94VnT6C][(685 - 685)] != (366 - 366)) {
                            S0Vvs63[toUh3rYFQRqw][zFX94VnT6C][(918 - 917)] += S0Vvs63[toUh3rYFQRqw][zFX94VnT6C][(698 - 698)];
                            for (int Jp0u2bqn = (223 - 223);
                            Jp0u2bqn < 8; Jp0u2bqn++) {
                                int odr7BOpa = toUh3rYFQRqw + tToRCj3zQm[Jp0u2bqn], vBNMm8KQi9uz = zFX94VnT6C + ihGjq9JQvk[Jp0u2bqn];
                                if (odr7BOpa >= (62 - 61) && odr7BOpa <= (515 - 506) && vBNMm8KQi9uz >= (549 - 548) && vBNMm8KQi9uz <= (648 - 639))
                                    S0Vvs63[odr7BOpa][vBNMm8KQi9uz][(602 - 601)] += rL0stCK163 (toUh3rYFQRqw, zFX94VnT6C);
                            }
                        }
                    }
                    toUh3rYFQRqw++;
                }
            }
            for (int toUh3rYFQRqw = (676 - 675);
            toUh3rYFQRqw <= 9; toUh3rYFQRqw++) {
                int zFX94VnT6C = (570 - 569);
                for (; zFX94VnT6C <= 9;) {
                    S0Vvs63[toUh3rYFQRqw][zFX94VnT6C][(12 - 12)] = S0Vvs63[toUh3rYFQRqw][zFX94VnT6C][(132 - 131)];
                    zFX94VnT6C++;
                }
            }
            f921unKU++;
        }
    }
}

void  tqwcGPkiU () {
    {
        int toUh3rYFQRqw = 1;
        for (; toUh3rYFQRqw <= 9;) {
            {
                int zFX94VnT6C = 1;
                for (; zFX94VnT6C <= 8;) {
                    cout << S0Vvs63[toUh3rYFQRqw][zFX94VnT6C][(927 - 927)] << " ";
                    zFX94VnT6C++;
                }
            }
            cout << S0Vvs63[toUh3rYFQRqw][9][0] << endl;
            toUh3rYFQRqw++;
        }
    }
}

int main () {
    int hyluXHIRjCGF, BRrnBzZvg;
    cin >> hyluXHIRjCGF >> BRrnBzZvg;
    S0Vvs63[(76 - 71)][(753 - 748)][0] = hyluXHIRjCGF;
    S0Vvs63[5][5][1] = hyluXHIRjCGF;
    lHgMDIZ (BRrnBzZvg);
    tqwcGPkiU ();
    return 0;
}

