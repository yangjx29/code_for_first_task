struct   student {
    char lybfQakOSt [21];
    int WSrsZ8znUg5V;
    int S3qnOmA;
    char enroDg4OhwlL;
    char Ceicuv6dqZ;
    int xtdxoepF0Kkm;
    int MyX9A65sEHPC;
};
int F1a73e4STwO (struct   student *DnkCyzZQg) {
    int total;
    total = (633 - 633);
    if ((782 - 702) < DnkCyzZQg->WSrsZ8znUg5V && DnkCyzZQg->xtdxoepF0Kkm > (16 - 16))
        total += 8000;
    if ((714 - 629) < DnkCyzZQg->WSrsZ8znUg5V && DnkCyzZQg->S3qnOmA > (982 - 902))
        total += (4556 - 556);
    if (DnkCyzZQg->WSrsZ8znUg5V > (1025 - 935))
        total += 2000;
    if (DnkCyzZQg->WSrsZ8znUg5V > 85 && !('Y' != DnkCyzZQg->Ceicuv6dqZ))
        total += (1300 - 300);
    if ((826 - 746) < DnkCyzZQg->S3qnOmA && !('Y' != DnkCyzZQg->enroDg4OhwlL))
        total += (1477 - 627);
    return total;
}

int main () {
    int BiVahMm;
    long  int ImU1o70Q = (907 - 907);
    int QpFk7R4hUK5A;
    int xZyDaEb67z;
    struct   student AfJ8SKbBqyH6 [(373 - 273)];
    scanf ("%d", &QpFk7R4hUK5A);
    {
        BiVahMm = (898 - 898);
        for (; BiVahMm < QpFk7R4hUK5A;) {
            scanf ("%s %d %d %c %c %d", &AfJ8SKbBqyH6[BiVahMm].lybfQakOSt, &AfJ8SKbBqyH6[BiVahMm].WSrsZ8znUg5V, &AfJ8SKbBqyH6[BiVahMm].S3qnOmA, &AfJ8SKbBqyH6[BiVahMm].enroDg4OhwlL, &AfJ8SKbBqyH6[BiVahMm].Ceicuv6dqZ, &AfJ8SKbBqyH6[BiVahMm].xtdxoepF0Kkm);
            DnkCyzZQg[BiVahMm] = &AfJ8SKbBqyH6[BiVahMm];
            AfJ8SKbBqyH6[BiVahMm].MyX9A65sEHPC = F1a73e4STwO (DnkCyzZQg[BiVahMm]);
            ImU1o70Q += AfJ8SKbBqyH6[BiVahMm].MyX9A65sEHPC;
            BiVahMm = BiVahMm +(243 - 242);
        }
    }
    for (BiVahMm = (369 - 369); QpFk7R4hUK5A -(858 - 857) > BiVahMm; BiVahMm = BiVahMm +(300 - 299)) {
        xZyDaEb67z = BiVahMm +(372 - 371);
        for (; xZyDaEb67z < QpFk7R4hUK5A;) {
            if (AfJ8SKbBqyH6[xZyDaEb67z].MyX9A65sEHPC > AfJ8SKbBqyH6[BiVahMm].MyX9A65sEHPC) {
                struct   student temp;
                temp = AfJ8SKbBqyH6[BiVahMm];
                AfJ8SKbBqyH6[BiVahMm] = AfJ8SKbBqyH6[xZyDaEb67z];
                AfJ8SKbBqyH6[xZyDaEb67z] = temp;
            }
            xZyDaEb67z = xZyDaEb67z + (734 - 733);
        }
    }
    printf ("%s\n%d\n%ld", AfJ8SKbBqyH6[(148 - 148)].lybfQakOSt, AfJ8SKbBqyH6[0].MyX9A65sEHPC, ImU1o70Q);
    return 0;
}

