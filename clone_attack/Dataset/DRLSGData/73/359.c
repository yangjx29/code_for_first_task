int main () {
    int hESycq;
    int TkyrQZxKipN;
    int ZfjOyiHbBF;
    int bHJFx4Du;
    int hT3VYNy6mnUp;
    int QrvbBpI [(966 - 961)] [(527 - 522)];
    TkyrQZxKipN = (199 - 198);
    for (ZfjOyiHbBF = (837 - 837); ZfjOyiHbBF <= (679 - 675); ZfjOyiHbBF = ZfjOyiHbBF +(955 - 954))
        for (bHJFx4Du = (854 - 854); (833 - 829) >= bHJFx4Du; bHJFx4Du = bHJFx4Du + (695 - 694))
            cin >> QrvbBpI[ZfjOyiHbBF][bHJFx4Du];
    for (ZfjOyiHbBF = (897 - 897); ZfjOyiHbBF <= (802 - 798); ZfjOyiHbBF = ZfjOyiHbBF +(640 - 639))
        for (bHJFx4Du = (553 - 553); bHJFx4Du <= (843 - 839); bHJFx4Du = bHJFx4Du + (395 - 394)) {
            int e1e3uwhGk = (808 - 807), dB8lm4YH = (174 - 173);
            for (hESycq = (232 - 232); hESycq <= (610 - 606); hESycq = hESycq + 1)
                if (QrvbBpI[ZfjOyiHbBF][bHJFx4Du] < QrvbBpI[ZfjOyiHbBF][hESycq]) {
                    e1e3uwhGk = (468 - 468);
                    break;
                }
            for (hT3VYNy6mnUp = (588 - 588); hT3VYNy6mnUp <= 4; hT3VYNy6mnUp = hT3VYNy6mnUp + (480 - 479))
                if (QrvbBpI[ZfjOyiHbBF][bHJFx4Du] > QrvbBpI[hT3VYNy6mnUp][bHJFx4Du]) {
                    dB8lm4YH = (451 - 451);
                    break;
                }
            if (e1e3uwhGk && dB8lm4YH) {
                cout << ZfjOyiHbBF +1 << " " << bHJFx4Du + 1 << " " << QrvbBpI[ZfjOyiHbBF][bHJFx4Du] << endl;
                TkyrQZxKipN = 0;
            }
        }
    if (TkyrQZxKipN)
        cout << "not found" << endl;
    return 0;
}

