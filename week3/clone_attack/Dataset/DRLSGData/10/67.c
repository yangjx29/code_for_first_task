int main () {
    int Ej6bQYVgXi, dQWLVKaqsj [25], ahunokN67 [25];
    int SvfZR3k, eLQ2x9Jy7bO, Y5oQRru;
    int kDhWxYKRCf, x8wQzxHNcy5, RsfSOR8e273G, o4OTfUhAdV;
    Y5oQRru = 1;
    scanf ("%d", &Ej6bQYVgXi);
    {
        kDhWxYKRCf = 0;
        for (; kDhWxYKRCf < Ej6bQYVgXi;) {
            scanf ("%d", &dQWLVKaqsj[kDhWxYKRCf]);
            ahunokN67[kDhWxYKRCf] = 1;
            kDhWxYKRCf++;
        }
    }
    {
        RsfSOR8e273G = 1;
        for (; RsfSOR8e273G < Ej6bQYVgXi;) {
            {
                o4OTfUhAdV = 0;
                for (; o4OTfUhAdV < RsfSOR8e273G;) {
                    if (dQWLVKaqsj[RsfSOR8e273G] <= dQWLVKaqsj[o4OTfUhAdV]) {
                        SvfZR3k = ahunokN67[o4OTfUhAdV] + 1;
                        if (SvfZR3k > ahunokN67[RsfSOR8e273G])
                            ahunokN67[RsfSOR8e273G] = SvfZR3k;
                    }
                    o4OTfUhAdV++;
                }
            }
            RsfSOR8e273G++;
        }
    }
    {
        x8wQzxHNcy5 = 1;
        for (; x8wQzxHNcy5 < Ej6bQYVgXi;) {
            if (ahunokN67[x8wQzxHNcy5] > Y5oQRru)
                Y5oQRru = ahunokN67[x8wQzxHNcy5];
            x8wQzxHNcy5++;
        }
    }
    printf ("%d", Y5oQRru);
    return 0;
}

