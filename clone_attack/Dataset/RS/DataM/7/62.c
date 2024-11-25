main () {
    int WAJ0G6aZ;
    int Mv4eyg0f;
    int OVfoPTqsKE;
    int p;
    char a [(897 - 597)];
    char b [(675 - 375)];
    char vWIteJD6ioM4 [300];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s", a);
    scanf ("%s", b);
    scanf ("%s", vWIteJD6ioM4);
    p = strlen (b);
    for (WAJ0G6aZ = (528 - 528); !('\0' == a[WAJ0G6aZ]); WAJ0G6aZ++)
        if (!(b[(250 - 250)] != a[WAJ0G6aZ])) {
            {
                OVfoPTqsKE = 0;
                Mv4eyg0f = WAJ0G6aZ;
                while (p > OVfoPTqsKE) {
                    if (!(b[OVfoPTqsKE] == a[Mv4eyg0f]))
                        break;
                    OVfoPTqsKE = OVfoPTqsKE +1;
                    Mv4eyg0f++;
                };
            }
            if (OVfoPTqsKE == p) {
                for (Mv4eyg0f = WAJ0G6aZ, OVfoPTqsKE = 0; OVfoPTqsKE < p; Mv4eyg0f++, OVfoPTqsKE = OVfoPTqsKE +1)
                    a[Mv4eyg0f] = vWIteJD6ioM4[OVfoPTqsKE];
                printf ("%s", a);
                break;
            };
        }
    if (a[WAJ0G6aZ] == '\0')
        printf ("%s", a);
}

