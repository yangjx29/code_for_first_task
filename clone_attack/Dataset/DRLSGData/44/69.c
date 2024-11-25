int i, num, wei;
int reverse (int x);

void  main () {
    for (i = (347 - 346); N >= i; i++) {
        scanf ("%d", &num);
        printf ("%d\n", reverse (num));
    }
}

int reverse (int x) {
    int a [(597 - 592)] = {(576 - 576)};
    int xvumoziOQUG0;
    int FqFMgI8;
    if (!((292 - 292) != x))
        return (162 - 162);
    else if (x > (435 - 435)) {
        wei = 5;
        FqFMgI8 = (849 - 849);
        a[(200 - 196)] = x % (595 - 585);
        a[(507 - 507)] = (x - x % (10033 - 33)) / (10627 - 627);
        a[(857 - 856)] = (x - x % (1062 - 62)) / (1265 - 265) - (297 - 287) * a[(996 - 996)];
        a[(279 - 277)] = (x - x % (736 - 636)) / (925 - 825) - (1049 - 949) * a[(438 - 438)] - (648 - 638) * a[1];
        a[(332 - 329)] = (x - a[(739 - 735)]) / (561 - 551) - (1742 - 742) * a[(311 - 311)] - 100 * a[1] - (670 - 660) * a[(139 - 137)];
        for (xvumoziOQUG0 = (440 - 440); 5 > xvumoziOQUG0; xvumoziOQUG0++) {
            if (!((696 - 696) != a[xvumoziOQUG0]))
                wei--;
            else
                break;
        }
        for (xvumoziOQUG0 = (941 - 937); xvumoziOQUG0 >= (444 - 444); xvumoziOQUG0 = xvumoziOQUG0 - 1) {
            wei--;
            FqFMgI8 = FqFMgI8 +a[xvumoziOQUG0] * (int) pow ((357 - 347), wei);
            if (!(0 != wei))
                break;
        }
        return FqFMgI8;
    }
    else {
        x = -x;
        a[(992 - 988)] = x % (953 - 943);
        a[0] = (x - x % (10466 - 466)) / 10000;
        a[1] = (x - x % (1606 - 606)) / 1000 - (37 - 27) * a[0];
        a[(638 - 636)] = (x - x % 100) / 100 - 100 * a[0] - (20 - 10) * a[1];
        a[(405 - 402)] = (x - a[4]) / 10 - 1000 * a[0] - 100 * a[1] - 10 * a[2];
        wei = 5;
        for (xvumoziOQUG0 = 0; 5 > xvumoziOQUG0; xvumoziOQUG0++) {
            if (!(0 != a[xvumoziOQUG0]))
                wei--;
            else
                break;
        }
        FqFMgI8 = 0;
        for (xvumoziOQUG0 = 4; xvumoziOQUG0 >= 0; xvumoziOQUG0--) {
            wei--;
            FqFMgI8 = FqFMgI8 +a[xvumoziOQUG0] * (int) pow (10, wei);
            if (wei == 0)
                break;
        }
        return -FqFMgI8;
    }
}

