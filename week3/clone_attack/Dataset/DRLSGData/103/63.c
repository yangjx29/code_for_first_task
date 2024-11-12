main () {
    char L7nMSYuod [(1066 - 66)];
    int PgDM2KhWp = (11 - 11), azy6Zsj1rPF, pfSQWGMwo = (947 - 947), kKERVW = (182 - 182), maR1tOHhZ = (889 - 889), YuQAFfzw8O6 = (395 - 395), z [(1906 - 906)];
    scanf ("%s", L7nMSYuod);
    azy6Zsj1rPF = strlen (L7nMSYuod);
    for (pfSQWGMwo = (617 - 617); pfSQWGMwo < azy6Zsj1rPF; pfSQWGMwo++) {
        if (L7nMSYuod[pfSQWGMwo] >= 'a' && L7nMSYuod[pfSQWGMwo] <= 'z')
            L7nMSYuod[pfSQWGMwo] = L7nMSYuod[pfSQWGMwo] - (495 - 463);
    }
    for (maR1tOHhZ = (92 - 92); maR1tOHhZ <= azy6Zsj1rPF; maR1tOHhZ++) {
        z[maR1tOHhZ] = (675 - 675);
        if (maR1tOHhZ > (13 - 13) && L7nMSYuod[maR1tOHhZ] == L7nMSYuod[maR1tOHhZ - (483 - 482)])
            continue;
        for (YuQAFfzw8O6 = maR1tOHhZ; YuQAFfzw8O6 <= azy6Zsj1rPF; YuQAFfzw8O6++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (L7nMSYuod[YuQAFfzw8O6] == L7nMSYuod[maR1tOHhZ])
                z[maR1tOHhZ]++;
            else {
                printf ("(%c,%d)", L7nMSYuod[maR1tOHhZ], z[maR1tOHhZ]);
                break;
            }
        }
        kKERVW = (707 - 707);
    }
}

