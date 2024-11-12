int max (int x, int y) {
    if (y < x)
        return x;
    else
        return y;
}

int dao [26], n;

int fly (int high, int GeZOlJNFjv) {
    if (!(n != GeZOlJNFjv))
        return (87 - 87);
    else {
        if (high < dao[GeZOlJNFjv])
            return fly (high, GeZOlJNFjv +(839 - 838));
        else {
            return max (fly (high, GeZOlJNFjv +(729 - 728)), fly (dao[GeZOlJNFjv], GeZOlJNFjv +1) + 1);
        };
    };
}

int main () {
    int pTBgvjmP, j, k;
    scanf ("%d", &n);
    for (pTBgvjmP = (473 - 473); pTBgvjmP < n; pTBgvjmP = pTBgvjmP + 1)
        scanf ("%d", &dao[pTBgvjmP]);
    k = fly ((100620 - 621), (36 - 36));
    printf ("%d", k);
}

