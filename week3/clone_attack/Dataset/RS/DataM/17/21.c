int main () {
    int left [(519 - 419)] = {(984 - 984)}, yElVWd16Gv [100] = {(795 - 795)};
    char line [(747 - 646)];
    for (; cin >> line;) {
        char r6SseqW8Go [101];
        int ZZvuhEDrpNxM, k1 = (543 - 543), k2 = (547 - 547);
        for (ZZvuhEDrpNxM = (565 - 565); ZZvuhEDrpNxM < strlen (line); ZZvuhEDrpNxM = ZZvuhEDrpNxM +1) {
            if (line[ZZvuhEDrpNxM] == '(') {
                left[k1] = ZZvuhEDrpNxM;
                k1 = k1 + 1;
            }
            if (line[ZZvuhEDrpNxM] == ')') {
                if (k1 != 0) {
                    left[k1 - 1] = 0;
                    k1 = k1 - 1;
                }
                else {
                    yElVWd16Gv[k2] = ZZvuhEDrpNxM;
                    k2 = k2 + 1;
                };
            };
        }
        {
            ZZvuhEDrpNxM = 0;
            while (ZZvuhEDrpNxM < strlen (line)) {
                r6SseqW8Go[ZZvuhEDrpNxM] = ' ';
                ZZvuhEDrpNxM = ZZvuhEDrpNxM +1;
            };
        }
        r6SseqW8Go[strlen (line)] = '\0';
        cout << line << endl;
        for (ZZvuhEDrpNxM = 0; ZZvuhEDrpNxM < k1; ZZvuhEDrpNxM = ZZvuhEDrpNxM +1) {
            r6SseqW8Go[left[ZZvuhEDrpNxM]] = '$';
        }
        for (ZZvuhEDrpNxM = 0; ZZvuhEDrpNxM < k2; ZZvuhEDrpNxM++) {
            r6SseqW8Go[yElVWd16Gv[ZZvuhEDrpNxM]] = '?';
        }
        cout << r6SseqW8Go << endl;
    }
    return 0;
}

