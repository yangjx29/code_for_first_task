int main () {
    char UJAPCpezMN0l [1000];
    char UBNakzZ5L [(479 - 429)] [1000];
    int ork2TlxDgVum;
    int MPCVRmF8iBYv;
    int a;
    int b;
    int gVDgyvFI;
    ork2TlxDgVum = (620 - 620);
    MPCVRmF8iBYv = ~((727 - 726) << 31);
    gets (UJAPCpezMN0l);
    int ziRt8MvrCu;
    ziRt8MvrCu = strlen (UJAPCpezMN0l);
    int j;
    int etfW9LmSjP2;
    int WnfFPsSaVJG;
    j = (991 - 991);
    etfW9LmSjP2 = 0;
    for (WnfFPsSaVJG = 0; WnfFPsSaVJG < ziRt8MvrCu + 1; WnfFPsSaVJG = WnfFPsSaVJG +1) {
        if (!(' ' == UJAPCpezMN0l[WnfFPsSaVJG]) && !('\0' == UJAPCpezMN0l[WnfFPsSaVJG])) {
            UBNakzZ5L[j][etfW9LmSjP2] = UJAPCpezMN0l[WnfFPsSaVJG];
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
            etfW9LmSjP2++;
        }
        else if (UJAPCpezMN0l[WnfFPsSaVJG] == ' ' || UJAPCpezMN0l[WnfFPsSaVJG] == '\0') {
            UBNakzZ5L[j][etfW9LmSjP2] = '\0';
            j = j + 1;
            etfW9LmSjP2 = 0;
        };
    }
    for (WnfFPsSaVJG = 0; WnfFPsSaVJG < j; WnfFPsSaVJG = WnfFPsSaVJG +1) {
        a = strlen (UBNakzZ5L[WnfFPsSaVJG]);
        if (a > ork2TlxDgVum) {
            b = WnfFPsSaVJG;
            ork2TlxDgVum = a;
        }
        if (a < MPCVRmF8iBYv) {
            MPCVRmF8iBYv = a;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            gVDgyvFI = WnfFPsSaVJG;
        };
    }
    printf ("%s\n%s\n", UBNakzZ5L[b], UBNakzZ5L[gVDgyvFI]);
    return 0;
}

