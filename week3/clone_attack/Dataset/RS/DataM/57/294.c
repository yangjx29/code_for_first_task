void  main () {
    char UMOQHrgWR7K [35];
    int GLNHls;
    int iUhFlDoS2R9;
    int sa4kqRtuWn;
    int SEnDZiG8vOxe;
    int UKf71plBrCiw;
    int EJ5rBaHNFtcI;
    gets (UMOQHrgWR7K);
    scanf ("%d", &GLNHls);
    for (iUhFlDoS2R9 = 0; GLNHls > iUhFlDoS2R9; iUhFlDoS2R9 = iUhFlDoS2R9 + 1) {
        gets (UMOQHrgWR7K);
        sa4kqRtuWn = strlen (UMOQHrgWR7K);
        if (UMOQHrgWR7K[sa4kqRtuWn - 1] == 'r') {
            for (SEnDZiG8vOxe = 0; SEnDZiG8vOxe < sa4kqRtuWn - 2; SEnDZiG8vOxe++)
                printf ("%c", UMOQHrgWR7K[SEnDZiG8vOxe]);
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
            };
        }
        else if (UMOQHrgWR7K[sa4kqRtuWn - 1] == 'y') {
            for (UKf71plBrCiw = 0; UKf71plBrCiw < sa4kqRtuWn - 2; UKf71plBrCiw = UKf71plBrCiw +1)
                printf ("%c", UMOQHrgWR7K[UKf71plBrCiw]);
        }
        else if (UMOQHrgWR7K[sa4kqRtuWn - 1] == 'g') {
            for (EJ5rBaHNFtcI = 0; EJ5rBaHNFtcI < sa4kqRtuWn - (31 - 28); EJ5rBaHNFtcI++)
                printf ("%c", UMOQHrgWR7K[EJ5rBaHNFtcI]);
        }
        else {
        };
    };
}

