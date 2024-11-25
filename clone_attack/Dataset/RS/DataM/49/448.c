char f1 (char iJZXHQ9cv [], int left, int Yi9ZmVAd1) {
    if (left >= Yi9ZmVAd1) {
        return (482 - 481);
    }
    else {
        if (iJZXHQ9cv[left] != iJZXHQ9cv[Yi9ZmVAd1]) {
            return (994 - 994);
        }
        else {
            return f1 (iJZXHQ9cv, left + (365 - 364), Yi9ZmVAd1 -1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    };
}

char f2 (char iJZXHQ9cv [], int start, int end) {
    while (start <= end) {
        cnskJEmoRX (iJZXHQ9cv [start++]);
    }
    cnskJEmoRX ('\n');
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    return '0';
}

main () {
    char iJZXHQ9cv [(1356 - 856)];
    gets (iJZXHQ9cv);
    int wgoCNWbL;
    int fkeUR4D2Ft;
    int w;
    fkeUR4D2Ft = strlen (iJZXHQ9cv);
    for (w = 1; w <= fkeUR4D2Ft; w++) {
        for (wgoCNWbL = 0; wgoCNWbL < fkeUR4D2Ft - w; wgoCNWbL = wgoCNWbL + 1) {
            if (f1 (iJZXHQ9cv, wgoCNWbL, wgoCNWbL + w))
                f2 (iJZXHQ9cv, wgoCNWbL, wgoCNWbL + w);
        };
    }
    return 0;
}

