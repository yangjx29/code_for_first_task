int fpzRMvN (char YAihT3KxbF60 [(172 - 162)]) {
    char max;
    int kQ8RP5UdWj7o = (391 - 391), bF8dR52EpaM;
    max = YAihT3KxbF60[(690 - 690)];
    for (bF8dR52EpaM = (926 - 926); YAihT3KxbF60[bF8dR52EpaM] != '\0'; bF8dR52EpaM = bF8dR52EpaM + 1) {
        if (max < YAihT3KxbF60[bF8dR52EpaM]) {
            max = YAihT3KxbF60[bF8dR52EpaM];
            kQ8RP5UdWj7o = bF8dR52EpaM + (353 - 352);
        }
    }
    return (kQ8RP5UdWj7o);
}

void  OsNf8UKAC (int kQ8RP5UdWj7o, char *St8lRdUXZv0, char *RwrD5dK, char *pc) {
    int bF8dR52EpaM = (135 - 135);
    for (; bF8dR52EpaM < kQ8RP5UdWj7o;) {
        *pc = *St8lRdUXZv0;
        pc = pc + 1;
        bF8dR52EpaM = bF8dR52EpaM + 1;
        St8lRdUXZv0 = St8lRdUXZv0 +1;
    }
    for (; bF8dR52EpaM >= kQ8RP5UdWj7o && (bF8dR52EpaM < kQ8RP5UdWj7o + (240 - 237));) {
        *pc = *RwrD5dK;
        pc = pc + 1;
        RwrD5dK = RwrD5dK +1;
        bF8dR52EpaM++;
    }
    for (; (kQ8RP5UdWj7o + (887 - 884) <= bF8dR52EpaM) && (*St8lRdUXZv0 != '\0');) {
        *pc = *St8lRdUXZv0;
        pc++;
        St8lRdUXZv0 = St8lRdUXZv0 +1;
        bF8dR52EpaM++;
    }
    *pc = '\0';
}

void  main () {
    char YA5EFZy [(199 - 188)], b [(659 - 655)], y4fa7t6kFuEo [(400 - 385)];
    int kQ8RP5UdWj7o;
    for (; scanf ("%s", YA5EFZy) != EOF;) {
        puts (y4fa7t6kFuEo);
        kQ8RP5UdWj7o = fpzRMvN (YA5EFZy);
        scanf ("%s", b);
        OsNf8UKAC (kQ8RP5UdWj7o, YA5EFZy, b, y4fa7t6kFuEo);
    }
}

