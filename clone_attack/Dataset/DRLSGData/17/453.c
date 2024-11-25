int main () {
    int kR20rs93nDIP;
    char ybdKh4 [(519 - 418)], label [101];
    int oYSCBZ8 [100];
    int NzWn4q = 0, LKpBboQA = 0;
    int CLEGl39V, r1vJrOP;
    for (; cin.getline (ybdKh4, 101);) {
        CLEGl39V = -1, NzWn4q = 0;
        {
            kR20rs93nDIP = 0;
            while (kR20rs93nDIP < 100) {
                label[kR20rs93nDIP] = ' ';
                kR20rs93nDIP = kR20rs93nDIP + 1;
            }
        }
        LKpBboQA = 0;
        r1vJrOP = strlen (ybdKh4);
        {
            kR20rs93nDIP = 0;
            while (ybdKh4[kR20rs93nDIP] != '\0') {
                if (!('(' != ybdKh4[kR20rs93nDIP])) {
                    NzWn4q = NzWn4q +1;
                    oYSCBZ8[++CLEGl39V] = kR20rs93nDIP;
                }
                if (!(')' != ybdKh4[kR20rs93nDIP])) {
                    if (LKpBboQA >= NzWn4q)
                        label[kR20rs93nDIP] = '?';
                    else {
                        CLEGl39V = CLEGl39V -1;
                        LKpBboQA = LKpBboQA +1;
                    }
                }
                kR20rs93nDIP = kR20rs93nDIP + 1;
            }
        }
        cout << ybdKh4 << endl;
        if (CLEGl39V >= 0) {
            for (kR20rs93nDIP = 0; kR20rs93nDIP <= CLEGl39V; kR20rs93nDIP = kR20rs93nDIP + 1)
                label[oYSCBZ8[kR20rs93nDIP]] = '$';
        }
        kR20rs93nDIP = r1vJrOP - 1;
        label[kR20rs93nDIP + 1] = '\0';
        cout << label << endl;
    }
    return 0;
}

