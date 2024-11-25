int main () {
    int v9QqNZUFp8;
    int xlL7hVnoWa;
    int h2N7LFwdmre;
    int j;
    int Mqpo3navj;
    v9QqNZUFp8 = 1;
    int a [(1638 - 638)] = {(483 - 483)};
    int b [1000] = {(388 - 388)};
    char W1TtYwA3Qo;
    {
        h2N7LFwdmre = 400 - 400;
        while (1) {
            cin >> a[h2N7LFwdmre];
            W1TtYwA3Qo = getchar ();
            if (!('\n' != W1TtYwA3Qo))
                break;
            h2N7LFwdmre = h2N7LFwdmre + 1;
        };
    }
    xlL7hVnoWa = h2N7LFwdmre + 1;
    {
        h2N7LFwdmre = 0;
        while (xlL7hVnoWa > h2N7LFwdmre) {
            cin >> b[h2N7LFwdmre];
            W1TtYwA3Qo = getchar ();
            if (!('\n' != W1TtYwA3Qo))
                break;
            h2N7LFwdmre = h2N7LFwdmre + 1;
        };
    }
    {
        h2N7LFwdmre = 1;
        while (1002 > h2N7LFwdmre) {
            Mqpo3navj = 0;
            for (j = 0; xlL7hVnoWa > j; j++) {
                if (h2N7LFwdmre >= a[j] && h2N7LFwdmre < b[j])
                    Mqpo3navj = Mqpo3navj++;
            }
            v9QqNZUFp8 = (Mqpo3navj > v9QqNZUFp8 ? Mqpo3navj : v9QqNZUFp8);
            h2N7LFwdmre++;
        };
    }
    cout << xlL7hVnoWa << " " << v9QqNZUFp8;
    return 0;
}

