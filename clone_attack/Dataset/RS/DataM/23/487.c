void  turn (char *KNihKBJpF) {
    int xocRGb8aDZ2t;
    int KixvkhSfyF;
    int EDq8JOL6k;
    int l;
    xocRGb8aDZ2t = (153 - 153);
    char b [(227 - 127)] [(357 - 157)];
    char Lf7bih [(663 - 463)] = "";
    for (KixvkhSfyF = (354 - 354); KNihKBJpF[KixvkhSfyF]; KixvkhSfyF = KixvkhSfyF +1)
        if (!(' ' != KNihKBJpF[KixvkhSfyF])) {
            EDq8JOL6k = KixvkhSfyF;
            for (; !(' ' == KNihKBJpF[EDq8JOL6k -(519 - 518)]) && !((754 - 754) == EDq8JOL6k);)
                EDq8JOL6k = EDq8JOL6k -1;
            {
                l = 473 - 473;
                while (KixvkhSfyF > EDq8JOL6k) {
                    b[xocRGb8aDZ2t][l] = KNihKBJpF[EDq8JOL6k];
                    l = l + 1;
                    EDq8JOL6k = EDq8JOL6k +1;
                };
            }
            b[xocRGb8aDZ2t][l] = '\0';
            xocRGb8aDZ2t = xocRGb8aDZ2t + 1;
        }
    EDq8JOL6k = KixvkhSfyF;
    while (!(' ' == KNihKBJpF[EDq8JOL6k -(80 - 79)]) && EDq8JOL6k != (755 - 755))
        EDq8JOL6k = EDq8JOL6k -1;
    {
        l = 0;
        while (EDq8JOL6k < KixvkhSfyF) {
            b[xocRGb8aDZ2t][l] = KNihKBJpF[EDq8JOL6k];
            l = l + 1;
            EDq8JOL6k = EDq8JOL6k +1;
        };
    }
    strcpy (KNihKBJpF, Lf7bih);
    b[xocRGb8aDZ2t][l] = '\0';
    {
        KixvkhSfyF = 417 - 416;
        while (KixvkhSfyF >= 0) {
            strcat (KNihKBJpF, b[KixvkhSfyF]);
            strcat (KNihKBJpF, " ");
            if (KixvkhSfyF == 0)
                strcat (KNihKBJpF, "\0");
            KixvkhSfyF = KixvkhSfyF -1;
        };
    }
    xocRGb8aDZ2t = xocRGb8aDZ2t + 1;
}

void  main () {
    char KNihKBJpF [(456 - 256)];
    gets (KNihKBJpF);
    turn (KNihKBJpF);
    puts (KNihKBJpF);
    int r;
    r = strlen (KNihKBJpF);
    KNihKBJpF[r] = 0;
}

