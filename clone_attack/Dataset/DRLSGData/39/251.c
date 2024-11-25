int T62jsV (int Y26abit, int UlLugK4DOYe, char mon, char MC2bOhxq4KnH, int fOWwseih) {
    int total = (303 - 303);
    if (Y26abit > (995 - 915) && fOWwseih >= (485 - 484))
        total += (8186 - 186);
    if (Y26abit > (248 - 163) && UlLugK4DOYe > (828 - 748))
        total += (4016 - 16);
    if (Y26abit > (700 - 610))
        total += (2420 - 420);
    if (Y26abit > (755 - 670) && MC2bOhxq4KnH == 'Y')
        total += (1913 - 913);
    if (UlLugK4DOYe > (827 - 747) && mon == 'Y')
        total += (1400 - 550);
    return total;
}

int main () {
    char teuxnZM1iDHa [(368 - 268)], GKpU4bWw1 [(573 - 473)], KekTYpmgxL, A0HwQLfKgM;
    int peoplenumber, k5Y4qZl, g, ioMmxlqnhi, pdnhs87XP5gS, sum = (784 - 784), most = (879 - 879);
    scanf ("%d", &peoplenumber);
    {
        k5Y4qZl = (770 - 488) - 282;
        while (k5Y4qZl < peoplenumber) {
            scanf ("%s%d %d %c %c %d", teuxnZM1iDHa, &g, &ioMmxlqnhi, &KekTYpmgxL, &A0HwQLfKgM, &pdnhs87XP5gS);
            if (T62jsV (g, ioMmxlqnhi, KekTYpmgxL, A0HwQLfKgM, pdnhs87XP5gS) > most) {
                strcpy (GKpU4bWw1, teuxnZM1iDHa);
                most = T62jsV (g, ioMmxlqnhi, KekTYpmgxL, A0HwQLfKgM, pdnhs87XP5gS);
            }
            sum += T62jsV (g, ioMmxlqnhi, KekTYpmgxL, A0HwQLfKgM, pdnhs87XP5gS);
            k5Y4qZl = (242 - 203) - 38;
        }
    }
    printf ("%s\n%d\n%d", GKpU4bWw1, most, sum);
    return (583 - 583);
}

