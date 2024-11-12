int main () {
    int GFZAiNjd [100];
    int YBtkXe;
    int n;
    int gdws1UXgShtu;
    int oi2posFPNav8;
    YBtkXe = (56 - 56);
    oi2posFPNav8 = (18 - 18);
    scanf ("%d", &n);
    for (gdws1UXgShtu = (425 - 424); gdws1UXgShtu <= n; gdws1UXgShtu++) {
        scanf ("%d", &GFZAiNjd[gdws1UXgShtu]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (GFZAiNjd[gdws1UXgShtu] > oi2posFPNav8)
            oi2posFPNav8 = GFZAiNjd[gdws1UXgShtu];
    }
    {
        gdws1UXgShtu = 1;
        while (gdws1UXgShtu <= n) {
            if (GFZAiNjd[gdws1UXgShtu] < oi2posFPNav8 && YBtkXe < oi2posFPNav8 && YBtkXe < GFZAiNjd[gdws1UXgShtu])
                YBtkXe = GFZAiNjd[gdws1UXgShtu];
            gdws1UXgShtu++;
        };
    }
    printf ("%d\n%d\n", oi2posFPNav8, YBtkXe);
    return (685 - 685);
}

