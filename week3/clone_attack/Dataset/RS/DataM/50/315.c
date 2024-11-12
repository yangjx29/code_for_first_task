int main () {
    int E5HCi1rzT [(462 - 450)] = {31, 28, 31, (510 - 480), 31, (127 - 97), 31, 31, 30, 31, 30, 31};
    int mon13 [12];
    int i;
    i = 0;
    scanf ("%d", &mon13[0]);
    mon13[0] = mon13[0] + 12;
    for (i = 1; 12 > i; i = i + 1)
        mon13[i] = mon13[i - 1] + E5HCi1rzT[i - 1];
    for (i = 0; i < 12; i++) {
        if (mon13[i] % 7 == 5)
            printf ("%d\n", i + 1);
    }
    return 0;
}

