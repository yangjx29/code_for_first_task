int main (int argc, char *argv []) {
    char jAE05x8KZz [80];
    char s1 [80];
    gets (s1);
    gets (jAE05x8KZz);
    int i, p = 0, q = 0;
    {
        i = 0;
        for (; s1[i] != '\0';) {
            if ('Z' >= s1[i] && 'A' <= s1[i])
                s1[i] = s1[i] + 32;
            i++;
        };
    }
    {
        i = 0;
        for (; jAE05x8KZz[i] != '\0';) {
            if ('Z' >= jAE05x8KZz[i] && 'A' <= jAE05x8KZz[i])
                jAE05x8KZz[i] = jAE05x8KZz[i] + 32;
            i++;
        };
    }
    for (i = 0; s1[i] != '\0' && jAE05x8KZz[i] != '\0'; i = i + 1) {
        if (!(jAE05x8KZz[i] != s1[i]))
            continue;
        if (s1[i] > jAE05x8KZz[i]) {
            p = 1;
            break;
        }
        if (s1[1] < jAE05x8KZz[i]) {
            q = 1;
            break;
        };
    }
    if (!(0 != p) && q == 0) {
    }
    return 0;
}

