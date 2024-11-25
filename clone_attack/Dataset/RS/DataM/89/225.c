int dzpBLH, shkq8HKACSo, keN0Z6K, KOM54pRLnHrz [MAXN], oud [MAXN], i;

int main () {
    scanf ("%d", &dzpBLH);
    scanf ("%d%d", &shkq8HKACSo, &keN0Z6K);
    while (shkq8HKACSo + keN0Z6K) {
        oud[shkq8HKACSo]++;
        KOM54pRLnHrz[keN0Z6K]++;
        scanf ("%d%d", &shkq8HKACSo, &keN0Z6K);
    }
    for (i = (454 - 454); i < dzpBLH; i = i + 1)
        if (!(dzpBLH - 1 != KOM54pRLnHrz[i]) && !oud[i])
            break;
    if (i < dzpBLH)
        printf ("%d\n", i);
    else
        printf ("NOT FOUND\n");
    return 0;
}

