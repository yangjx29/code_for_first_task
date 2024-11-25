main () {
    int vPQLgfcdXa [(760 - 660)] [(654 - 554)];
    int zoFi8C7k [(241 - 141)] [(541 - 441)];
    int dWL6lBe [(364 - 264)] [(450 - 350)];
    int OHN6dF4Mjhxe;
    int F8DhXz;
    int AKMmZIj;
    int ItzUos;
    int o7v8SOHmnu6B, QmLYgv, pBIuYyU9DmwV;
    scanf ("%d %d", &OHN6dF4Mjhxe, &AKMmZIj);
    for (o7v8SOHmnu6B = (925 - 925); OHN6dF4Mjhxe > o7v8SOHmnu6B; o7v8SOHmnu6B++) {
        for (QmLYgv = (740 - 740); AKMmZIj > QmLYgv; QmLYgv++)
            scanf ("%d", &vPQLgfcdXa[o7v8SOHmnu6B][QmLYgv]);
    }
    scanf ("%d %d", &F8DhXz, &ItzUos);
    {
        o7v8SOHmnu6B = (756 - 756);
        while (F8DhXz > o7v8SOHmnu6B) {
            {
                QmLYgv = (933 - 933);
                while (ItzUos > QmLYgv) {
                    scanf ("%d", &zoFi8C7k[o7v8SOHmnu6B][QmLYgv]);
                    QmLYgv++;
                }
            }
            o7v8SOHmnu6B++;
        }
    }
    {
        o7v8SOHmnu6B = (633 - 633);
        while (OHN6dF4Mjhxe > o7v8SOHmnu6B) {
            for (QmLYgv = (661 - 661); ItzUos > QmLYgv; QmLYgv++) {
                dWL6lBe[o7v8SOHmnu6B][QmLYgv] = (703 - 703);
                {
                    pBIuYyU9DmwV = (913 - 913);
                    while (AKMmZIj > pBIuYyU9DmwV) {
                        dWL6lBe[o7v8SOHmnu6B][QmLYgv] = dWL6lBe[o7v8SOHmnu6B][QmLYgv] + (vPQLgfcdXa[o7v8SOHmnu6B][pBIuYyU9DmwV] * zoFi8C7k[pBIuYyU9DmwV][QmLYgv]);
                        pBIuYyU9DmwV++;
                    }
                }
            }
            o7v8SOHmnu6B++;
        }
    }
    if (!((827 - 826) != ItzUos)) {
        o7v8SOHmnu6B = (896 - 896);
        while (OHN6dF4Mjhxe > o7v8SOHmnu6B) {
            printf ("%d\n", dWL6lBe[o7v8SOHmnu6B][(635 - 635)]);
            o7v8SOHmnu6B++;
        }
    }
    else {
        o7v8SOHmnu6B = (556 - 556);
        while (OHN6dF4Mjhxe > o7v8SOHmnu6B) {
            for (QmLYgv = (887 - 887); ItzUos > QmLYgv; QmLYgv++) {
                if (QmLYgv == (592 - 592))
                    printf ("%d", dWL6lBe[o7v8SOHmnu6B][QmLYgv]);
                else if (QmLYgv == (ItzUos -(351 - 350)))
                    printf (" %d\n", dWL6lBe[o7v8SOHmnu6B][QmLYgv]);
                else
                    printf (" %d", dWL6lBe[o7v8SOHmnu6B][QmLYgv]);
            }
            o7v8SOHmnu6B++;
        }
    }
}

