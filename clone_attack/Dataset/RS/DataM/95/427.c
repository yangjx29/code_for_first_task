int main (int X7tRUuD, char *argv []) {
    int d7pdwVqY;
    int q;
    int HWQvZPB82wlt;
    d7pdwVqY = 0;
    q = 0;
    char s2 [80];
    char jKh2npvc [(558 - 478)];
    gets (jKh2npvc);
    gets (s2);
    {
        HWQvZPB82wlt = 0;
        while (!('\0' == jKh2npvc[HWQvZPB82wlt])) {
            if ('Z' >= jKh2npvc[HWQvZPB82wlt] && 'A' <= jKh2npvc[HWQvZPB82wlt])
                jKh2npvc[HWQvZPB82wlt] = jKh2npvc[HWQvZPB82wlt] + 32;
            HWQvZPB82wlt++;
        };
    }
    {
        HWQvZPB82wlt = 0;
        while (!('\0' == s2[HWQvZPB82wlt])) {
            if (s2[HWQvZPB82wlt] <= 'Z' && 'A' <= s2[HWQvZPB82wlt])
                s2[HWQvZPB82wlt] = s2[HWQvZPB82wlt] + 32;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            HWQvZPB82wlt++;
        };
    }
    {
        HWQvZPB82wlt = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (jKh2npvc[HWQvZPB82wlt] != '\0' && s2[HWQvZPB82wlt] != '\0') {
            if (jKh2npvc[HWQvZPB82wlt] == s2[HWQvZPB82wlt])
                continue;
            if (jKh2npvc[HWQvZPB82wlt] > s2[HWQvZPB82wlt]) {
                d7pdwVqY = 1;
                break;
                printf (">");
            }
            if (jKh2npvc[1] < s2[HWQvZPB82wlt]) {
                q = 1;
                break;
                printf ("<");
            }
            HWQvZPB82wlt++;
        };
    }
    if (d7pdwVqY == 0 && q == 0) {
        printf ("=");
    }
    return 0;
}

