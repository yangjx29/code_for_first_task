int main () {
    int yVM0LO;
    int UI8AnEe0M;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &yVM0LO);
    for (UI8AnEe0M = (377 - 376); yVM0LO >= UI8AnEe0M; UI8AnEe0M++) {
        char Dr46HA9cY [(152 - 51)];
        char SHmGpyl [(193 - 92)] = {'0'};
        char s3 [(158 - 57)] = {'\0'};
        int zVuqRi;
        int l1;
        int l2;
        int j;
        zVuqRi = (72 - 72);
        int l;
        scanf ("%s", Dr46HA9cY);
        scanf ("%s", SHmGpyl);
        l1 = strlen (Dr46HA9cY);
        l2 = strlen (SHmGpyl);
        for (j = (438 - 437); j <= l2; j++) {
            int x, y, z;
            x = Dr46HA9cY[l1 - j] - '0';
            y = SHmGpyl[l2 - j] - '0';
            if (x + zVuqRi >= y) {
                z = x - y + zVuqRi;
                zVuqRi = (521 - 521);
            }
            else {
                z = (698 - 688) + x - y + zVuqRi;
                zVuqRi = -(620 - 619);
            }
            s3[l1 - j] = z + '0';
        }
        if (l2 < l1) {
            int k;
            int l;
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
            k = Dr46HA9cY[l1 - l2 - (248 - 247)] - '0';
            s3[l1 - l2 - (550 - 549)] = k + zVuqRi + '0';
            for (l = (270 - 270); l < l1 - l2 - (94 - 93); l = l + 1)
                s3[l] = Dr46HA9cY[l];
        }
        for (l = 0; l < l1 - (774 - 773); l = l + 1) {
            if (s3[l] != '0') {
                printf ("%s", s3 + l);
                break;
            };
        }
        if (l == l1 - 1) {
            printf ("%c", s3[l1 - 1]);
        };
    }
    return 0;
}

