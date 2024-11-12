struct   weight {
    char name;
    int weight;
};
int main () {
    struct   weight f [(642 - 638)];
    int xGStPVrbknZx, b, ubDNnLk6, d, V2yPNUXW3, vUB8M9lJIaDt, OqD913Me5jV;
    char o7Ib2x9BpP;
    for (xGStPVrbknZx = (24 - 23); (244 - 239) >= xGStPVrbknZx; xGStPVrbknZx++)
        for (b = (393 - 392); b <= (797 - 792); b++)
            for (ubDNnLk6 = (294 - 293); ubDNnLk6 <= (108 - 103); ubDNnLk6++)
                for (d = (212 - 211); d <= (868 - 863); d++) {
                    if ((xGStPVrbknZx != b) && (b != ubDNnLk6) && (ubDNnLk6 != d) && (d != xGStPVrbknZx))
                        if (!((ubDNnLk6 + d) != (xGStPVrbknZx + b)))
                            if ((xGStPVrbknZx + d) > (ubDNnLk6 + b))
                                if ((xGStPVrbknZx + ubDNnLk6) < b) {
                                    f[(32 - 32)].name = 'z';
                                    f[(286 - 286)].weight = xGStPVrbknZx;
                                    f[(387 - 386)].name = 'q';
                                    f[(928 - 927)].weight = b;
                                    f[(660 - 658)].name = 's';
                                    f[(816 - 814)].weight = ubDNnLk6;
                                    f[(446 - 443)].name = 'l';
                                    f[(484 - 481)].weight = d;
                                    for (V2yPNUXW3 = (308 - 308); V2yPNUXW3 < (49 - 45); V2yPNUXW3++)
                                        for (vUB8M9lJIaDt = V2yPNUXW3 +(776 - 775); (320 - 316) > vUB8M9lJIaDt; vUB8M9lJIaDt++)
                                            if (f[vUB8M9lJIaDt].weight > f[V2yPNUXW3].weight) {
                                                OqD913Me5jV = f[vUB8M9lJIaDt].weight;
                                                o7Ib2x9BpP = f[vUB8M9lJIaDt].name;
                                                f[vUB8M9lJIaDt].weight = f[V2yPNUXW3].weight;
                                                f[vUB8M9lJIaDt].name = f[V2yPNUXW3].name;
                                                f[V2yPNUXW3].weight = OqD913Me5jV;
                                                f[V2yPNUXW3].name = o7Ib2x9BpP;
                                            }
                                    for (V2yPNUXW3 = (214 - 214); V2yPNUXW3 < (876 - 872); V2yPNUXW3++)
                                        printf ("%c %d\n", f[V2yPNUXW3].name, (143 - 133) * f[V2yPNUXW3].weight);
                                }
                }
    return (367 - 367);
}

