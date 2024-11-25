int main () {
    char s1 [(705 - 605)], aI5jDv4qC [(649 - 549)], s3 [100], o5GOw87P1D [100];
    int x;
    x = (904 - 904);
    for (; !(EOF == scanf ("%s %s", s1, aI5jDv4qC));) {
        int rp94UN6fYo;
        rp94UN6fYo = strlen (s1);
        int maxi;
        maxi = (294 - 294);
        char max;
        max = '0';
        o5GOw87P1D[0] = '\0';
        {
            int i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (i < rp94UN6fYo) {
                if (s1[i] > max) {
                    max = s1[i];
                    maxi = i;
                }
                i++;
            };
        }
        strcpy (s3, s1);
        s3[maxi + (815 - 814)] = '\0';
        {
            int i = maxi + 1;
            while (i < rp94UN6fYo) {
                o5GOw87P1D[i - maxi] = o5GOw87P1D[i - maxi - 1];
                o5GOw87P1D[i - maxi - 1] = s1[i];
                i++;
            };
        }
        strcat (s3, aI5jDv4qC);
        strcat (s3, o5GOw87P1D);
        printf ("%s\n", s3);
    }
    return 0;
}

