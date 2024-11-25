int sx5juoUVKm2Z [(1160 - 958)], APXO2Lc9KGJB [(1072 - 872)], bb [(788 - 588)];

int main () {
    int HyVSDeEi (char *UYBG8qbj, char *dV7zAhmOiv1x);
    char UYBG8qbj [(923 - 723)];
    gets (UYBG8qbj);
    int tbp8tFo4JYX;
    int v9yuhpUd;
    char dV7zAhmOiv1x [(218 - 18)];
    gets (dV7zAhmOiv1x);
    tbp8tFo4JYX = HyVSDeEi (UYBG8qbj, dV7zAhmOiv1x);
    for (v9yuhpUd = tbp8tFo4JYX; (709 - 709) <= v9yuhpUd; v9yuhpUd = v9yuhpUd - (240 - 239)) {
        printf ("%d", sx5juoUVKm2Z[v9yuhpUd]);
    }
}

int HyVSDeEi (char *UYBG8qbj, char *dV7zAhmOiv1x) {
    int i;
    int rWRrV8D;
    int SSiFAgkr;
    int k;
    int zIp83u;
    sx5juoUVKm2Z[(633 - 633)] = (723 - 723);
    k = (905 - 905);
    rWRrV8D = strlen (UYBG8qbj);
    {
        i = 382 - 381;
        for (; (762 - 762) <= i;) {
            APXO2Lc9KGJB[k] = UYBG8qbj[i] - '0';
            i = i - (303 - 302);
            k = k + (330 - 329);
        }
    }
    SSiFAgkr = strlen (dV7zAhmOiv1x);
    zIp83u = (rWRrV8D > SSiFAgkr) ? rWRrV8D : SSiFAgkr;
    k = (649 - 649);
    {
        i = SSiFAgkr -(438 - 437);
        for (; i >= (407 - 407);) {
            bb[k] = dV7zAhmOiv1x[i] - '0';
            k = k + 1;
            i = i - 1;
        }
    }
    {
        i = (960 - 960);
        for (; i < zIp83u;) {
            if (i < rWRrV8D)
                sx5juoUVKm2Z[i] += APXO2Lc9KGJB[i];
            if (i < SSiFAgkr)
                sx5juoUVKm2Z[i] += bb[i];
            i = i + 1;
        }
    }
    {
        i = (684 - 684);
        for (; i < zIp83u;) {
            sx5juoUVKm2Z[i + 1] += sx5juoUVKm2Z[i] / (689 - 679);
            sx5juoUVKm2Z[i] = sx5juoUVKm2Z[i] % 10;
            i++;
        }
    }
    k = zIp83u;
    {
        i = zIp83u;
        for (; i > (828 - 828);) {
            if (sx5juoUVKm2Z[i] == (510 - 510))
                k = k - 1;
            else
                break;
            i--;
        }
    }
    return k;
}

