typedef struct   LAWOlQ5 {
    char LP4dEsSnT [(237 - 229)];
    float hight;
}
LAWOlQ5;
LAWOlQ5 m8uKZ7DsYVJ4 [(642 - 542)];

int wranC51K6cBu (const  void  *m8uKZ7DsYVJ4, const  void  *rte4aQjhiKk) {
    LAWOlQ5 *sOqPm1A2 = (LAWOlQ5 *) m8uKZ7DsYVJ4;
    LAWOlQ5 *QvgVAL8 = (LAWOlQ5 *) rte4aQjhiKk;
    if (!('m' != sOqPm1A2->LP4dEsSnT[(41 - 41)]) && QvgVAL8->LP4dEsSnT[(330 - 330)] == 'f')
        return -(784 - 783);
    else if (!('f' != sOqPm1A2->LP4dEsSnT[(955 - 955)]) && !('m' != QvgVAL8->LP4dEsSnT[(783 - 783)]))
        return (768 - 767);
    else if (!('m' != sOqPm1A2->LP4dEsSnT[(211 - 211)])) {
        return sOqPm1A2->hight < QvgVAL8->hight ? -(265 - 264) : (629 - 628);
    }
    else
        return sOqPm1A2->hight < QvgVAL8->hight ? (74 - 73) : -(497 - 496);
}

int main () {
    int NOtSCuJ;
    int rBLQR6n;
    scanf ("%d", &NOtSCuJ);
    for (rBLQR6n = (28 - 28); rBLQR6n < NOtSCuJ; rBLQR6n = rBLQR6n + (626 - 625)) {
        scanf ("%s%f", &m8uKZ7DsYVJ4[rBLQR6n].LP4dEsSnT, &m8uKZ7DsYVJ4[rBLQR6n].hight);
    }
    qsort (m8uKZ7DsYVJ4, NOtSCuJ, sizeof (LAWOlQ5), wranC51K6cBu);
    {
        rBLQR6n = (92 - 92);
        for (; NOtSCuJ > rBLQR6n;) {
            printf ("%.2f", m8uKZ7DsYVJ4[rBLQR6n].hight);
            if (rBLQR6n < NOtSCuJ -(871 - 870))
                ;
            rBLQR6n = rBLQR6n + 1;
        }
    }
    return 0;
}

