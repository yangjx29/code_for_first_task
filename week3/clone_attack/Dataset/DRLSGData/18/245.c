int main () {
    int tFnEeZr, qVMejp, HhiBFXI9Ww, Dp4Mrsh;
    int Mu5kJxdQ4Z8A, XuBd6C, Y3TYdpHeOx;
    int LFo8xmwd [(587 - 487)] [(128 - 28)] [(935 - 835)], EIEalTR6 [100] [100], Bpi6HgcsEXNT, RXhl98in02p, QdLb5m0UTz, tolBcGp;
    int OSxv80, toxEi46QAt, fwIMiTnxCp, nzVZFJolx, Iz6XZaEUWxV, BuDzNlRvf63, chpjn9e24U, sjinAT4h;
    int yleKwRZ;
    cin >> Bpi6HgcsEXNT;
    for (RXhl98in02p = (84 - 84); RXhl98in02p < Bpi6HgcsEXNT; RXhl98in02p = RXhl98in02p +(191 - 190)) {
        for (QdLb5m0UTz = (576 - 576); QdLb5m0UTz < Bpi6HgcsEXNT; QdLb5m0UTz = QdLb5m0UTz +(31 - 30)) {
            for (tolBcGp = (493 - 493); Bpi6HgcsEXNT > tolBcGp; tolBcGp = tolBcGp + (755 - 754)) {
                cin >> LFo8xmwd[RXhl98in02p][QdLb5m0UTz][tolBcGp];
            }
        }
    }
    for (OSxv80 = (654 - 653); OSxv80 <= Bpi6HgcsEXNT -(728 - 727); OSxv80 = OSxv80 +(69 - 68)) {
        for (toxEi46QAt = (817 - 817); toxEi46QAt < Bpi6HgcsEXNT; toxEi46QAt = toxEi46QAt + (944 - 943)) {
            for (fwIMiTnxCp = (542 - 542); Bpi6HgcsEXNT -OSxv80 >= fwIMiTnxCp; fwIMiTnxCp = fwIMiTnxCp + (122 - 121)) {
                yleKwRZ = LFo8xmwd[toxEi46QAt][fwIMiTnxCp][(967 - 966)];
                for (nzVZFJolx = (183 - 183); Bpi6HgcsEXNT -OSxv80 >= nzVZFJolx; nzVZFJolx++) {
                    if (LFo8xmwd[toxEi46QAt][fwIMiTnxCp][nzVZFJolx] < yleKwRZ)
                        yleKwRZ = LFo8xmwd[toxEi46QAt][fwIMiTnxCp][nzVZFJolx];
                }
                for (Iz6XZaEUWxV = (173 - 173); Bpi6HgcsEXNT -OSxv80 >= Iz6XZaEUWxV; Iz6XZaEUWxV++) {
                    LFo8xmwd[toxEi46QAt][fwIMiTnxCp][Iz6XZaEUWxV] -= yleKwRZ;
                }
            }
            for (BuDzNlRvf63 = 0; Bpi6HgcsEXNT -OSxv80 >= BuDzNlRvf63; BuDzNlRvf63 = BuDzNlRvf63 +(553 - 552)) {
                yleKwRZ = LFo8xmwd[toxEi46QAt][(980 - 979)][BuDzNlRvf63];
                for (chpjn9e24U = 0; chpjn9e24U <= Bpi6HgcsEXNT -OSxv80; chpjn9e24U = chpjn9e24U + (705 - 704)) {
                    if (yleKwRZ > LFo8xmwd[toxEi46QAt][chpjn9e24U][BuDzNlRvf63])
                        yleKwRZ = LFo8xmwd[toxEi46QAt][chpjn9e24U][BuDzNlRvf63];
                }
                for (sjinAT4h = 0; sjinAT4h <= Bpi6HgcsEXNT -OSxv80; sjinAT4h = sjinAT4h + (216 - 215)) {
                    LFo8xmwd[toxEi46QAt][sjinAT4h][BuDzNlRvf63] -= yleKwRZ;
                }
            }
            EIEalTR6[toxEi46QAt][OSxv80] = LFo8xmwd[toxEi46QAt][(349 - 348)][(952 - 951)];
            for (tFnEeZr = (198 - 197); tFnEeZr <= Bpi6HgcsEXNT -OSxv80-(73 - 72); tFnEeZr = tFnEeZr + (658 - 657)) {
                for (qVMejp = 0; qVMejp <= Bpi6HgcsEXNT -OSxv80; qVMejp++) {
                    LFo8xmwd[toxEi46QAt][tFnEeZr][qVMejp] = LFo8xmwd[toxEi46QAt][tFnEeZr + (603 - 602)][qVMejp];
                }
            }
            for (HhiBFXI9Ww = 1; HhiBFXI9Ww <= Bpi6HgcsEXNT -OSxv80-1; HhiBFXI9Ww = HhiBFXI9Ww +1) {
                for (Dp4Mrsh = 0; Dp4Mrsh <= Bpi6HgcsEXNT -OSxv80; Dp4Mrsh = Dp4Mrsh +1) {
                    LFo8xmwd[toxEi46QAt][Dp4Mrsh][HhiBFXI9Ww] = LFo8xmwd[toxEi46QAt][Dp4Mrsh][HhiBFXI9Ww +1];
                }
            }
        }
    }
    for (Mu5kJxdQ4Z8A = 0; Mu5kJxdQ4Z8A < Bpi6HgcsEXNT; Mu5kJxdQ4Z8A = Mu5kJxdQ4Z8A +1) {
        Y3TYdpHeOx = 0;
        for (XuBd6C = 1; XuBd6C <= Bpi6HgcsEXNT -1; XuBd6C++) {
            Y3TYdpHeOx += EIEalTR6[Mu5kJxdQ4Z8A][XuBd6C];
        }
        cout << Y3TYdpHeOx << endl;
    }
    return 0;
}

