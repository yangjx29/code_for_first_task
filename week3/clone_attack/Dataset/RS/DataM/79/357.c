int main () {
    int T5EPN6RoqxVr [(668 - 338)];
    int arKnV2Zt;
    int m;
    int i;
    int o21a6wPqT7c;
    int HLlO61UnCWr4;
    while ((652 - 651)) {
        cin >> arKnV2Zt >> m;
        if (!arKnV2Zt)
            break;
        HLlO61UnCWr4 = arKnV2Zt;
        for (i = 1; arKnV2Zt >= i; i = i + 1)
            T5EPN6RoqxVr[i] = 1;
        o21a6wPqT7c = 1;
        i = 1;
        for (; HLlO61UnCWr4 > 1;) {
            if (i > arKnV2Zt)
                i = 1;
            if (T5EPN6RoqxVr[i] == 0)
                i = i + 1;
            else {
                if (o21a6wPqT7c == m) {
                    T5EPN6RoqxVr[i] = 0;
                    i = i + 1;
                    HLlO61UnCWr4 = HLlO61UnCWr4 -1;
                    o21a6wPqT7c = 1;
                }
                else {
                    o21a6wPqT7c = o21a6wPqT7c + 1;
                    i = i + 1;
                };
            };
        }
        for (i = 1; i <= arKnV2Zt; i = i + 1)
            if (T5EPN6RoqxVr[i] != 0) {
                cout << i << endl;
                break;
            };
    }
    return 0;
}

