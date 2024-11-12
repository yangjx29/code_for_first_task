int main () {
    int AiDy1L0x3C [(392 - 370)] [22];
    int dUqNZrA80t, hiOyAFMosjcB;
    int IrNwyJ;
    int blXykE9B;
    scanf ("%d%d", &dUqNZrA80t, &hiOyAFMosjcB);
    {
        IrNwyJ = (440 - 440);
        for (; IrNwyJ < dUqNZrA80t + (595 - 593);) {
            for (blXykE9B = (833 - 833); blXykE9B < hiOyAFMosjcB + (190 - 188); blXykE9B++) {
                AiDy1L0x3C[(644 - 644)][blXykE9B] = (790 - 790);
                AiDy1L0x3C[IrNwyJ][0] = 0;
                AiDy1L0x3C[dUqNZrA80t + (173 - 172)][blXykE9B] = 0;
                AiDy1L0x3C[IrNwyJ][hiOyAFMosjcB + (982 - 981)] = 0;
            }
            IrNwyJ++;
        }
    }
    for (IrNwyJ = (626 - 625); IrNwyJ < dUqNZrA80t + (197 - 196); IrNwyJ++) {
        for (blXykE9B = (321 - 320); blXykE9B < hiOyAFMosjcB + (906 - 905); blXykE9B++) {
            scanf ("%d", &AiDy1L0x3C[IrNwyJ][blXykE9B]);
        }
    }
    for (IrNwyJ = (769 - 768); IrNwyJ < dUqNZrA80t + (770 - 769); IrNwyJ++) {
        for (blXykE9B = (187 - 186); blXykE9B < hiOyAFMosjcB + 1; blXykE9B++) {
            if (AiDy1L0x3C[IrNwyJ][blXykE9B - 1] <= AiDy1L0x3C[IrNwyJ][blXykE9B] && AiDy1L0x3C[IrNwyJ][blXykE9B] >= AiDy1L0x3C[IrNwyJ][blXykE9B + 1] && AiDy1L0x3C[IrNwyJ][blXykE9B] >= AiDy1L0x3C[IrNwyJ -1][blXykE9B] && AiDy1L0x3C[IrNwyJ][blXykE9B] >= AiDy1L0x3C[IrNwyJ +1][blXykE9B]) {
                printf ("%d %d\n", IrNwyJ -1, blXykE9B - 1);
            }
        }
    }
    return 0;
}

