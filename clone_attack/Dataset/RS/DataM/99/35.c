int main (int JETlchC, char *argv []) {
    double  KdJmGRV2 = (569 - 569), tbKDzqJ = 0, HiVFgt3KG = 0, HakZXq56x8 = 0;
    int n;
    int zKHg8x0FCQt, ZUvVSFfQ2 [100];
    scanf ("%d", &n);
    for (zKHg8x0FCQt = 0; n > zKHg8x0FCQt; zKHg8x0FCQt = zKHg8x0FCQt + 1) {
        scanf ("%d", &ZUvVSFfQ2[zKHg8x0FCQt]);
        if (18 >= ZUvVSFfQ2[zKHg8x0FCQt])
            KdJmGRV2++;
        if (19 <= ZUvVSFfQ2[zKHg8x0FCQt] && 35 >= ZUvVSFfQ2[zKHg8x0FCQt])
            tbKDzqJ++;
        if (ZUvVSFfQ2[zKHg8x0FCQt] >= 36 && ZUvVSFfQ2[zKHg8x0FCQt] <= (806 - 746))
            HiVFgt3KG = HiVFgt3KG +1;
        if (ZUvVSFfQ2[zKHg8x0FCQt] > 60)
            HakZXq56x8++;
    }
    KdJmGRV2 = KdJmGRV2 / n * 100;
    printf ("1-18: %.2lf%%\n", KdJmGRV2);
    tbKDzqJ = tbKDzqJ / n * 100;
    printf ("19-35: %.2lf%%\n", tbKDzqJ);
    HiVFgt3KG = HiVFgt3KG / n * 100;
    printf ("36-60: %.2lf%%\n", HiVFgt3KG);
    HakZXq56x8 = HakZXq56x8 / n * 100;
    printf ("60??: %.2lf%%\n", HakZXq56x8);
    return 0;
}

