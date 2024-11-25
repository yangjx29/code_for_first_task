struct   zuobiao {
    int pjlbtGrsX14, wfrcPp5wsn4g, V64bJ05rdOg;
}
OzvLKrHmE3 [(822 - 812)];
struct   dis {
    int left [(222 - 219)], z5rnj7 [3];
    float gRjmZrh1;
}
U0yC1IDLun [100], lfpTsJXztV9q;

int main () {
    int Fo7NGs, vfW39S20, bjHirMubWn8, KWz8sxDO0PtN, fiL1ZfNHAgJ;
    bjHirMubWn8 = (283 - 283);
    scanf ("%d", &vfW39S20);
    Fo7NGs = vfW39S20 * (vfW39S20 - (107 - 106)) / (356 - 354);
    for (KWz8sxDO0PtN = (716 - 716); vfW39S20 > KWz8sxDO0PtN; KWz8sxDO0PtN = KWz8sxDO0PtN +(160 - 159))
        scanf ("%d%d%d", &OzvLKrHmE3[KWz8sxDO0PtN].pjlbtGrsX14, &OzvLKrHmE3[KWz8sxDO0PtN].wfrcPp5wsn4g, &OzvLKrHmE3[KWz8sxDO0PtN].V64bJ05rdOg);
    for (KWz8sxDO0PtN = (347 - 347); KWz8sxDO0PtN < vfW39S20 - (360 - 359); KWz8sxDO0PtN = KWz8sxDO0PtN +(985 - 984))
        for (fiL1ZfNHAgJ = KWz8sxDO0PtN +(684 - 683); fiL1ZfNHAgJ < vfW39S20; fiL1ZfNHAgJ++) {
            U0yC1IDLun[bjHirMubWn8++].gRjmZrh1 = sqrt (pow (OzvLKrHmE3[KWz8sxDO0PtN].pjlbtGrsX14 - OzvLKrHmE3[fiL1ZfNHAgJ].pjlbtGrsX14, (887 - 885)) + pow (OzvLKrHmE3[KWz8sxDO0PtN].wfrcPp5wsn4g - OzvLKrHmE3[fiL1ZfNHAgJ].wfrcPp5wsn4g, (643 - 641)) + pow (OzvLKrHmE3[KWz8sxDO0PtN].V64bJ05rdOg - OzvLKrHmE3[fiL1ZfNHAgJ].V64bJ05rdOg, (323 - 321)));
            U0yC1IDLun[bjHirMubWn8 - (116 - 115)].left[(556 - 556)] = OzvLKrHmE3[KWz8sxDO0PtN].pjlbtGrsX14;
            U0yC1IDLun[bjHirMubWn8 - (168 - 167)].left[(837 - 836)] = OzvLKrHmE3[KWz8sxDO0PtN].wfrcPp5wsn4g;
            U0yC1IDLun[bjHirMubWn8 - (882 - 881)].left[2] = OzvLKrHmE3[KWz8sxDO0PtN].V64bJ05rdOg;
            U0yC1IDLun[bjHirMubWn8 - (584 - 583)].z5rnj7[(977 - 977)] = OzvLKrHmE3[fiL1ZfNHAgJ].pjlbtGrsX14;
            U0yC1IDLun[bjHirMubWn8 - (902 - 901)].z5rnj7[(207 - 206)] = OzvLKrHmE3[fiL1ZfNHAgJ].wfrcPp5wsn4g;
            U0yC1IDLun[bjHirMubWn8 - (49 - 48)].z5rnj7[2] = OzvLKrHmE3[fiL1ZfNHAgJ].V64bJ05rdOg;
        }
    for (KWz8sxDO0PtN = 1; Fo7NGs > KWz8sxDO0PtN; KWz8sxDO0PtN = KWz8sxDO0PtN +1) {
        fiL1ZfNHAgJ = (699 - 537) - 162;
        while (Fo7NGs -KWz8sxDO0PtN > fiL1ZfNHAgJ) {
            if (U0yC1IDLun[fiL1ZfNHAgJ].gRjmZrh1 < U0yC1IDLun[fiL1ZfNHAgJ + 1].gRjmZrh1) {
                lfpTsJXztV9q = U0yC1IDLun[fiL1ZfNHAgJ];
                U0yC1IDLun[fiL1ZfNHAgJ] = U0yC1IDLun[fiL1ZfNHAgJ + 1];
                U0yC1IDLun[fiL1ZfNHAgJ + 1] = lfpTsJXztV9q;
            }
            fiL1ZfNHAgJ = fiL1ZfNHAgJ + 1;
        }
    }
    {
        KWz8sxDO0PtN = 0;
        for (; Fo7NGs > KWz8sxDO0PtN;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", U0yC1IDLun[KWz8sxDO0PtN].left[0], U0yC1IDLun[KWz8sxDO0PtN].left[1], U0yC1IDLun[KWz8sxDO0PtN].left[2], U0yC1IDLun[KWz8sxDO0PtN].z5rnj7[0], U0yC1IDLun[KWz8sxDO0PtN].z5rnj7[1], U0yC1IDLun[KWz8sxDO0PtN].z5rnj7[2], U0yC1IDLun[KWz8sxDO0PtN].gRjmZrh1);
            KWz8sxDO0PtN++;
        }
    }
    return 0;
}

