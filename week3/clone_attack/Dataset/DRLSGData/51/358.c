char RYxEicqW [10000];
int wnFLtf16 [10000], n;

int main () {
    int OOfDBA;
    int WyUvVGDL;
    int MDVXLgKUr;
    int joTP4gxnyAYr;
    int flag;
    int uy238hSzJc;
    flag = 1;
    scanf ("%d", &n);
    scanf ("%s", RYxEicqW);
    WyUvVGDL = strlen (RYxEicqW);
    uy238hSzJc = 0;
    for (joTP4gxnyAYr = 0; WyUvVGDL > joTP4gxnyAYr + n - 1; joTP4gxnyAYr++)
        for (OOfDBA = joTP4gxnyAYr; WyUvVGDL > OOfDBA +n - 1; OOfDBA++) {
            flag = 1;
            for (MDVXLgKUr = 0; n > MDVXLgKUr; MDVXLgKUr++) {
                if (RYxEicqW[joTP4gxnyAYr + MDVXLgKUr] != RYxEicqW[OOfDBA +MDVXLgKUr]) {
                    flag = 0;
                    break;
                }
            }
            if (!(1 != flag)) {
                wnFLtf16[joTP4gxnyAYr]++;
            }
            if (wnFLtf16[joTP4gxnyAYr] > uy238hSzJc)
                uy238hSzJc = wnFLtf16[joTP4gxnyAYr];
        }
    if (uy238hSzJc == 1) {
        return 0;
    }
    printf ("%d", uy238hSzJc);
    for (joTP4gxnyAYr = 0; WyUvVGDL > joTP4gxnyAYr; joTP4gxnyAYr++)
        if (wnFLtf16[joTP4gxnyAYr] == uy238hSzJc) {
            for (OOfDBA = 0; OOfDBA < n; OOfDBA++)
                printf ("%c", RYxEicqW[joTP4gxnyAYr + OOfDBA]);
        }
    return 0;
}

