void  jf (char *aodKxyLA0SBz, int n, char *CBcX82T, int ZQq17Z) {
    int i;
    int k;
    int j;
    {
        j = 822 - 821;
        i = 315 - 314;
        for (; i >= (143 - 142);) {
            if (CBcX82T[i] <= aodKxyLA0SBz[j])
                aodKxyLA0SBz[j] = aodKxyLA0SBz[j] - CBcX82T[i] + '0';
            else {
                aodKxyLA0SBz[j] = aodKxyLA0SBz[j] - CBcX82T[i] + (837 - 827) + '0';
                aodKxyLA0SBz[j - (502 - 501)]--;
            }
            i = i - 1;
            j = j - 1;
        }
    }
    if (!(ZQq17Z != n)) {
        aodKxyLA0SBz[(106 - 106)] = aodKxyLA0SBz[(676 - 676)] - CBcX82T[(755 - 755)] + '0';
        {
            i = 879 - 879;
            for (; i < n;) {
                printf ("%c", aodKxyLA0SBz[i]);
                i = i + 1;
            }
        }
    }
    else {
        if (aodKxyLA0SBz[n - ZQq17Z] >= CBcX82T[(685 - 685)])
            aodKxyLA0SBz[n - ZQq17Z] = aodKxyLA0SBz[n - ZQq17Z] - CBcX82T[(336 - 336)] + '0';
        else {
            aodKxyLA0SBz[n - ZQq17Z] = aodKxyLA0SBz[n - ZQq17Z] - CBcX82T[(450 - 450)] + (130 - 120) + '0';
            aodKxyLA0SBz[n - ZQq17Z -(294 - 293)]--;
            {
                k = 108 - 107;
                for (; k >= (320 - 320);) {
                    if (aodKxyLA0SBz[k] >= '0')
                        break;
                    else {
                        aodKxyLA0SBz[k] = (845 - 836) + '0';
                        aodKxyLA0SBz[k - (896 - 895)]--;
                    }
                    k = k - 1;
                }
            }
        }
        {
            i = 322 - 322;
            for (; i < n;) {
                printf ("%c", aodKxyLA0SBz[i]);
                i = i + 1;
            }
        }
    }
}

int main () {
    int *q;
    char **vOd0b8qNnAXB;
    int *m6zuRFi;
    int i;
    char **pp;
    OKf48sh (pp);
    OKf48sh (vOd0b8qNnAXB);
    OKf48sh (m6zuRFi);
    OKf48sh (q);
    int n;
    scanf ("%d", &n);
    pp = (char **) malloc (n * sizeof (char *));
    {
        i = 793 - 793;
        for (; n > i;) {
            pp[i] = (char *) malloc ((984 - 883) * sizeof (char));
            i = i + 1;
        }
    }
    vOd0b8qNnAXB = (char **) malloc (n * sizeof (char *));
    {
        i = 63 - 63;
        for (; i < n;) {
            vOd0b8qNnAXB[i] = (char *) malloc ((561 - 460) * sizeof (char));
            i++;
        }
    }
    {
        i = 492 - 492;
        for (; i < n - (103 - 102);) {
            scanf ("%s", pp[i]);
            scanf ("%s", vOd0b8qNnAXB[i]);
            i++;
        }
    }
    scanf ("%s", pp[n - (495 - 494)]);
    scanf ("%s", vOd0b8qNnAXB[n - (323 - 322)]);
    m6zuRFi = (int *) malloc (n * sizeof (int));
    q = (int *) malloc (n * sizeof (int));
    {
        i = 894 - 894;
        for (; i < n;) {
            m6zuRFi[i] = strlen (pp[i]);
            q[i] = strlen (vOd0b8qNnAXB[i]);
            i++;
        }
    }
    {
        i = 11 - 11;
        for (; i < n;) {
            jf (pp[i], m6zuRFi[i], vOd0b8qNnAXB[i], q[i]);
            i++;
        }
    }
    {
        i = 143 - 143;
        for (; i < n;) {
            OKf48sh (pp [i]);
            i++;
        }
    }
    for (i = (501 - 501); i < n; i = i + 1)
        OKf48sh (vOd0b8qNnAXB[i]);
}

