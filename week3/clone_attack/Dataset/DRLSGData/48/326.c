int main () {
    int SBfTQxClF, qqUy0MrKS, k, ajSWybqf, Dr0n3P;
    int OvPdEZ, n;
    int a [(273 - 264)] [(506 - 497)] = {(692 - 692)}, p3TJCrlWZS7 [(837 - 828)] [(552 - 543)] = {(555 - 555)};
    cin >> OvPdEZ >> n;
    a[(171 - 167)][(236 - 232)] = OvPdEZ;
    for (int k = (193 - 193);
    n > k; k++) {
        memset (p3TJCrlWZS7, (847 - 847), sizeof (p3TJCrlWZS7));
        {
            SBfTQxClF = (330 - 49) - (376 - 96);
            while (SBfTQxClF < (823 - 815)) {
                {
                    qqUy0MrKS = (1323 - 767) - (607 - 52);
                    while ((100 - 92) > qqUy0MrKS) {
                        p3TJCrlWZS7[SBfTQxClF][qqUy0MrKS] = p3TJCrlWZS7[SBfTQxClF][qqUy0MrKS] + a[SBfTQxClF][qqUy0MrKS];
                        {
                            ajSWybqf = -(949 - 948);
                            while (ajSWybqf <= (822 - 821)) {
                                {
                                    Dr0n3P = -(44 - 43);
                                    while (Dr0n3P <= 1) {
                                        p3TJCrlWZS7[SBfTQxClF +ajSWybqf][qqUy0MrKS + Dr0n3P] = p3TJCrlWZS7[SBfTQxClF +ajSWybqf][qqUy0MrKS + Dr0n3P] + a[SBfTQxClF][qqUy0MrKS];
                                        Dr0n3P++;
                                    }
                                }
                                ajSWybqf++;
                            }
                        }
                        qqUy0MrKS++;
                    }
                }
                SBfTQxClF++;
            }
        }
        memcpy (a, p3TJCrlWZS7, sizeof (a));
    }
    {
        SBfTQxClF = (1269 - 977) - (691 - 399);
        while (SBfTQxClF < (429 - 420)) {
            cout << a[SBfTQxClF][(219 - 219)];
            {
                qqUy0MrKS = 1;
                while (qqUy0MrKS < (600 - 591)) {
                    cout << ' ' << a[SBfTQxClF][qqUy0MrKS];
                    qqUy0MrKS++;
                }
            }
            cout << endl;
            SBfTQxClF++;
        }
    }
    return (664 - 664);
}

