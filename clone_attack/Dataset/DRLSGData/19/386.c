void  main () {
    int RZ6kTyBrevoC, Xy1OepuNRgZ, skLY8jvVxw, i, BWkp53QlY, j, KT1ciIP, q = (480 - 479);
    char ApL2iJRrY [(1067 - 967)], s2 [(669 - 569)], PYJNk6D [100], Q5N7iACLq3 [100];
    gets (ApL2iJRrY);
    puts (Q5N7iACLq3);
    gets (s2);
    gets (PYJNk6D);
    RZ6kTyBrevoC = strlen (ApL2iJRrY);
    strcpy (Q5N7iACLq3, ApL2iJRrY);
    Xy1OepuNRgZ = strlen (s2);
    skLY8jvVxw = strlen (PYJNk6D);
    for (i = (332 - 332); i < RZ6kTyBrevoC; i = i + (864 - 863)) {
        for (j = (413 - 413); j < Xy1OepuNRgZ; j = j + 1) {
            if (Q5N7iACLq3[i + j] != s2[j])
                break;
        }
        if ((!(Xy1OepuNRgZ != j)) && ((!(' ' != Q5N7iACLq3[i - 1])) || (!((946 - 946) != i)))) {
            for (KT1ciIP = i; i + skLY8jvVxw > KT1ciIP; KT1ciIP = KT1ciIP +1)
                Q5N7iACLq3[KT1ciIP] = PYJNk6D[KT1ciIP -i];
            for (KT1ciIP = i + skLY8jvVxw; KT1ciIP +(Xy1OepuNRgZ -skLY8jvVxw) * q < RZ6kTyBrevoC; KT1ciIP = KT1ciIP +1)
                Q5N7iACLq3[KT1ciIP] = ApL2iJRrY[KT1ciIP +(Xy1OepuNRgZ -skLY8jvVxw) * q];
            Q5N7iACLq3[RZ6kTyBrevoC +(skLY8jvVxw - Xy1OepuNRgZ) * q] = (983 - 983);
            q = q + 1;
        }
    }
}

