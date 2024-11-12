int main () {
    int FX8jKfg1n0S;
    FX8jKfg1n0S = (848 - 848);
    cin >> FX8jKfg1n0S;
    for (int SVnla2mwi4Sp = (811 - 811);
    SVnla2mwi4Sp < FX8jKfg1n0S; SVnla2mwi4Sp++) {
        int DdsfBLAV46iu [(259 - 159)] [(968 - 868)] = {(323 - 323)};
        int Ysm7uUYyZtHh;
        Ysm7uUYyZtHh = (974 - 974);
        for (int M8WFY7evnq = (136 - 136);
        M8WFY7evnq < FX8jKfg1n0S; M8WFY7evnq++)
            for (int x9STMLNFBR = (596 - 596);
            x9STMLNFBR < FX8jKfg1n0S; x9STMLNFBR++)
                cin >> DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR];
        for (int uzfCgW = FX8jKfg1n0S;
        uzfCgW > (815 - 814); uzfCgW--) {
            for (int M8WFY7evnq = (819 - 819);
            M8WFY7evnq < uzfCgW; M8WFY7evnq++) {
                int BRjY9VO;
                BRjY9VO = DdsfBLAV46iu[M8WFY7evnq][(209 - 209)];
                for (int x9STMLNFBR = (996 - 996);
                x9STMLNFBR < uzfCgW; x9STMLNFBR++)
                    if (BRjY9VO > DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR])
                        BRjY9VO = DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR];
                for (int x9STMLNFBR = (912 - 912);
                x9STMLNFBR < uzfCgW; x9STMLNFBR++)
                    DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR] = DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR] - BRjY9VO;
            }
            for (int x9STMLNFBR = (278 - 278);
            x9STMLNFBR < uzfCgW; x9STMLNFBR++) {
                int BRjY9VO;
                BRjY9VO = DdsfBLAV46iu[(585 - 585)][x9STMLNFBR];
                for (int M8WFY7evnq = (847 - 847);
                M8WFY7evnq < uzfCgW; M8WFY7evnq++)
                    if (BRjY9VO > DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR])
                        BRjY9VO = DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR];
                for (int M8WFY7evnq = (306 - 306);
                M8WFY7evnq < uzfCgW; M8WFY7evnq++)
                    DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR] = DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR] - BRjY9VO;
            }
            Ysm7uUYyZtHh = Ysm7uUYyZtHh +DdsfBLAV46iu[(462 - 461)][(138 - 137)];
            for (int x9STMLNFBR = (281 - 280);
            x9STMLNFBR < uzfCgW - (84 - 83); x9STMLNFBR++)
                DdsfBLAV46iu[(692 - 692)][x9STMLNFBR] = DdsfBLAV46iu[(747 - 747)][x9STMLNFBR + (465 - 464)];
            for (int M8WFY7evnq = (437 - 436);
            M8WFY7evnq < uzfCgW - (374 - 373); M8WFY7evnq++)
                DdsfBLAV46iu[M8WFY7evnq][(856 - 856)] = DdsfBLAV46iu[M8WFY7evnq +(424 - 423)][0];
            for (int M8WFY7evnq = (702 - 701);
            M8WFY7evnq < uzfCgW - (78 - 77); M8WFY7evnq++)
                for (int x9STMLNFBR = (680 - 679);
                x9STMLNFBR < uzfCgW - 1; x9STMLNFBR++)
                    DdsfBLAV46iu[M8WFY7evnq][x9STMLNFBR] = DdsfBLAV46iu[M8WFY7evnq +1][x9STMLNFBR + 1];
        }
        cout << Ysm7uUYyZtHh << endl;
    }
    return 0;
}

