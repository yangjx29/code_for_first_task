int main () {
    int KjdAlN, fFqMniC, snlCaer, sum, eKpagHuS = 31, feb, mar = 31, apr = 30, may = 31, BgTf6O = 30, jul = 31, dJgUcD7LCju = 31, DQMrxkqXA6b = 30, oct = 31, dg5L9GTaXwB = 30;
    scanf ("%d%d%d", &KjdAlN, &fFqMniC, &snlCaer);
    if ((!(0 != KjdAlN % 400)) || ((KjdAlN % 4 == 0) && (KjdAlN % 100 != 0)))
        feb = 29;
    else
        feb = 28;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    switch (fFqMniC) {
    case 1 :
        sum = snlCaer;
        break;
    case 2 :
        sum = eKpagHuS + snlCaer;
        break;
    case 3 :
        sum = eKpagHuS + feb + snlCaer;
        break;
    case 4 :
        sum = eKpagHuS + feb + mar + snlCaer;
        break;
    case 5 :
        sum = eKpagHuS + feb + mar + apr + snlCaer;
        break;
    case 6 :
        sum = eKpagHuS + feb + mar + apr + may + snlCaer;
        break;
    case 7 :
        sum = eKpagHuS + feb + mar + apr + may + BgTf6O +snlCaer;
        break;
    case 8 :
        sum = eKpagHuS + feb + mar + apr + may + BgTf6O +jul + snlCaer;
        break;
    case 9 :
        sum = eKpagHuS + feb + mar + apr + may + BgTf6O +jul + dJgUcD7LCju + snlCaer;
        break;
    case 10 :
        sum = eKpagHuS + feb + mar + apr + may + BgTf6O +jul + dJgUcD7LCju + DQMrxkqXA6b +snlCaer;
        break;
    case 11 :
        sum = eKpagHuS + feb + mar + apr + may + BgTf6O +jul + dJgUcD7LCju + DQMrxkqXA6b +oct + snlCaer;
        break;
    case 12 :
        sum = eKpagHuS + feb + mar + apr + may + BgTf6O +jul + dJgUcD7LCju + DQMrxkqXA6b +oct + dg5L9GTaXwB + snlCaer;
        break;
    }
    printf ("%d", sum);
    return 0;
}

