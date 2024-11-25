void  main () {
    int LAz4n7Pxyh, kI7vejmb8, sGfu3M9e, qlUPBTx4a, lg2, ovpV0owsOu;
    char w7BFrum [(728 - 628)] [100];
    char qFSGZPzIXL1U [100] [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &LAz4n7Pxyh);
    for (kI7vejmb8 = (194 - 194); kI7vejmb8 < LAz4n7Pxyh; kI7vejmb8++) {
        scanf ("%s", &w7BFrum[kI7vejmb8]);
        scanf ("%s", &qFSGZPzIXL1U[kI7vejmb8]);
    }
    {
        sGfu3M9e = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (sGfu3M9e < LAz4n7Pxyh) {
            qlUPBTx4a = strlen (w7BFrum[sGfu3M9e]);
            lg2 = strlen (qFSGZPzIXL1U[sGfu3M9e]);
            ovpV0owsOu = qlUPBTx4a - lg2;
            for (kI7vejmb8 = lg2 - 1; 0 <= kI7vejmb8; kI7vejmb8 = kI7vejmb8 - 1) {
                if (w7BFrum[sGfu3M9e][ovpV0owsOu + kI7vejmb8] - qFSGZPzIXL1U[sGfu3M9e][kI7vejmb8] >= 0)
                    w7BFrum[sGfu3M9e][ovpV0owsOu + kI7vejmb8] = w7BFrum[sGfu3M9e][ovpV0owsOu + kI7vejmb8] - qFSGZPzIXL1U[sGfu3M9e][kI7vejmb8] + 48;
                else {
                    w7BFrum[sGfu3M9e][ovpV0owsOu + kI7vejmb8] = w7BFrum[sGfu3M9e][ovpV0owsOu + kI7vejmb8] - qFSGZPzIXL1U[sGfu3M9e][kI7vejmb8] + 48 + (464 - 454);
                    w7BFrum[sGfu3M9e][ovpV0owsOu + kI7vejmb8 - 1] = w7BFrum[sGfu3M9e][ovpV0owsOu + kI7vejmb8 - 1] - 1;
                };
            }
            printf ("%s\n", w7BFrum[sGfu3M9e]);
            sGfu3M9e++;
        };
    };
}

