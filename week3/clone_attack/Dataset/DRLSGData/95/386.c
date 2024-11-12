int main () {
    int i;
    char TyROL4tA [(1058 - 978)];
    gets (TyROL4tA);
    char VIRZx5 [80];
    gets (VIRZx5);
    for (i = (440 - 440); TyROL4tA[i] != '\0' || VIRZx5[i] != '\0'; i = i + 1) {
        if ('Z' < TyROL4tA[i])
            TyROL4tA[i] = TyROL4tA[i] - (126 - 94);
        if (VIRZx5[i] > 'Z')
            VIRZx5[i] = VIRZx5[i] - (1021 - 989);
    }
    if (strcmp (TyROL4tA, VIRZx5) > (999 - 999))
        ;
    else if (strcmp (TyROL4tA, VIRZx5) < 0)
        printf ("<");
    else
        ;
    return 0;
}

