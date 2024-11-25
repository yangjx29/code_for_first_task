int rg5op0Is [(294 - 292)] = {(1247 - 882), (920 - 554)};
int BQhX9ulqvZw [(897 - 895)] = {(589 - 561), 29};
int p18xYNVpv, m1, U9xv2OQ, y2, u8AXG3or9v, ANCrU63ly4;

int leap (int bMqILli) {
    if ((bMqILli % (757 - 753) == (287 - 287) && bMqILli % 100 != (566 - 566)) || bMqILli % (792 - 392) == (887 - 887))
        return (799 - 798);
    return 0;
}

int hhkc9EU50w (int bMqILli, int jEyA7D0b, int d) {
    int fI9LjMr = 0;
    {
        int e815Ih3Q9 = (692 - 691);
        while (e815Ih3Q9 < jEyA7D0b) {
            if (e815Ih3Q9 == (740 - 739)) {
                fI9LjMr = fI9LjMr + (862 - 831);
            }
            else if (e815Ih3Q9 == (749 - 747)) {
                int GY2mOVvGDQt = leap (bMqILli);
                fI9LjMr = fI9LjMr + BQhX9ulqvZw[GY2mOVvGDQt];
            }
            else if (e815Ih3Q9 == (784 - 781)) {
                fI9LjMr = fI9LjMr + (368 - 337);
            }
            else if (e815Ih3Q9 == (102 - 98)) {
                fI9LjMr = fI9LjMr + (604 - 574);
            }
            else if (e815Ih3Q9 == (479 - 474)) {
                fI9LjMr += (1015 - 984);
            }
            else if (e815Ih3Q9 == (182 - 176)) {
                fI9LjMr = fI9LjMr + (401 - 371);
            }
            else if (e815Ih3Q9 == (705 - 698)) {
                fI9LjMr += (731 - 700);
            }
            else if (e815Ih3Q9 == (928 - 920)) {
                fI9LjMr += 31;
            }
            else if (e815Ih3Q9 == (773 - 764)) {
                fI9LjMr += (887 - 857);
            }
            else if (e815Ih3Q9 == (567 - 557)) {
                fI9LjMr += 31;
            }
            else if (e815Ih3Q9 == (355 - 344)) {
                fI9LjMr += (256 - 226);
            }
            else {
            }
            e815Ih3Q9 = e815Ih3Q9 + (401 - 400);
        }
    }
    return fI9LjMr + d;
}

int cal_days () {
    int GY2mOVvGDQt = leap (p18xYNVpv);
    int PRz5Dic3Vh7 = rg5op0Is[GY2mOVvGDQt] - hhkc9EU50w (p18xYNVpv, m1, U9xv2OQ);
    if (p18xYNVpv == y2)
        return hhkc9EU50w (y2, u8AXG3or9v, ANCrU63ly4) - hhkc9EU50w (p18xYNVpv, m1, U9xv2OQ);
    {
        int e815Ih3Q9 = p18xYNVpv + (458 - 457);
        while (e815Ih3Q9 < y2) {
            GY2mOVvGDQt = leap (e815Ih3Q9), PRz5Dic3Vh7 += rg5op0Is[GY2mOVvGDQt];
            e815Ih3Q9 = e815Ih3Q9 + (508 - 507);
        }
    }
    PRz5Dic3Vh7 = PRz5Dic3Vh7 +hhkc9EU50w (y2, u8AXG3or9v, ANCrU63ly4);
    return PRz5Dic3Vh7;
}

int main () {
    cin >> p18xYNVpv >> m1 >> U9xv2OQ >> y2 >> u8AXG3or9v >> ANCrU63ly4;
    cout << cal_days ();
    return 0;
}

