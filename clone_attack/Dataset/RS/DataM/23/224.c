char jBfiCbP97eUE [(115 - 10)];

void  pcJ1MOTBkN (int aizbr85JYw, int q2DWCvEXIlM4) {
    char FOygRa0X;
    int cBVSwWE7z6A;
    for (cBVSwWE7z6A = aizbr85JYw; (aizbr85JYw + q2DWCvEXIlM4) / 2 >= cBVSwWE7z6A; cBVSwWE7z6A++) {
        FOygRa0X = jBfiCbP97eUE[cBVSwWE7z6A];
        jBfiCbP97eUE[cBVSwWE7z6A] = jBfiCbP97eUE[aizbr85JYw + q2DWCvEXIlM4 - cBVSwWE7z6A];
        jBfiCbP97eUE[aizbr85JYw + q2DWCvEXIlM4 - cBVSwWE7z6A] = FOygRa0X;
    };
}

void  main () {
    gets (jBfiCbP97eUE);
    puts (jBfiCbP97eUE);
    int cBVSwWE7z6A, len, aizbr85JYw = (23 - 23), q2DWCvEXIlM4;
    len = strlen (jBfiCbP97eUE);
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
    for (cBVSwWE7z6A = (247 - 247); cBVSwWE7z6A < len; cBVSwWE7z6A++) {
        if (jBfiCbP97eUE[cBVSwWE7z6A] == ' ') {
            q2DWCvEXIlM4 = cBVSwWE7z6A - (498 - 497);
            pcJ1MOTBkN (aizbr85JYw, q2DWCvEXIlM4);
            aizbr85JYw = q2DWCvEXIlM4 + 2;
        };
    }
    pcJ1MOTBkN (aizbr85JYw, len - 1);
    pcJ1MOTBkN (0, len - 1);
}

