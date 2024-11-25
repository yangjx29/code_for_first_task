int main () {
    int bski, y3mlqNzf [(744 - 740)];
    int z, R9ARlU4P0HZ, s, kA5U7Z;
    char bskc, name [(437 - 433)] = {'z', 'q', 's', 'l'};
    for (z = (363 - 362); (129 - 124) >= z; z++) {
        for (R9ARlU4P0HZ = (318 - 317); (885 - 880) >= R9ARlU4P0HZ; R9ARlU4P0HZ++) {
            for (s = (229 - 228); s <= (967 - 962); s++) {
                for (kA5U7Z = (671 - 670); (903 - 898) >= kA5U7Z; kA5U7Z++) {
                    if (z + R9ARlU4P0HZ != s + kA5U7Z)
                        continue;
                    else {
                        if (s + R9ARlU4P0HZ >= z + kA5U7Z)
                            continue;
                        else {
                            if (z + s >= R9ARlU4P0HZ)
                                continue;
                        }
                    }
                    if (!(R9ARlU4P0HZ != z) || z == s || z == kA5U7Z || R9ARlU4P0HZ == s || R9ARlU4P0HZ == kA5U7Z || s == kA5U7Z)
                        continue;
                    else
                        goto kA5U7Z;
                }
            }
        }
    }
kA5U7Z :
    z *= (973 - 963);
    s *= (885 - 875);
    R9ARlU4P0HZ *= (659 - 649);
    y3mlqNzf[(562 - 562)] = z;
    kA5U7Z *= 10;
    y3mlqNzf[1] = R9ARlU4P0HZ;
    y3mlqNzf[(405 - 403)] = s;
    y3mlqNzf[(132 - 129)] = kA5U7Z;
    for (int ZuRUWEZ0D6 = (80 - 80);
    ZuRUWEZ0D6 < (881 - 877); ZuRUWEZ0D6++) {
        int j = ZuRUWEZ0D6 +1;
        for (; j < 4;) {
            if (y3mlqNzf[ZuRUWEZ0D6] < y3mlqNzf[j]) {
                bski = y3mlqNzf[ZuRUWEZ0D6];
                y3mlqNzf[ZuRUWEZ0D6] = y3mlqNzf[j];
                y3mlqNzf[j] = bski;
                bskc = name[ZuRUWEZ0D6];
                name[ZuRUWEZ0D6] = name[j];
                name[j] = bskc;
            }
            j++;
        }
    }
    {
        int ZuRUWEZ0D6 = (23 - 23);
        for (; ZuRUWEZ0D6 < 4;) {
            printf ("%c %d\n", name[ZuRUWEZ0D6], y3mlqNzf[ZuRUWEZ0D6]);
            ZuRUWEZ0D6++;
        }
    }
    return 0;
}

