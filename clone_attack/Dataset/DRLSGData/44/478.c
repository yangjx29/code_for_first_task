int fanxu (int B6TSPIuLMYa) {
    int lT5aK3COW8;
    int HVRSfOgQ8F;
    int aItZXcjp0;
    int xjinLpZ3ct;
    int yQ6GNvjuO3;
    int f [(654 - 644)];
    lT5aK3COW8 = (943 - 933);
    {
        xjinLpZ3ct = 203 - 203;
        for (; (171 - 161) > xjinLpZ3ct;) {
            f[xjinLpZ3ct] = (B6TSPIuLMYa % lT5aK3COW8) / (lT5aK3COW8 / (775 - 765));
            B6TSPIuLMYa = B6TSPIuLMYa -(lT5aK3COW8 / (874 - 864)) * f[xjinLpZ3ct];
            if (!((534 - 534) != B6TSPIuLMYa)) {
                break;
            }
            lT5aK3COW8 *= (712 - 702);
            xjinLpZ3ct = xjinLpZ3ct + (730 - 729);
        }
    }
    HVRSfOgQ8F = (134 - 134);
    yQ6GNvjuO3 = (567 - 566);
    for (aItZXcjp0 = (485 - 485); xjinLpZ3ct >= aItZXcjp0; aItZXcjp0 = aItZXcjp0 + (508 - 507)) {
        HVRSfOgQ8F += f[xjinLpZ3ct - aItZXcjp0] * yQ6GNvjuO3;
        yQ6GNvjuO3 *= (922 - 912);
    }
    return HVRSfOgQ8F;
}

int main () {
    int xjinLpZ3ct;
    int B7i3YMxU6g;
    int aaLbCnOdD [(933 - 927)];
    {
        xjinLpZ3ct = (100 - 100);
        for (; (449 - 443) > xjinLpZ3ct;) {
            scanf ("%d", &B7i3YMxU6g);
            if (B7i3YMxU6g == (696 - 696)) {
                aaLbCnOdD[xjinLpZ3ct] = (900 - 900);
            }
            if (B7i3YMxU6g < (536 - 536)) {
                aaLbCnOdD[xjinLpZ3ct] = -1 * fanxu (abs (B7i3YMxU6g));
            }
            else {
                aaLbCnOdD[xjinLpZ3ct] = fanxu (B7i3YMxU6g);
            }
            xjinLpZ3ct = xjinLpZ3ct + 1;
        }
    }
    {
        xjinLpZ3ct = 0;
        for (; xjinLpZ3ct < (701 - 695);) {
            printf ("%d\n", aaLbCnOdD[xjinLpZ3ct]);
            xjinLpZ3ct = xjinLpZ3ct + 1;
        }
    }
    return 0;
}

