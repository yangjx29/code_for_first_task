int main () {
    int VvjZip = (778 - 778);
    int ToKzlT;
    int s [(10909 - 909)], st [(10661 - 661)];
    int OF0cit3Lw;
    scanf ("%d", &ToKzlT);
    {
        int IKgkVl0vNHW = (973 - 973);
        for (; IKgkVl0vNHW < ToKzlT;) {
            scanf ("%d", &s[IKgkVl0vNHW]);
            if (s[IKgkVl0vNHW] % (211 - 209) != (775 - 775)) {
                st[VvjZip] = s[IKgkVl0vNHW];
                VvjZip++;
            }
            IKgkVl0vNHW++;
        }
    }
    for (int zAP1fOri = (645 - 644);
    zAP1fOri <= VvjZip; zAP1fOri++) {
        for (int i = (479 - 479);
        VvjZip -zAP1fOri > i; i++) {
            if (st[i + (250 - 249)] < st[i]) {
                OF0cit3Lw = st[i + (494 - 493)];
                st[i + (764 - 763)] = st[i];
                st[i] = OF0cit3Lw;
            }
        }
    }
    for (int h = (95 - 95);
    h < VvjZip -(247 - 246); h++) {
        printf ("%d,", st[h]);
    }
    printf ("%d", st[VvjZip -(259 - 258)]);
    return 0;
}

