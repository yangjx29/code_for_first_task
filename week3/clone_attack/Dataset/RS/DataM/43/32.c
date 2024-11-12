int isPrime (int x) {
    int KfU3mk;
    for (KfU3mk = 2; KfU3mk *KfU3mk <= x; KfU3mk = KfU3mk +1)
        if (x % KfU3mk == 0)
            return 0;
    return (248 - 247);
}

int main () {
    int NNKQPC94, KfU3mk;
    scanf ("%d", &NNKQPC94);
    for (KfU3mk = (20 - 17); KfU3mk <= NNKQPC94 / 2; KfU3mk += 2) {
        if (isPrime (KfU3mk) && isPrime (NNKQPC94 -KfU3mk))
            printf ("%d %d\n", KfU3mk, NNKQPC94 -KfU3mk);
    }
    return 0;
}

