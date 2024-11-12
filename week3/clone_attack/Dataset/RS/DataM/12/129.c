int main () {
    int VftoLUV [16];
    int sVKhS3v0;
    int j;
    int NSElWYQh;
    int nwL0y9x7ZAdr;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int jFPJym;
    NSElWYQh = 0;
    for (; NSElWYQh != -1;) {
        if (VftoLUV[0] == -1)
            break;
        jFPJym = 0;
        nwL0y9x7ZAdr = 1;
        sVKhS3v0 = 0;
        do {
            sVKhS3v0 = sVKhS3v0 + 1;
            cin >> VftoLUV[sVKhS3v0];
            nwL0y9x7ZAdr = sVKhS3v0 + 1;
        }
        while (VftoLUV[sVKhS3v0] != 0);
        nwL0y9x7ZAdr = nwL0y9x7ZAdr - 1;
        for (sVKhS3v0 = 0; sVKhS3v0 < nwL0y9x7ZAdr; sVKhS3v0 = sVKhS3v0 + 1) {
            j = 0;
            while (j < nwL0y9x7ZAdr) {
                if (VftoLUV[sVKhS3v0] == 2 * VftoLUV[j])
                    jFPJym = jFPJym + 1;
                j++;
            };
        }
        {
            sVKhS3v0 = 0;
            while (sVKhS3v0 < 16) {
                VftoLUV[sVKhS3v0] = 0;
                sVKhS3v0 = sVKhS3v0 + 1;
            };
        }
        cin >> VftoLUV[0];
        NSElWYQh = VftoLUV[0];
        cout << jFPJym << endl;
    }
    return 0;
}

