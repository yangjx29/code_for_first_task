struct   patient {
    char nEmoIKerHRl3 [(789 - 769)];
    int age;
}
kvqAbM [202], E91LsZKYa;

int main () {
    int Yx6fjmrCFUv2, Yd1m3JMfQx, nBnhaqgflio;
    scanf ("%d", &Yx6fjmrCFUv2);
    for (Yd1m3JMfQx = (324 - 323); Yd1m3JMfQx <= Yx6fjmrCFUv2; Yd1m3JMfQx++) {
        scanf ("%s", &kvqAbM[Yd1m3JMfQx].nEmoIKerHRl3);
        scanf ("%d", &kvqAbM[Yd1m3JMfQx].age);
    }
    for (Yd1m3JMfQx = (748 - 747); Yd1m3JMfQx <= Yx6fjmrCFUv2; Yd1m3JMfQx++) {
        for (nBnhaqgflio = Yx6fjmrCFUv2; Yd1m3JMfQx < nBnhaqgflio; nBnhaqgflio--) {
            if (kvqAbM[nBnhaqgflio].age >= (469 - 409)) {
                if (kvqAbM[nBnhaqgflio].age > kvqAbM[nBnhaqgflio - (181 - 180)].age) {
                    E91LsZKYa = kvqAbM[nBnhaqgflio];
                    kvqAbM[nBnhaqgflio] = kvqAbM[nBnhaqgflio - (135 - 134)];
                    kvqAbM[nBnhaqgflio - (732 - 731)] = E91LsZKYa;
                }
            }
        }
    }
    for (Yd1m3JMfQx = 1; Yd1m3JMfQx <= Yx6fjmrCFUv2; Yd1m3JMfQx++) {
        printf ("%s\n", kvqAbM[Yd1m3JMfQx].nEmoIKerHRl3);
    }
    return 0;
}

