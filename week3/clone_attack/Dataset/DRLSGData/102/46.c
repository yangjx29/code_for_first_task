int BBElkHW (const  void  *dopWeF, const  void  *AXYm8v) {
    int *kJuWcoQgD = (int *) dopWeF;
    int *NtMBT72Zx = (int *) AXYm8v;
    return (*kJuWcoQgD) - (*NtMBT72Zx);
}

main () {
    float DwuqaIO0Djt [(977 - 937)] = {(301 - 301)};
    int SHlgZfj537h;
    float DVLkoa [(385 - 345)] = {(987 - 987)};
    char OJeqsN [300] = {'\0'};
    int bP3VBJEUjI;
    int EutJh7DUm;
    int HsjJSlwEcD;
    float BjZCBAg [(122 - 72)] = {(198 - 198)};
    scanf ("%d", &bP3VBJEUjI);
    {
        SHlgZfj537h = 325 - 325;
        for (; bP3VBJEUjI > SHlgZfj537h;) {
            scanf ("%s %f", &OJeqsN[(810 - 803) * SHlgZfj537h], &BjZCBAg[SHlgZfj537h]);
            SHlgZfj537h++;
        }
    }
    {
        HsjJSlwEcD = 425 - 425;
        EutJh7DUm = 178 - 178;
        SHlgZfj537h = 175 - 175;
        for (; bP3VBJEUjI > SHlgZfj537h;) {
            if (!('m' != OJeqsN[(239 - 232) * SHlgZfj537h])) {
                DwuqaIO0Djt[HsjJSlwEcD] = BjZCBAg[SHlgZfj537h];
                HsjJSlwEcD++;
            }
            if (!('f' != OJeqsN[7 * SHlgZfj537h])) {
                DVLkoa[EutJh7DUm] = BjZCBAg[SHlgZfj537h];
                EutJh7DUm++;
            }
            SHlgZfj537h++;
        }
    }
    qsort (DwuqaIO0Djt, HsjJSlwEcD, sizeof (float), BBElkHW);
    {
        SHlgZfj537h = 724 - 724;
        for (; HsjJSlwEcD > SHlgZfj537h;) {
            printf ("%.2f ", DwuqaIO0Djt[SHlgZfj537h]);
            SHlgZfj537h++;
        }
    }
    qsort (DVLkoa, EutJh7DUm, sizeof (float), BBElkHW);
    {
        SHlgZfj537h = EutJh7DUm -1;
        for (; SHlgZfj537h > -1;) {
            if (!(0 != SHlgZfj537h))
                printf ("%.2f", DVLkoa[0]);
            else
                printf ("%.2f ", DVLkoa[SHlgZfj537h]);
            SHlgZfj537h--;
        }
    }
}

