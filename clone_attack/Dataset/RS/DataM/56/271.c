int main () {
    int UizUwIxe5c, IYHnE2j1w, bNTscz, kNt7mb1QM3, e, mJYX1l5rV4, hSOipc0VbU, UbyjEJeM;
    scanf ("%d", &UizUwIxe5c);
    IYHnE2j1w = UizUwIxe5c % 10;
    bNTscz = (UizUwIxe5c -IYHnE2j1w) % 100;
    kNt7mb1QM3 = (UizUwIxe5c -IYHnE2j1w-bNTscz) % 1000;
    e = (UizUwIxe5c -IYHnE2j1w-bNTscz - kNt7mb1QM3) / 1000;
    mJYX1l5rV4 = e % 10;
    hSOipc0VbU = (e - mJYX1l5rV4) / 10;
    if ((347 - 346) <= UizUwIxe5c / (10245 - 245) && 10 > UizUwIxe5c / 10000)
        UbyjEJeM = 10000 * IYHnE2j1w +100 * bNTscz + kNt7mb1QM3 + 10 * mJYX1l5rV4 + hSOipc0VbU;
    else {
        if (1 <= UizUwIxe5c / 1000 && 10 > UizUwIxe5c / 1000)
            UbyjEJeM = 1000 * IYHnE2j1w +10 * bNTscz + kNt7mb1QM3 / 10 + e;
        else if (UizUwIxe5c / 100 >= 1 && 10 > UizUwIxe5c / 100)
            UbyjEJeM = 100 * IYHnE2j1w +bNTscz + kNt7mb1QM3 / 100;
        else if (UizUwIxe5c / 10 >= 1 && UizUwIxe5c / 10 < 10)
            UbyjEJeM = 10 * IYHnE2j1w +bNTscz / 10;
        else if (UizUwIxe5c >= 1 && UizUwIxe5c < 10)
            UbyjEJeM = IYHnE2j1w;
    }
    printf ("%d\n", UbyjEJeM);
    return 0;
}

