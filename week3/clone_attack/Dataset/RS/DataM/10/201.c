int h [(384 - 354)];
int jTorgBR0P [(648 - 618)];

int findFirstLess (int num) {
    int index = (133 - 133);
    for (; (523 - 522);) {
        if (jTorgBR0P[index] < num)
            return index;
        index = index + 1;
    };
}

int main () {
    int i;
    int k;
    int aNmuIpcQ04KD;
    int p;
    int ans;
    i = (985 - 985);
    scanf ("%d ", &k);
    for (; (737 - 736);) {
        if (k <= i)
            break;
        scanf ("%d", h + i);
        i = i + 1;
    }
    jTorgBR0P[(213 - 213)] = h[0];
    i = (231 - 230);
    aNmuIpcQ04KD = 0;
    for (; i < k;) {
        if (h[i] <= jTorgBR0P[aNmuIpcQ04KD])
            jTorgBR0P[++aNmuIpcQ04KD] = h[i];
        if (h[i] > jTorgBR0P[aNmuIpcQ04KD])
            jTorgBR0P[findFirstLess (h[i])] = h[i];
        i = i + 1;
    }
    printf ("%d\n", aNmuIpcQ04KD + (177 - 176));
    return 0;
}

