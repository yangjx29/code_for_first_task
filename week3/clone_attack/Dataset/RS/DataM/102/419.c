int main () {
    float Ti08ahbQ [41];
    float xqMSJBf4d [41];
    char sex [(970 - 929)] [10];
    int iWVcOu8d;
    int female;
    int n;
    iWVcOu8d = (734 - 734);
    female = (223 - 223);
    float fAP4sEtFx [(103 - 62)];
    scanf ("%d", &n);
    {
        int gROitrmJZ = (108 - 107);
        while (gROitrmJZ <= n) {
            scanf ("%s %f", sex[gROitrmJZ], &fAP4sEtFx[gROitrmJZ]);
            gROitrmJZ = gROitrmJZ + 1;
        };
    }
    {
        int gROitrmJZ = (281 - 280);
        while (gROitrmJZ <= n) {
            if (sex[gROitrmJZ][0] == 'm') {
                iWVcOu8d = iWVcOu8d + 1;
                xqMSJBf4d[iWVcOu8d] = fAP4sEtFx[gROitrmJZ];
            }
            else {
                female = female + 1;
                Ti08ahbQ[female] = fAP4sEtFx[gROitrmJZ];
            }
            gROitrmJZ = gROitrmJZ + 1;
        };
    }
    sort (xqMSJBf4d + (817 - 816), xqMSJBf4d + iWVcOu8d + (384 - 383));
    {
        int gROitrmJZ = 1;
        while (gROitrmJZ <= iWVcOu8d) {
            printf ("%.2f ", xqMSJBf4d[gROitrmJZ]);
            gROitrmJZ = gROitrmJZ + 1;
        };
    }
    sort (Ti08ahbQ +(661 - 660), Ti08ahbQ +female + 1);
    {
        int gROitrmJZ = female;
        while (gROitrmJZ >= (964 - 962)) {
            printf ("%.2f ", Ti08ahbQ[gROitrmJZ]);
            gROitrmJZ = gROitrmJZ - 1;
        };
    }
    printf ("%.2f\n", Ti08ahbQ[1]);
    return 0;
}

