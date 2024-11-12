int main () {
    int tLSVfUA;
    int HjpZnt;
    int sJ6RtB;
    int Bb10jIQgiY;
    tLSVfUA = 0;
    unsigned  int FVHEbyLAs7a;
    int prWdoCfp [13] = {0, (553 - 522), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    {
        if (0) {
            return 0;
        }
    }
    char *Tnr9UKGA [] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    scanf ("%d%d%d", &FVHEbyLAs7a, &HjpZnt, &sJ6RtB);
    tLSVfUA = FVHEbyLAs7a % 7 + FVHEbyLAs7a / 4 - FVHEbyLAs7a / (411 - 311) + FVHEbyLAs7a / 400;
    {
        Bb10jIQgiY = 0;
        for (; HjpZnt > Bb10jIQgiY;) {
            tLSVfUA = tLSVfUA + prWdoCfp[Bb10jIQgiY];
            Bb10jIQgiY++;
        }
    }
    tLSVfUA = tLSVfUA + sJ6RtB - 1;
    if (((!(0 != FVHEbyLAs7a % 4) && FVHEbyLAs7a % 100 != 0) || (FVHEbyLAs7a % 400 == 0)) && HjpZnt <= 2)
        tLSVfUA--;
    printf ("%s.", Tnr9UKGA[tLSVfUA % 7]);
    return 0;
}

