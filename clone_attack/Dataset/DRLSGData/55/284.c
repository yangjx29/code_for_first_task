int main () {
    char Pof2QH [(797 - 765)];
    int tSO7ikX, jtbnOPzZKV1, vkZbhvVAaIR, lLu8tQ1rsWi5, lgth, n = (402 - 402), GUj7tTk6C [(248 - 216)], Ek2ns1 [(740 - 708)], zq5WnYKP [(129 - 97)];
    cin >> tSO7ikX >> Pof2QH >> jtbnOPzZKV1;
    lgth = strlen (Pof2QH);
    for (vkZbhvVAaIR = (991 - 991); vkZbhvVAaIR < (202 - 170) && vkZbhvVAaIR < lgth; vkZbhvVAaIR++) {
        if (Pof2QH[vkZbhvVAaIR] >= (339 - 274) && Pof2QH[vkZbhvVAaIR] <= (751 - 661))
            GUj7tTk6C[vkZbhvVAaIR] = (int) Pof2QH[vkZbhvVAaIR] - (611 - 556);
        else {
            if (Pof2QH[vkZbhvVAaIR] >= (915 - 818) && Pof2QH[vkZbhvVAaIR] <= (680 - 558))
                GUj7tTk6C[vkZbhvVAaIR] = (int) Pof2QH[vkZbhvVAaIR] - (762 - 675);
            else
                GUj7tTk6C[vkZbhvVAaIR] = (int) Pof2QH[vkZbhvVAaIR] - (634 - 586);
        }
        n = n + pow (tSO7ikX, lgth - vkZbhvVAaIR - (293.0 - 292.0)) * GUj7tTk6C[vkZbhvVAaIR];
    }
    zq5WnYKP[(680 - 680)] = n;
    {
        vkZbhvVAaIR = (255 - 255);
        for (; vkZbhvVAaIR < (388 - 356);) {
            if (zq5WnYKP[vkZbhvVAaIR] != (761 - 761)) {
                Ek2ns1[vkZbhvVAaIR] = zq5WnYKP[vkZbhvVAaIR] % jtbnOPzZKV1;
                zq5WnYKP[vkZbhvVAaIR + (681 - 680)] = zq5WnYKP[vkZbhvVAaIR] / jtbnOPzZKV1;
                if (Ek2ns1[vkZbhvVAaIR] <= (493 - 484))
                    Pof2QH[vkZbhvVAaIR] = Ek2ns1[vkZbhvVAaIR] + (800 - 752);
                else
                    Pof2QH[vkZbhvVAaIR] = Ek2ns1[vkZbhvVAaIR] + (778 - 723);
            }
            else {
                lLu8tQ1rsWi5 = vkZbhvVAaIR;
                break;
            }
            vkZbhvVAaIR++;
        }
    }
    if (n == (850 - 850))
        cout << n;
    else {
        vkZbhvVAaIR = lLu8tQ1rsWi5 - (259 - 258);
        for (; vkZbhvVAaIR >= (822 - 822);) {
            cout << Pof2QH[vkZbhvVAaIR];
            vkZbhvVAaIR--;
        }
    }
    return (750 - 750);
}

