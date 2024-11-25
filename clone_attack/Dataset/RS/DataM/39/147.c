int main () {
    int EXTKICtsaS7;
    int total;
    int hVt9BvsTRZ [100];
    int b [100];
    int p26KSV5fk [100];
    int z3UPVLgn6pSD;
    int i;
    int B0g4kDt;
    int RkqgIhtSwAa [100] = {0};
    int BS7Jl6PuAe;
    EXTKICtsaS7 = 0;
    total = 0;
    char L8AqfKaLj [20];
    char myM5B8gYo;
    char x;
    char highestname [20];
    scanf ("%d", &z3UPVLgn6pSD);
    for (i = 0; i < z3UPVLgn6pSD; i = i + 1) {
        scanf ("%s %d %d %c %c %d", L8AqfKaLj, &hVt9BvsTRZ[i], &b[i], &myM5B8gYo, &x, &p26KSV5fk[i]);
        if ((hVt9BvsTRZ[i] > 80) && 1 <= p26KSV5fk[i]) {
            RkqgIhtSwAa[i] = RkqgIhtSwAa[i] + 8000;
        }
        if (hVt9BvsTRZ[i] > 85 && b[i] > 80) {
            RkqgIhtSwAa[i] += 4000;
        }
        if (hVt9BvsTRZ[i] > 90) {
            RkqgIhtSwAa[i] += 2000;
        }
        if (hVt9BvsTRZ[i] > 85 && x == 'Y') {
            RkqgIhtSwAa[i] += 1000;
        }
        if (b[i] > 80 && myM5B8gYo == 'Y') {
            RkqgIhtSwAa[i] += 850;
        }
        total += RkqgIhtSwAa[i];
        if (RkqgIhtSwAa[i] > EXTKICtsaS7) {
            {
                B0g4kDt = 0;
                while (L8AqfKaLj[B0g4kDt] != '\0') {
                    highestname[B0g4kDt] = L8AqfKaLj[B0g4kDt];
                    B0g4kDt = B0g4kDt +1;
                };
            }
            highestname[B0g4kDt] = '\0';
            EXTKICtsaS7 = RkqgIhtSwAa[i];
            BS7Jl6PuAe = i;
        };
    }
    printf ("%s\n%d\n%d\n", highestname, RkqgIhtSwAa[BS7Jl6PuAe], total);
    return 0;
}

