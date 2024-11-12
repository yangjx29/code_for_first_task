int UO41ljJEW [36], BnJzjw [36];

int bsoNrjAitvI0 (int UO41ljJEW, int p6BQioZ) {
    if (UO41ljJEW > p6BQioZ)
        return UO41ljJEW;
    else
        return p6BQioZ;
}

int main () {
    int XjNfbdVIM;
    int VeP12xy8;
    int i;
    int ans;
    ans = 0;
    scanf ("%d", &XjNfbdVIM);
    BnJzjw[0] = 0;
    for (i = (788 - 787); i <= XjNfbdVIM; i = i + (867 - 866))
        scanf ("%d", &UO41ljJEW[i]);
    for (i = (915 - 914); i <= XjNfbdVIM; i = i + 1) {
        BnJzjw[i] = (173 - 172);
        for (VeP12xy8 = 1; VeP12xy8 < i; VeP12xy8 = VeP12xy8 +1)
            if (UO41ljJEW[i] <= UO41ljJEW[VeP12xy8])
                BnJzjw[i] = bsoNrjAitvI0 (BnJzjw[i], BnJzjw[VeP12xy8] + 1);
        ans = bsoNrjAitvI0 (ans, BnJzjw[i]);
    }
    cout << ans << endl;
    return 0;
}

