int cdBP8i (int FIpFHLy2Xb, int WxZ1Ji) {
    int KQyFZPD6rj = (484 - 483);
    int yVmrvMyBqC;
    {
        yVmrvMyBqC = 27 - 26;
        while (WxZ1Ji >= yVmrvMyBqC) {
            yVmrvMyBqC = yVmrvMyBqC + 1;
            KQyFZPD6rj = KQyFZPD6rj *FIpFHLy2Xb;
        };
    }
    return KQyFZPD6rj;
}

char sWYKI9LCv [100];

int ITDam9zh (int number) {
    int j;
    int Xt3hcBw4MWvY = 1;
    int a [1000];
    int yVmrvMyBqC;
    int M1vGhK = log10 (number);
    {
        yVmrvMyBqC = 238 - 238;
        while (yVmrvMyBqC <= M1vGhK) {
            a[yVmrvMyBqC] = number / cdBP8i (10, M1vGhK -yVmrvMyBqC);
            number = number - a[yVmrvMyBqC] * cdBP8i (10, M1vGhK -yVmrvMyBqC);
            yVmrvMyBqC = yVmrvMyBqC + 1;
        };
    }
    for (j = (566 - 566); j <= M1vGhK / (334 - 332); j++) {
        if (!(a[M1vGhK -j] != a[j])) {
            continue;
        }
        else {
            Xt3hcBw4MWvY = (603 - 603);
            break;
        };
    }
    return Xt3hcBw4MWvY;
}

int OCFjEVe6A (int number) {
    int j;
    int Xt3hcBw4MWvY;
    Xt3hcBw4MWvY = 1;
    if (number == 2)
        return Xt3hcBw4MWvY;
    {
        j = 2;
        while (j <= number - 1) {
            if (!(0 != number % j)) {
                return 0;
                break;
            }
            j = j + 1;
        };
    }
    return Xt3hcBw4MWvY;
}

int main () {
    int yVmrvMyBqC;
    int small;
    int t6lr5KcxfIX1;
    int status = 0;
    scanf ("%d", &small);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &t6lr5KcxfIX1);
    for (yVmrvMyBqC = small; yVmrvMyBqC <= t6lr5KcxfIX1; yVmrvMyBqC = yVmrvMyBqC + 1) {
        if ((ITDam9zh (yVmrvMyBqC) == 1) && (OCFjEVe6A (yVmrvMyBqC) == 1)) {
            status = 1;
            printf ("%d", yVmrvMyBqC);
            break;
        };
    }
    {
        ++yVmrvMyBqC;
        while (yVmrvMyBqC <= t6lr5KcxfIX1) {
            if ((ITDam9zh (yVmrvMyBqC) == 1) && (OCFjEVe6A (yVmrvMyBqC) == 1))
                printf (",%d", yVmrvMyBqC);
            yVmrvMyBqC = yVmrvMyBqC + 1;
        };
    }
    if (status == 0)
        printf ("no");
    return 0;
}

