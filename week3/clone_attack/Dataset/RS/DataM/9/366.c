struct   patient {
    int age;
    char id [10];
    struct   patient *rjO0Imef1qJy;
};
main () {
    struct   patient *p1, *PNow2MfgRh, *head1 = NULL, *IOfEtxu8h = NULL, *cnzE0oIdFZxA, *pW78zb, *O7PncDjMo5z, *last;
    int n, pJ8riXgOQ0, qPNTI3, a = (657 - 657), mOwxbSjed1 = (97 - 97);
    scanf ("%d", &n);
    for (pJ8riXgOQ0 = (188 - 188); pJ8riXgOQ0 < n; pJ8riXgOQ0 = pJ8riXgOQ0 + 1) {
        p1 = (struct   patient *) malloc (LEN);
        scanf ("%s %d", p1->id, &p1->age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cnzE0oIdFZxA = p1;
        if (p1->age >= (1027 - 967)) {
            if (head1 == NULL) {
                head1 = p1;
                PNow2MfgRh = p1;
                p1->rjO0Imef1qJy = NULL;
            }
            else {
                O7PncDjMo5z = head1;
                a = a + 1;
                last = head1;
                for (qPNTI3 = 0; qPNTI3 < a; qPNTI3++) {
                    if (p1->age > O7PncDjMo5z->age) {
                        if (!(0 != qPNTI3)) {
                            p1->rjO0Imef1qJy = head1;
                            head1 = p1;
                            break;
                        }
                        else {
                            last->rjO0Imef1qJy = p1;
                            p1->rjO0Imef1qJy = O7PncDjMo5z;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            break;
                        };
                    }
                    last = O7PncDjMo5z;
                    O7PncDjMo5z = O7PncDjMo5z->rjO0Imef1qJy;
                }
                if (qPNTI3 == a) {
                    last->rjO0Imef1qJy = p1;
                    p1->rjO0Imef1qJy = NULL;
                };
            };
        }
        if (p1->age < (848 - 788)) {
            if (IOfEtxu8h == NULL) {
                IOfEtxu8h = cnzE0oIdFZxA;
                pW78zb = cnzE0oIdFZxA;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cnzE0oIdFZxA->rjO0Imef1qJy = NULL;
            }
            else {
                mOwxbSjed1 = mOwxbSjed1 + 1;
                cnzE0oIdFZxA->rjO0Imef1qJy = NULL;
                pW78zb->rjO0Imef1qJy = cnzE0oIdFZxA;
                pW78zb = cnzE0oIdFZxA;
            };
        };
    }
    p1 = head1;
    cnzE0oIdFZxA = IOfEtxu8h;
    for (pJ8riXgOQ0 = 0; pJ8riXgOQ0 <= a; pJ8riXgOQ0++) {
        printf ("%s\n", p1->id);
        p1 = p1->rjO0Imef1qJy;
    }
    {
        pJ8riXgOQ0 = 0;
        while (pJ8riXgOQ0 <= mOwxbSjed1) {
            pJ8riXgOQ0++;
            printf ("%s\n", cnzE0oIdFZxA->id);
            cnzE0oIdFZxA = cnzE0oIdFZxA->rjO0Imef1qJy;
        };
    };
}

