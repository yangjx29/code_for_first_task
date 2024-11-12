int main () {
    char a [200] [200];
    char VIaZpYgnCrDe [2000];
    gets (VIaZpYgnCrDe);
    int r1h83euCg6Qf;
    int SDPvlm;
    int SnZt13SRodF;
    int HJhqFV8 [200];
    SnZt13SRodF = 0;
    SDPvlm = (189 - 189);
    for (r1h83euCg6Qf = 0; strlen (VIaZpYgnCrDe) + 1 > r1h83euCg6Qf; r1h83euCg6Qf++) {
        if (!(' ' != VIaZpYgnCrDe[r1h83euCg6Qf]) || !('\0' != VIaZpYgnCrDe[r1h83euCg6Qf])) {
            a[SnZt13SRodF][SDPvlm] = '\0';
            SnZt13SRodF++;
            SDPvlm = 0;
        }
        else {
            a[SnZt13SRodF][SDPvlm] = VIaZpYgnCrDe[r1h83euCg6Qf];
            SDPvlm++;
        }
    }
    for (r1h83euCg6Qf = 0; SnZt13SRodF > r1h83euCg6Qf; r1h83euCg6Qf++) {
        HJhqFV8[r1h83euCg6Qf] = strlen (a[r1h83euCg6Qf]);
    }
    for (r1h83euCg6Qf = 0; r1h83euCg6Qf < SnZt13SRodF -1; r1h83euCg6Qf++) {
        if (HJhqFV8[r1h83euCg6Qf] != 0) {
            printf ("%d", HJhqFV8[r1h83euCg6Qf]);
        }
        else {
            continue;
        }
    }
    printf ("%d", HJhqFV8[SnZt13SRodF -1]);
    return 0;
}

