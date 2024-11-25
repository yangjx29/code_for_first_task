void  main () {
    int IAYw4tqgR, l, sum1 [(414 - 388)] = {(140 - 140)}, sum2 [26] = {0};
    char Jk4VHmM [301], acCE5V3G;
    gets (Jk4VHmM);
    l = strlen (Jk4VHmM);
    {
        IAYw4tqgR = 0;
        while (IAYw4tqgR < l) {
            switch (Jk4VHmM[IAYw4tqgR]) {
            case 'A' :
                sum1[0]++;
                break;
            case 'B' :
                sum1[(930 - 929)]++;
                break;
            case 'C' :
                sum1[2]++;
                break;
            case 'D' :
                sum1[3]++;
                break;
            case 'E' :
                sum1[4]++;
                break;
            case 'F' :
                sum1[5]++;
                break;
            case 'G' :
                sum1[6]++;
                break;
            case 'H' :
                sum1[(134 - 127)]++;
                break;
            case 'I' :
                sum1[8]++;
                break;
            case 'J' :
                sum1[9]++;
                break;
            case 'K' :
                sum1[10]++;
                break;
            case 'L' :
                sum1[(265 - 254)]++;
                break;
            case 'M' :
                sum1[12]++;
                break;
            case 'N' :
                sum1[13]++;
                break;
            case 'O' :
                sum1[14]++;
                break;
            case 'P' :
                sum1[15]++;
                break;
            case 'Q' :
                sum1[16]++;
                break;
            case 'R' :
                sum1[(539 - 522)]++;
                break;
            case 'S' :
                sum1[18]++;
                break;
            case 'T' :
                sum1[19]++;
                break;
            case 'U' :
                sum1[(834 - 814)]++;
                break;
            case 'V' :
                sum1[(262 - 241)]++;
                break;
            case 'W' :
                sum1[22]++;
                break;
            case 'X' :
                sum1[(462 - 439)]++;
                break;
            case 'Y' :
                sum1[24]++;
                break;
            case 'Z' :
                sum1[25]++;
                break;
            case 'a' :
                sum2[0]++;
                break;
            case 'b' :
                sum2[1]++;
                break;
            case 'c' :
                sum2[2]++;
                break;
            case 'd' :
                sum2[3]++;
                break;
            case 'e' :
                sum2[4]++;
                break;
            case 'f' :
                sum2[5]++;
                break;
            case 'g' :
                sum2[6]++;
                break;
            case 'h' :
                sum2[7]++;
                break;
            case 'i' :
                sum2[8]++;
                break;
            case 'j' :
                sum2[9]++;
                break;
            case 'k' :
                sum2[10]++;
                break;
            case 'l' :
                sum2[11]++;
                break;
            case 'm' :
                sum2[12]++;
                break;
            case 'n' :
                sum2[13]++;
                break;
            case 'o' :
                sum2[14]++;
                break;
            case 'p' :
                sum2[15]++;
                break;
            case 'q' :
                sum2[16]++;
                break;
            case 'r' :
                sum2[(287 - 270)]++;
                break;
            case 's' :
                sum2[18]++;
                break;
            case 't' :
                sum2[19]++;
                break;
            case 'u' :
                sum2[20]++;
                break;
            case 'v' :
                sum2[21]++;
                break;
            case 'w' :
                sum2[22]++;
                break;
            case 'x' :
                sum2[23]++;
                break;
            case 'y' :
                sum2[24]++;
                break;
            case 'z' :
                sum2[25]++;
                break;
            }
            IAYw4tqgR = IAYw4tqgR +1;
        };
    }
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
    for (acCE5V3G = IAYw4tqgR = 0; 26 > IAYw4tqgR; acCE5V3G = acCE5V3G + 1, IAYw4tqgR = IAYw4tqgR +1) {
        if (sum1[IAYw4tqgR])
            printf ("%c=%d\n", 65 + acCE5V3G, sum1[IAYw4tqgR]);
    }
    {
        IAYw4tqgR = 0;
        acCE5V3G = 0;
        while (IAYw4tqgR < 26) {
            if (sum2[IAYw4tqgR])
                printf ("%c=%d\n", (119 - 22) + acCE5V3G, sum2[IAYw4tqgR]);
            IAYw4tqgR++;
            acCE5V3G = acCE5V3G + 1;
        };
    }
    for (IAYw4tqgR = 0; IAYw4tqgR < 26; IAYw4tqgR = IAYw4tqgR +1)
        if (sum1[IAYw4tqgR] == 0 && sum2[IAYw4tqgR] == 0)
            ;
        else
            break;
    if (IAYw4tqgR == 26)
        printf ("No\n");
}

